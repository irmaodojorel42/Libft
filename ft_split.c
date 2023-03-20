/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 16:14:20 by marvin            #+#    #+#             */
/*   Updated: 2023/03/14 16:14:20 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int sizema(const char *s, char c)
{
    int i;
    int size;

    i = -1;
    size = 0;
    while(s[++i] != '\0')
    {
        if (s[i] == c)
            size++;
    }
    size = i - size;
    return (size);
}

char    *word(char const *s, char *new, char c)
{
    int i;

    i = 0;
    while (s[i] != c)
        i++;
    new = malloc(sizeof(char) * i + 1);
    if (new == NULL)
        return (NULL);
    i = -1;
    while (s[++i] != '\0' && s[i] != c)
        new[i] = s[i];
    new[i] = '\0';
    return (new);
}

char    **ft_split(char const *s, char c)
{
    int i;
    int w;
    char    **new;
    int size;

    size = (sizema(s, c) + 1);
    new = (char **)malloc(sizeof(char *) * size);
    i = -1;
    w = 1;
    while (s[++i] != '\0')
    {   
        if(s[i] != c)
        {   
            new[w] = word(&s[i], new[w], c);
            w++;
            while (s[i] != c)
                i++;
        }
        else
        {
            while(s[i] == c)
                i++;
        }
        i--;
    }
    new[size] = '\0';
    return (new);
}

/*int main(void)
{
    char const  *s = "@irmao@do@jorel@42";
    char    **result;

    result = ft_split(s, '@');
    printf("%p\n", result);
    printf("%s\n", result[1]);
    printf("%s\n", result[2]);
    printf("%s\n", result[3]);
    printf("%s\n", result[4]);
    printf("%p\n", result[5]);
    printf("%p\n", result[6]);
    return (0);
}*/