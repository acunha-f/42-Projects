# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/18 05:05:40 by marvin            #+#    #+#              #
#    Updated: 2024/06/18 05:05:40 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC 			= cc
CFLAGS		= -Wall -Wextra -Werror
SRC			= error_utils.c ft_split.c push_swap_utils.c push_swap.c \
			push.c r_rotate.c rotate.c stack_related.c swap.c\
			stack_related_also.c main.c
OBJ			= $(SRC:.c=.o)

RM			= rm -f
ARCHIVE		= push_swap.a
NAME		= push_swap

all:		$(NAME)

$(NAME):	$(ARCHIVE)

$(ARCHIVE):	$(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean:	clean
	@$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
