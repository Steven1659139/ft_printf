/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dec_to_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42quebec.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 19:17:57 by slavoie           #+#    #+#             */
/*   Updated: 2021/11/19 04:20:35 by slavoie          ###   ########.fr       */
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

int	ft_dec_to_hex(unsigned int num, int low)
{
	char	*based;
	int		size;

	size = 0;
	num = (unsigned int)(4294967295 + 1 + num);
	based = ft_num_to_base((unsigned long long)num, 16);
	if (low)
		based = ft_low_hex(based);
	size = ft_putstr_int(based);
	free(based);
	return (size);
}
