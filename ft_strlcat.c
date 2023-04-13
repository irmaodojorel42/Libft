/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceribeir <ceribeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 20:33:43 by ceribeir          #+#    #+#             */
/*   Updated: 2023/04/13 20:33:43 by ceribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*strlcat faz a concatenação de src em dst, tendo como quantidade
maxima size caracteres, caso len de dst seja maior que size o retorno
é a len de src + size, do contrario o return é o tamanho total de dst
e src concatenados*/

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	if (size <= ft_strlen(dst))
		return (size + ft_strlen(src));
	i = ft_strlen(dst);
	j = 0;
	while (src[j] != '\0' && (i + 1) < size)
		dst[i++] = src[j++];
	dst[i] = '\0';
	return (i + ft_strlen(&src[j]));
}

/*int main(void)
{
    char    dst[20] = "casa";
    const char  *src = "amarela";

    printf("%zd\n", ft_strlcat(dst, src, 3));
    return (0);
}*/
