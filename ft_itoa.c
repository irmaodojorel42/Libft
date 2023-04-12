/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 15:05:52 by marvin            #+#    #+#             */
/*   Updated: 2023/03/13 15:05:52 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	sizei(int n)
{
	int	i;

	if (n == 0)
		return (2);
	if (n == -2147483648)
		return (12);
	i = 1;
	if (n < 0)
	{
		i++;
		n *= -1;
	}
	while (n != 0)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

static char	*mini(int n)
{
	if (n == ((char)48))
		return ("0");
	else
		return ("-2147483648");
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;

	i = (sizei(n));
	str = (char *)malloc(sizeof(char) * (i--));
	if (str == NULL)
		return (NULL);
	str[i--] = '\0';
	if (n == -2147483648 || n == ((char)48))
		str = mini(n);
	else if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	while (n > 9)
	{
		str[i--] = (n % 10 + '0');
		n = n / 10;
	}
	if (n >= 0 && n <= 9)
		str[i] = (n + '0');
	return (str);
}

/*int main(void)
{
    printf("%s\n", ft_itoa(-2147483648));
    return (0);
}*/
