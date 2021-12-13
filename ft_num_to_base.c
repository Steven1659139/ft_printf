/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_num_to_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42quebec.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 20:50:26 by slavoie           #+#    #+#             */
/*   Updated: 2021/11/19 04:24:05 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"
#include "Libft/libft.h"

static int	ft_nb_digitbase(unsigned long long num, int base)
{
	int	nb_digit;

	nb_digit = 0;
	while (num != 0)
	{
		num /= base;
		nb_digit++;
	}
	return (nb_digit);
}

static char	*ft_convertbase(unsigned long long num, int base,
		char *str, int nb_digit)
{
	while (num != 0)
	{
		if (num % base < 10)
			str[nb_digit - 1] = num % base + 48;
		else
			str[nb_digit - 1] = num % base + 55;
		num /= base;
		nb_digit--;
	}
	return (str);
}

char	*ft_num_to_base(unsigned long long num, int base)
{
	char	*str;
	int		nb_digit;

	if (num == 0)
		return (ft_strdup("0"));
	nb_digit = ft_nb_digitbase(num, base);
	str = (char *)ft_calloc((nb_digit + 1), sizeof (char));
	str = ft_convertbase(num, base, str, nb_digit);
	return (str);
}
