/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 23:53:02 by marvin            #+#    #+#             */
/*   Updated: 2023/03/01 23:53:02 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *find, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (find[j] == '\0')
		return ((char * )str);
	while (str[i] != '\0' && i < n)
	{
		while (str[i] == find[j] && i < n)
		{
			i++;
			j++;
			if (find[j] == '\0')
				return ((char *)&str[i - j]);
		}
		j = 0;
		if (i == n)
			return (0);
		i++;
	}
	return (0);
}

/*#include <stdio.h>
#include "libft.h"

int main(void)
{
    const char *src = "uma bela casa";
    const char *find = "bela";

    printf("%s\n", ft_strnstr(src, find, 20));
    return (0);  
}*/