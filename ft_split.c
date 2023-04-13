/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceribeir <ceribeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 20:33:01 by ceribeir          #+#    #+#             */
/*   Updated: 2023/04/13 20:33:01 by ceribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	sizema(const char *s, char c)
{
	int	i;
	int	size;

	i = -1;
	size = 0;
	while (s[++i] != '\0')
	{
		if ((s[i] != c) && (s[i + 1] == c || s[i + 1] == '\0'))
			size++;
	}
	return (size);
}

static char	*word(char const *s, char *new, char c)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
	new = malloc(sizeof(char) * i + 1);
	if (new == NULL)
		return (NULL);
	i = -1;
	while (s[++i] != '\0' && s[i] != c)
		new[i] = s[i];
	new[i] = '\0';
	return (new);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		w;
	char	**new;

	new = (char **)malloc(sizeof(char *) * (sizema(s, c) + 1));
	if (new == NULL)
		return (NULL);
	i = 0;
	w = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			new[w] = word(&s[i], new[w], c);
			w++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
		else
			i++;
	}
	new[w] = NULL;
	return (new);
}

/*int main(void)
{
    char const  *s = "@irmao@do@jorel@42";
    char    **result;

    result = ft_split(s, '@');
    printf("%p\n", result);
    printf("%s\n", result[0]);
    printf("%s\n", result[1]);
    printf("%s\n", result[2]);
    printf("%s\n", result[3]);
    printf("%p\n", result[4]);
    return (0);
}*/
