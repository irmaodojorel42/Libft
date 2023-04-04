/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 00:19:51 by marvin            #+#    #+#             */
/*   Updated: 2023/03/14 00:19:51 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    int i;
    int j;
    char    *result;

    i = 0;
    j = 0;
    result = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
    if (result == NULL)
        return (NULL);
    while (s1[i] != '\0')
    {
        result[i] = s1[i];
        i++;
    }
    while (s2[j] != '\0')
        result[i++] = s2[j++];
    result[i] = '\0';
    return (result);
}

/*int main(void)
{
    char const  *s1 = "irmao do ";
    char const  *s2 = "jorel";

    printf("%s\n", ft_strjoin(s1, s2));
    return (0);
}*/