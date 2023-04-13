/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceribeir <ceribeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 20:30:27 by ceribeir          #+#    #+#             */
/*   Updated: 2023/04/13 20:30:27 by ceribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	sizei(long int l)
{
	int	i;

	i = 0;
	if (l == 0)
		return (1);
	if (l < 0)
	{
		i++;
		l *= -1;
	}
	while (l != 0)
	{
		i++;
		l = l / 10;
	}
	return (i);
}

static void	ft_converter(char *str, int len, long num)
{
	while (num > 0)
	{
		str[len] = 48 + (num % 10);
		num /= 10;
		len--;
	}
}

char	*ft_itoa(int n)
{
	char		*str;
	long int	l;
	int			i;

	l = n;
	i = (sizei(l));
	str = (char *)malloc(i + 1);
	if (str == NULL)
		return (NULL);
	str[i--] = '\0';
	if (l == 0)
	{
		str[0] = 48;
		return (str);
	}
	else if (l < 0)
	{
		str[0] = '-';
		l *= -1;
	}
	ft_converter(str, i, l);
	return (str);
}

/*int main(void)
{
    printf("%s\n", ft_itoa(-2147483648));
    return (0);
}*/
