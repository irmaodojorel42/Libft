/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceribeir <ceribeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 20:29:14 by ceribeir          #+#    #+#             */
/*   Updated: 2023/04/13 20:29:14 by ceribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nblock, size_t sizeblock)
{
	size_t	totalsize;
	void	*result;

	totalsize = sizeblock * nblock;
	result = malloc(totalsize);
	if (result == NULL)
		return (NULL);
	if (nblock == 0 || sizeblock == 0)
		return (result);
	ft_memset(result, 0, totalsize);
	return (result);
}

/*int main(void)
{   
    char    *result;

    result = ft_calloc(5, 5);
    printf("%p\n", result);
    printf("%s\n", result);
    return(0);
}*/
