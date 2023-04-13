/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceribeir <ceribeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 20:32:11 by ceribeir          #+#    #+#             */
/*   Updated: 2023/04/13 20:32:11 by ceribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*write(fd, ft_itoa(nb), ft_strlen(ft_itoa(nb)))*/

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	if (nb == -2147483648)
	{
		ft_putchar_fd('-', fd);
		ft_putchar_fd('2', fd);
		ft_putnbr_fd(147483648, fd);
	}
	else if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(-nb, fd);
	}
	else if (nb >= 10)
	{
		ft_putnbr_fd(nb / 10, fd);
		ft_putnbr_fd(nb % 10, fd);
	}
	else if (nb >= 0 && nb <= 9)
		ft_putchar_fd(nb + '0', fd);
}

/*int main(void)
{
    ft_putnbr_fd(-2147483648, 1);
    write(1, "\n", 1);
    return (0);
}*/
