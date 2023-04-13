/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceribeir <ceribeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 20:34:41 by ceribeir          #+#    #+#             */
/*   Updated: 2023/04/13 20:34:41 by ceribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *smal, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*smal == '\0')
		return ((char *)big);
	if (!smal)
		return (NULL);
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] == smal[j] && smal[j] && i + j < len
			&& big[i + j])
			j++;
		if (!smal[j])
			return ((char *)big + i);
		i++;
	}
	return (NULL);
}

/*int main(void)
{
    const char *big = "uma bela casa";
    const char *find = "bela";

    printf("%s\n", ft_strnstr(src, find, 20));
    return (0);  
}*/
