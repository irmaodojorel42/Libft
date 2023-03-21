/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 23:13:50 by marvin            #+#    #+#             */
/*   Updated: 2023/03/02 23:13:50 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;
    unsigned char   *a;

    i = 0;
    a = (unsigned char *)s;
    while (i < n)
    {
        if (a[i] == c)
            return ((unsigned char *)s + i);
        i++;
    }
    return (NULL);
}

/*int main(void)
{
    char    s[50] = "esse é o irmao do jorel 42";
    char    *x;

    x = ft_memchr(s, 'i', 15);
    printf("%s\n", x);
    printf("%p\n", ft_memchr(s, 'i', 5));
    return (0);
}*/