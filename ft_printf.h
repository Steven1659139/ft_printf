/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <slavoie@student.42quebec.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 13:16:36 by slavoie           #+#    #+#             */
/*   Updated: 2021/11/19 04:15:20 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# include "Libft/libft.h"

int		ft_putchar_int(char c);
int		ft_putstr_int(char *str);

int		ft_intoa(int n);

int		ft_legit_flags(char *input, int index);
int		ft_read_flags(char *input, int index, va_list *list);

char	*ft_num_to_base(unsigned long long num, int base);

int		ft_pointer(unsigned long long num);
int		ft_dec_usign(unsigned int num);
int		ft_dec_to_hex(unsigned int num, int low);

int		ft_read_input(char *input, va_list *list);
int		ft_printf(const char *input, ...);

#endif
