/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceribeir <ceribeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 20:33:18 by ceribeir          #+#    #+#             */
/*   Updated: 2023/04/13 20:33:18 by ceribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup;

	dup = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (dup == NULL)
		return (0);
	ft_memcpy(dup, s, ft_strlen(s) + 1);
	return (dup);
}

/*int main(void)
{
    const char  *a = "irmao do jorel";
    char    *result;

    result = ft_strdup(a);
    printf("%s\n", result);
    printf("%p\n", result);
    printf("%p\n", a);
    
    return (0);
}*/
