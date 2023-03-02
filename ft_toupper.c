/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 20:19:27 by marvin            #+#    #+#             */
/*   Updated: 2023/03/02 20:19:27 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_toupper(int c)
{
    if (c >= 97 && c <= 122)
        c -= 32;
    return (c);
}

/*#include <stdio.h>
#include "libft.h"

int main(void)
{
    printf("converse: %c\n", ft_toupper('a'));
    printf("not converse: %c\n", ft_toupper('5'));
    return (0);
}*/