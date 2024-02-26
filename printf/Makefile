# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/25 16:33:41 by marvin            #+#    #+#              #
#    Updated: 2024/01/25 16:33:41 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC 			= cc
#CFLAGS		= -Wall -Wextra -Werror
SRC			= ft_printf.c ft_putchar.c ft_putnbr.c ft_putstr.c \
			ft_strchr.c ft_vprints.c ft_unumber.c ft_printp.c \
			ft_puthexn.c maintest.c
OBJ			= $(SRC:.c=.o)

RM			= rm -f
NAME		= libftprintf.a

all:		$(NAME)

$(NAME):	$(OBJ)
	$(CC) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean:	clean
	@$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
