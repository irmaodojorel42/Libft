/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceribeir <ceribeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 20:34:50 by ceribeir          #+#    #+#             */
/*   Updated: 2023/04/13 20:34:50 by ceribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = (ft_strlen(s));
	while (i >= 0)
	{
		if (s[i] == ((char)c))
			return ((char *)s + i);
		i--;
	}
	return (0);
}

/*
int main(void)
{
    const char  *s = "asaco";

    printf("%s\n", ft_strrchr(s, 'a'));
    return (0);
}*/
