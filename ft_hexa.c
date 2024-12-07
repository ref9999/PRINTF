/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riel-fas <riel-fas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 13:30:52 by riel-fas          #+#    #+#             */
/*   Updated: 2024/12/07 14:19:02 by riel-fas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexa(unsigned long nbr, char c)
{
	int count;
	int x;
	char *str;
	char *base;

	count = 0;
	x = 0;
	base = "0123456789abcdef";
	// if (c == 0)
	// 	count += ft_char('0');
	if (c == 'p')
		count += ft_str("0x");
	if (c == 'X')
		base = "012345679ABCDEF";
	while (nbr)
	{
		str[x] = base[nbr % 16];
		nbr /= 16;
		x++;
	}
	str[x--] = '\0';
	while (x >= 0)
	{
		count += ft_char(str[x--]);
	}
	return (count);
}