/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42quebec.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 04:18:06 by slavoie           #+#    #+#             */
/*   Updated: 2021/11/19 06:05:54 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_putstr_int(char *str)
{
	if (str == NULL)
		return (ft_putstr_int("(null)"));
	return ((int)write(1, str, ft_strlen(str)));
}
