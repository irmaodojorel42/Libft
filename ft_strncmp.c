/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceribeir <ceribeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 20:34:30 by ceribeir          #+#    #+#             */
/*   Updated: 2023/04/13 20:34:30 by ceribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] == '\0' || s2[i] == '\0')
			return (((unsigned char)s1[i]) - ((unsigned char)s2[i]));
		else if (s1[i] != s2[i])
			return (((unsigned char)s1[i]) - ((unsigned char)s2[i]));
		i++;
	}
	return (0);
}

/*int main(void)
{
    const char  *s1 = "casa";
    const char  *s2 = "caSa";

    printf("%d\n", ft_strncmp(s1, s2, 5)); //n > diff
    printf("%d\n", ft_strncmp(s1, s2, 2)); //n < diff
    return (0);
}*/
