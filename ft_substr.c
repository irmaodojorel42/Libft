/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 07:24:16 by marvin            #+#    #+#             */
/*   Updated: 2023/03/07 07:24:16 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *sub;
    size_t i;

    i = (ft_strlen(s) - start);
    if (i <= len)
        sub = malloc(sizeof(char) * (i + 1));
    else
        sub = malloc(sizeof(char) * (len + 1));
    if (sub == NULL)
        return (NULL);
    ft_memcpy(sub, &s[start], len);
    return (sub);
}

/*int main(void)
{
    const char    *s = "irmao do jorel";

    printf("%s\n", ft_substr(s, 9, 5));
    return(0);
}*/