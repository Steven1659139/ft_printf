/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42quebec.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 16:33:27 by slavoie           #+#    #+#             */
/*   Updated: 2021/11/19 05:43:54 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_read_input(char *input, va_list *list)
{
	int	count;
	int	index;

	count = 0;
	index = 0;
	while (1)
	{
		if (!input[index])
			break ;
		if (input[index] == '%' && input[index + 1])
		{
			if (!ft_legit_flags(input, ++index))
				break ;
			count += ft_read_flags(input, index, &(*list));
		}
		else if (input[index] == '%' && !input[index + 1])
			break ;
		else
			count += ft_putchar_int(input[index]);
		index++;
	}
	return (count);
}

int	ft_printf(const char *input, ...)
{
	va_list	list;
	int		count;

	count = 0;
	va_start(list, input);
	count += ft_read_input((char *)input, &list);
	va_end(list);
	return (count);
}
