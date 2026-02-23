/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niebais <niebais@email.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 15:18:13 by niebais           #+#    #+#             */
/*   Updated: 2025/10/18 15:30:05 by niebais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*tmp;

	tmp = (unsigned char *) s;
	while (n--)
		*(tmp++) = (unsigned char) c;
	return (s);
}

// int main(void)
// {
//     char s[] = "This is my code";
//     int c = 98;
//     size_t n = 10;
//     ft_memset(s, c, n);
//     printf("%s\n", s);
//     return (0);
// }
