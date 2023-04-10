/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 10:41:24 by marvin            #+#    #+#             */
/*   Updated: 2023/03/02 10:41:24 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if ((dest == NULL) || (src == NULL))
	{
		return (NULL);
	}
	if (dest > src)
	{
		while (n > 0)
		{
			((unsigned char *)dest)[n - 1] = ((unsigned char *)src)[n - 1];
			n--;
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
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
