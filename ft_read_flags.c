/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_flags.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42quebec.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 01:44:18 by slavoie           #+#    #+#             */
/*   Updated: 2021/11/19 05:44:37 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_legit_flags(char *input, int index)
{
	if (input[index] == 'c' || input[index] == 's' || input[index] == 'p'\
			|| input[index] == 'd' || input[index] == 'i' || input[index] == 'u'\
			|| input[index] == 'x' || input[index] == 'X' \
			|| input[index] == '%')
		return (1);
	return (0);
}

int	ft_read_flags(char *input, int index, va_list *list)
{
	if (input[index] == 'c')
		return (ft_putchar_int(va_arg(*list, int)));
	if (input[index] == 's')
		return (ft_putstr_int(va_arg(*list, char *)));
	if (input[index] == 'p')
		return (ft_pointer((unsigned long long)
				va_arg(*list, unsigned long long)));
	if (input[index] == 'd' || input[index] == 'i')
		return ((int)ft_intoa(va_arg(*list, int)));
	if (input[index] == 'u')
		return (ft_dec_usign((unsigned int)va_arg(*list, unsigned int)));
	if (input[index] == 'x')
		return (ft_dec_to_hex((unsigned int)va_arg(*list, unsigned int), 1));
	if (input[index] == 'X')
		return (ft_dec_to_hex((unsigned int)va_arg(*list, unsigned int), 0));
	if (input[index] == '%')
		return (ft_putchar_int('%'));
	return (0);
}
