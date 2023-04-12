/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:34:09 by marvin            #+#    #+#             */
/*   Updated: 2023/03/14 14:34:09 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	sizem(char const *s1, char const *set, int i, int j)
{
	int	size;

	size = 0;
	while (s1[i] != '\0')
	{
		while (set[j] != '\0')
		{
			if (s1[i] != set[j])
			{
				j++;
				if (set[j] == '\0')
				{
					size++;
					break;
				}
			}
			else if (s1[i] == set[j])
				break;
		}
		i++;
		j = 0;
	}
	return (size);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	c;
	char	*dest;

	i = -1;
	j = 0;
	c = 0;
	dest = malloc(sizeof(char) * (sizem(s1, set, c, j) + 1));
	if (dest == NULL)
		return (NULL);
	if (set[j] == 0 && s1[j] != '\0')
	{
		dest = ft_strdup(s1);
		return (dest);
	}
	while(s1[++i] != '\0')
	{
		while (s1[i] != set[j])
		{
			j++;
			if (set[j] == '\0')
			{
				dest[c++] = s1[i];
				break;
			}
		}
		j = 0;
	}
	dest[c] = '\0';
	return (dest);
}

/*int main(void)
{
    const char  *s1 = "zizzbrzbmbzabzozb bdzbzob bjzbobrzbeblzb 4bzz2b";
    const char  *set = "zb";
    
    printf("%s\n", ft_strtrim(s1, set));
    return (0);
}*/
