/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceribeir <ceribeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 20:29:03 by ceribeir          #+#    #+#             */
/*   Updated: 2023/04/13 20:29:03 by ceribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *s, size_t n)
{
	int		i;
	char	*c;

	c = (char *)s;
	i = 0;
	while (n > 0)
	{
		c[i++] = '\0';
		n--;
	}
	return (0);
}

/*int main(void)
{
    char    c[50] = "casa amarela";
    int i;

    i = 0;
    ft_bzero(c, 50);
    while (i < 50)
    {
        i++;
        if (c[i] != '\0')
        {
            printf("erro\n");
            return (0);
        }
    }
    printf("sucesso\n");
    return (0);
}*/
