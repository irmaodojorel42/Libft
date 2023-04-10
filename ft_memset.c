/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 14:44:39 by marvin            #+#    #+#             */
/*   Updated: 2023/03/01 14:44:39 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*i;
	int		j;

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
