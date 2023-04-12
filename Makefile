# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    MakeFile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/27 22:01:06 by marvin            #+#    #+#              #
#    Updated: 2023/02/27 22:01:06 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.SILENT:

NAME = libft.a

CC = gcc

FLAGS = -Wall -Werror -Wextra

RM = rm -f

SRC =	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c \
		ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c \
		ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c \
		ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c \
		ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_putchar_fd.c \
		ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_striteri.c

SRCO = $(SRC:.c=.o)

CME = ar -rcs

$(NAME):	$(SRCO)
		$(CME) $(NAME) $(SRCO)

all:	$(NAME)

clean:
		$(RM) $(SRCO)

fclean:	clean
			$(RM) $(NAME)

re:	fclean all

run:	re
		rm -f result
		$(CC) $(FLAGS) -o result main.c -L. -lft