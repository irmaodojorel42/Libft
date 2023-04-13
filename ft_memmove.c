/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceribeir <ceribeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 20:31:25 by ceribeir          #+#    #+#             */
/*   Updated: 2023/04/13 20:31:25 by ceribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*tdest;
	char	*tsrc;

	i = 0;
	tdest = (char *)dst;
	tsrc = (char *)src;
	if (tdest == tsrc)
		return (dst);
	if (tdest > tsrc)
	{
		while (len--)
			tdest[len] = tsrc[len];
	}
	else
	{
		while (i < len)
		{
			tdest[i] = tsrc[i];
			i++;
		}
	}
	return (dst);
}

/*int	main(void)
{
	char	dest[100] = "casa amarela";
	const char	*src1 = "casa";
	const char	*src2 = "amarela";

	printf("%s\n", ft_memmove(dest, src1, 4));
	printf("%s\n", ft_memmove(dest, src2, 7));
	return(0);
}*/
