/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unbr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riel-fas <riel-fas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 08:15:08 by riel-fas          #+#    #+#             */
/*   Updated: 2024/12/09 10:48:50 by riel-fas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unbr(unsigned int nbr)
{
	int	x;

	x = 0;
	if (nbr > 9)
	{
		x += ft_unbr(nbr / 10);
	}
	x += ft_char((nbr % 10) + '0');
	return (x);
}