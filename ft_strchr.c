/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceribeir <ceribeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 20:33:12 by ceribeir          #+#    #+#             */
/*   Updated: 2023/04/13 20:33:12 by ceribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == ((char)c))
			return ((char *)s + i);
		i++;
	}
	if (s[i] == ((char)c))
		return ((char *)s + i);
	return (NULL);
}

/*int main(void)
{
    const char  *s = "casaco";

    printf("%s\n", ft_strchr(s, 'a'));
    return (0);
}*/
