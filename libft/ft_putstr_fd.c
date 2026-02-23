/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niebais <niebais@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 22:07:55 by niebais           #+#    #+#             */
/*   Updated: 2025/11/12 22:18:46 by niebais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *str, int fd)
{
	if (str)
	{
		while (*str != '\0')
		{
			write(fd, str, 1);
			str++;
		}
	}
}

// int	main(void)
//
// {
// 	char	*str;
// 	int		fd = 2;
// 	str = "Hello World!\n";
// 	ft_putstr_fd.c(str);
// }
