/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceribeir <ceribeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 20:28:50 by ceribeir          #+#    #+#             */
/*   Updated: 2023/04/13 20:28:50 by ceribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *src)
{
	int	i;
	int	s;
	int	n;

	i = 0;
	s = 1;
	n = 0;
	while (src[i] == ' ' || (src[i] >= 9 && src[i] <= 13))
			i++;
	if (src[i] == '+' || src[i] == '-')
	{
		if (src[i] == '-')
			s *= -1;
		i++;
	}
	while (src[i] >= '0' && src[i] <= '9')
	{
		n *= 10;
		n += src[i++] - '0';
	}
	return (n * s);
}

/*int main(void)
{
    const char  *s1 = "         -2147483648asdfvr  ";
    const char  *s2 = "casa";

    printf("result: %d\n", ft_atoi(s1));
    printf("not atoi: %d\n", ft_atoi(s2));
    return (0);
}*/
