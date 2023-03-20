/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 16:44:52 by marvin            #+#    #+#             */
/*   Updated: 2023/03/15 16:44:52 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    int i;
    char    *str;

    i = 0;
    str = malloc(sizeof(char) * (ft_strlen(s) + 1));
    while (s[i] != '\0')
    {
        str[i] = f(i, s[i]);
        i++;
    }
    str[i] = '\0';
    return (str);
}

/*int main(void)
{   
    ft_strmapi("dia", ft_putchar_fd());
    return (0);
}*/