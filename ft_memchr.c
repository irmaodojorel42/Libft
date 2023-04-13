/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceribeir <ceribeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 20:30:47 by ceribeir          #+#    #+#             */
/*   Updated: 2023/04/13 20:30:47 by ceribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*a;

	i = 0;
	a = (unsigned char *)s;
	while (i < n)
	{
		if (a[i] == ((unsigned char)c))
			return ((void *)s + i);
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
