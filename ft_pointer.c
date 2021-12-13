/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointeur.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42quebec.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 19:23:06 by slavoie           #+#    #+#             */
/*   Updated: 2021/11/19 04:21:43 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*ft_low_hex(char *based)
{
	int	index;

	index = 0;
	while (based[index])
	{
		if (based[index] >= 'A' && based[index] <= 'Z')
			based[index] += 32;
		index++;
	}
	return (based);
}

int	ft_pointer(unsigned long long num)
{
	char	*pointer;
	int		size;

	size = 0;
	size += ft_putstr_int("0x");
	if (!num)
		return (size + ft_putchar_int('0'));
	pointer = ft_num_to_base(num, 16);
	size += ft_putstr_int(ft_low_hex(pointer));
	free(pointer);
	return (size);
}
