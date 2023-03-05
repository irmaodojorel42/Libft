/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 19:17:32 by marvin            #+#    #+#             */
/*   Updated: 2023/03/04 19:17:32 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strdup(const char *s)
{
    char    *dup;

    dup = malloc(ft_strlen(s) + 1);
    if (dup == NULL)
        return (NULL);
    ft_memcpy(dup, s, ft_strlen(s) + 1);
    return (dup);
}

/*int main(void)
{
    const char  *a = "sopa de galinha";
    char    *result;

    result = ft_strdup(a);
    printf(":%s:\n", result);
    return (0);
}*/