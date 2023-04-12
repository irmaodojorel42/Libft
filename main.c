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
#include <stdio.h>

int main(void)
{
    const char  *s1 = "zizzbrzbmbzabzozb bdzbzob bjzbobrzbeblzb 4bzz2b";
    const char  *set = "";
    
    printf("%s\n", ft_strtrim(s1, set));
    return (0);
}
