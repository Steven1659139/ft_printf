# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: slavoie <slavoie@student.42quebec.>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/19 03:26:29 by slavoie           #+#    #+#              #
#    Updated: 2021/12/13 14:11:24 by slavoie          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.SILENT:

LIBFT			=	Libft/libft.a

SRCS 			=	ft_printf.c\
					ft_read_flags.c\
					ft_putchar_int.c\
					ft_putstr_int.c\
					ft_intoa.c\
					ft_num_to_base.c\
					ft_dec_to_hex.c\
					ft_dec_usign.c\
					ft_pointer.c\
					Libft/ft_calloc.c\
					Libft/ft_bzero.c\
					Libft/ft_strdup.c\
					Libft/ft_strlen.c\
					Libft/ft_memset.c

OBJS			=	$(SRCS:.c=.o)

HEADER			=	ft_printf.h

CC 				= gcc
CFLAGS			= -Wall -Werror -Wextra -I$(HEADER)

RM				= rm -f

NAME			= libftprintf.a

all:			$(NAME)

$(NAME):		$(OBJS) $(HEADER)
					ar rcs $(NAME) $?
					@echo "ft_printf compilé 🐥"

clean:
				$(MAKE) clean -C ./Libft
				rm -rf $(OBJS)

fclean:			clean
					$(MAKE) fclean -C ./Libft
					$(RM) $(NAME)
					@echo "Dossier nettoyer...🐥"

re:				fclean $(NAME)
