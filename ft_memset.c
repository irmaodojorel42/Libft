/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceribeir <ceribeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 20:31:37 by ceribeir          #+#    #+#             */
/*   Updated: 2023/04/13 20:31:37 by ceribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			j;
	unsigned char	*i;

	i = (unsigned char *)s;
	j = 0;
	while (n > 0)
	{
		i[j] = (unsigned char)c;
		i++;
		n--;
	}
	return (s);
}

/*
int main(void)
{
    char    s[50] = "celsormneto@gmail.com";

    ft_memset(s, '*', 9);
    printf("%s\n", s);
    return (0);
}*/
