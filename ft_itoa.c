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

int sizei(int n)
{
    int i;

    i = 0;
        if (n < 0)
    {
        i++;
        n *= -1;
    }
    if (n > 9)
    {
        while (n / 10 != 0)
        {
            n = n / 10;
            i++; 
        }
    }
    if (n >= 0 && n <= 9)
    {
        i++;
    }
    i++;
    return(i);
}

char    *mini(char *str)
{
    str = "-2147483648";
    return (str);
}

char    *ft_itoa(int n)
{
    char    *str;
    int i;

    i = sizei(n);
    str = malloc(i--);
    if (str == NULL)
        return (NULL);
    str[i--] = '\0';
    if (n == -2147483648)
        return (mini(str));
    if (n < 0)
    {
        str[0] = 45;
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