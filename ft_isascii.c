/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 18:44:37 by marvin            #+#    #+#             */
/*   Updated: 2023/02/27 18:44:37 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isascii (int c)
{
    if (c >= 0 && c <= 127)
        return (1);
    return (0);
}

/*#include <stdio.h>
#include "libft.h"

int main(void)
{
    printf("ascii %d\n", ft_isascii(49));
    printf("not ascii %d\n", ft_isascii(200));

    return (0);
}*/