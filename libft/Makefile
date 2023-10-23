# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acunha-f <acunha-f@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/23 17:21:55 by acunha-f          #+#    #+#              #
#    Updated: 2023/10/23 21:28:50 by acunha-f         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC 			= cc
CFLAGS		= -Wall -Wextra -Werror
SRC			= ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
			ft_isdigit.c ft_isprint.c ft_memcpy.c ft_memset.c ft_strlen.c \
			ft_strncmp.c ft_toupper.c ft_tolower.c ft_memmove.c ft_strlcpy.c \
			ft_calloc.c ft_strlcat.c ft_strchr.c ft_strrchr.c ft_memchr.c \
			ft_memcmp.c ft_strnstr.c ft_strdup.c
OBJ			= $(SRC:.c=.o)
RM			= rm -f
NAME		= libft.a

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME):	$(OBJ)
				ar rcs $(NAME) $(OBJ)

all:		$(NAME)

clean:
				$(RM) $(OBJ)

fclean:		clean
				$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
