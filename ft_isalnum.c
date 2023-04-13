/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceribeir <ceribeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 20:29:24 by ceribeir          #+#    #+#             */
/*   Updated: 2023/04/13 20:29:24 by ceribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}

/*int main(void)
{
    printf("alp %d\n", ft_isalnum(122));
    printf("num %d\n", ft_isalnum(49));
    printf("not alnum %d\n", ft_isalnum(32));

    return (0);
}*/
