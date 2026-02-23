/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niebais <niebais@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:13:17 by niebais           #+#    #+#             */
/*   Updated: 2025/10/18 15:39:00 by niebais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *) s;
	while (n--)
		*p++ = 0;
}

// int	main(void)
// {
// 	char s[] = "This is my code";
// 	size_t n = 8;
// 	ft_bzero(s, n);
// 	printf("%s\n", s);
// 	return (0);
// }
