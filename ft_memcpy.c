/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 10:04:27 by marvin            #+#    #+#             */
/*   Updated: 2023/03/02 10:04:27 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*d;
	const char	*s;
	int		i;

	d = (char *)dest;
	s = (const char *)src;
	while (n)
	{
		*d++ = *s++;
		n--;
	}
	return (dest);
}

/*
int main(void)
{
    char    dst[20];
    const char  *src = "irmao do jorel 42";

    ft_memcpy(dst, src, 17);
    printf("%s\n", dst);
    return (0);
}*/
