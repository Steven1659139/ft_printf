/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42quebec.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 03:32:49 by slavoie           #+#    #+#             */
/*   Updated: 2021/11/21 15:55:24 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_abs(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}

static int	ft_numlen(int n, int neg)
{
	int	size;

	size = 1;
	while (n / 10)
	{
		size++;
		n /= 10;
	}
	return (size + neg);
}

int	ft_intoa(int n)
{
	int		size;
	char	nchar[12];
	int		neg;

	neg = 0;
	if (n < 0)
		neg = 1;
	size = ft_numlen(n, neg);
	if (neg)
		nchar[0] = '-';
	nchar[size--] = '\0';
	while (size >= neg)
	{
		nchar[size--] = ft_abs(n % 10) + '0';
		n /= 10;
	}
	return (ft_putstr_int(nchar));
}
