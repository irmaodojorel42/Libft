/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 21:53:31 by marvin            #+#    #+#             */
/*   Updated: 2023/03/01 21:53:31 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t  i;
    size_t  j;

    i = ft_strlen(dst);
    j = 0;
    while (src[j] && j < size)
        dst[i++] = src[j++];
    dst[i] = '\0';
    return (i);
}

/*int main(void)
{
    char    dst[20] = "casa";
    const char  *src = "amarela";

    printf("%zd\n", ft_strlcat(dst, src, 3));
    return (0);
}*/