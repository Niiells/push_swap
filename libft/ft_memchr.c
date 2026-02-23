/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niebais <niebais@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 22:19:59 by niebais           #+#    #+#             */
/*   Updated: 2025/11/07 22:56:18 by niebais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s1;
	unsigned char	c1;
	size_t			i;

	s1 = (unsigned char *)s;
	c1 = c;
	i = 0;
	while (i < n)
	{
		if (s1[i] == c1)
			return (&s1[i]);
		i++;
	}
	return (0);
}

// int main(void)
// {
// 	const void *s = "Helle";
// 	int c = 'e';
// 	size_t n = 5;
// 	printf("%p\n", ft_memchr(s, c, n));
// 	printf("%p\n", memchr(s, c, n));
// }
