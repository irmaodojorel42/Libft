/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 16:16:19 by marvin            #+#    #+#             */
/*   Updated: 2023/03/24 16:16:19 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main(void)
{
    char const  *s = "@irmao@do@jorel@42";
    char    **result;

    result = ft_split(s, '@');
    printf("%p\n", result);
    printf("%s\n", result[0]);
    printf("%s\n", result[1]);
    printf("%s\n", result[2]);
    printf("%s\n", result[3]);
    printf("%p\n", result[4]);
    return (0);
}