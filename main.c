/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 11:31:36 by marvin            #+#    #+#             */
/*   Updated: 2023/03/01 11:31:36 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int main(void)
{
    const char  *s1 = "caSa";
    const char  *s2 = "casa";

    printf("%d\n", ft_memcmp(s1, s2, 5)); //n > diff
    printf("%d\n", ft_memcmp(s1, s2, 2)); //n < diff
    return (0);
}