/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 16:15:36 by marvin            #+#    #+#             */
/*   Updated: 2023/03/05 16:15:36 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *calloc(size_t nblock, size_t sizeblock)
{
    size_t  totalsize;
    void    *result;

    totalsize = sizeblock * nblock;
    result = malloc(totalsize);
    if (result == NULL)
        return (0);
    ft_memset(result, 0, totalsize);
    return (result);
}