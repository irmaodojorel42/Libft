/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 18:50:18 by marvin            #+#    #+#             */
/*   Updated: 2023/03/01 18:50:18 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    <string.h>
#include    "libft.h"

size_t  ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t  i;
    size_t  j;

    j = ft_strlen(src);
    i = 0;
    while (i < size - 1)
    {
            dst[i] = src[i];
            i++;
    }
    dst[i] = '\0';
    return (j);
}