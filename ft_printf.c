/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riel-fas <riel-fas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 12:29:11 by riel-fas          #+#    #+#             */
/*   Updated: 2024/12/06 16:50:01 by riel-fas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check(int x, const char *str, va_list ptr)





int	ft_printf(const char *str, ...)
{
	va_list p;
	int x;
	int y;

	x = 0;
	va_list start(p, str);
	while (str[x])
	{
		if (str[x] == '%')
		{
			if ()

			y += ft_check(x++, str, p)
		}
		else
			ft_put;

	}



}