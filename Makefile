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

run:
	gcc -g -Wall -Werror -Wextra ft_*.c libft.h main.c -o result

clean:
	rm -f result

all: clean run
	./result