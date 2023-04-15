/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceribeir <ceribeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 20:31:15 by ceribeir          #+#    #+#             */
/*   Updated: 2023/04/13 20:31:15 by ceribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;

	d = (char *)dest;
	s = (char *)src;
	if (!dest && !src)
		return (NULL);
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
