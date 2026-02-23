/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niebais <niebais@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 22:55:50 by niebais           #+#    #+#             */
/*   Updated: 2025/11/13 00:33:41 by niebais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	n2;

	n2 = n;
	if (n2 < 0)
	{
		write(fd, "-", 1);
		n2 = n2 * -1;
	}
	if (n2 / 10)
	{
		ft_putnbr_fd(n2 / 10, fd);
		ft_putnbr_fd(n2 % 10, fd);
	}
	else
	{
		n2 = n2 + 48;
		write(fd, &n2, 1);
	}
}

// int	main(void)
// {
// 	ft_putnbr_fd(-5, 2);
// 	write(1, "\n", 1);
//
// // 	ft_putnbr_fd(42, 1);
// // 	write(1, "\n", 1);
// //
// // 	ft_putnbr_fd(-42, 1);
// // 	write(1, "\n", 1);
// //
// // 	ft_putnbr_fd(2147483647, 1);
// // 	write(1, "\n", 1);
// //
// // 	ft_putnbr_fd(-2147483648, 1);
// // 	write(1, "\n", 1);
// //
// 	return (0);
// }
