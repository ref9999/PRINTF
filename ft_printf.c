/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riel-fas <riel-fas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 12:29:11 by riel-fas          #+#    #+#             */
/*   Updated: 2024/12/07 10:07:12 by riel-fas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check(char z, const char *str, va_list ptr)
{
	int x;

	x = 0;
	if (str[z] == 'c')
		x += ft_char(va_arg(p, char));
	else if (str[z] == 's')
		x += ft_str(va_arg(p, char *));
	else if (str[z] == 'p')
		x += ft_pointer(va_arg(p, unsigned long));
	else if (str[z] == 'd' || str[z] == 'i')
		x += ft_nbr(va_arg(p, int));
	else if (str[z] == 'u')
		x += ft_base10(va_arg(p, unsigned int));
	else if (str[z] == 'x')
		x += ft_hexalow(va_arg(p, unsigned int));
	else if (str[z] == 'X')
		x += ft_hexaup(va_arg(p, unsigned int));
	else if (str[z] == '%')
		x += ft_char('%');
	else
		x += ft_char()
}

int	ft_printf(const char *str, ...)
{
	va_list p;
	int x;
	int y;

	x = 0;
	y = 0;
	va_start(p, str);
	while (str[x])
	{
		if (str[x] == '%')
		{
			if (!str[x + 1])
				return (y);
			y += ft_check(x++, str, p)
		}
		else
			ft_putchar(str[x]);
		x++;
	}
	va_end(p);
	return (y);
}