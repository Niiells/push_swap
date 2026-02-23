/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niebais <niebais@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 15:52:25 by niebais           #+#    #+#             */
/*   Updated: 2025/11/26 23:42:05 by niebais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	size_t			j;
	unsigned char	*srcb;
	unsigned char	*destb;

	srcb = (unsigned char *)src;
	destb = (unsigned char *)dest;
	i = 0;
	j = 0;
	if (!destb && !srcb)
		return (dest);
	while (n--)
	{
		destb[i] = srcb[j];
		i++;
		j++;
	}
	return (destb);
}

// int main(void)
// {
// 	char * re;
// 	char dest[] = "Hallo";
// 	const void *src = "Doei";
// 	size_t n = 25;
//     re = memcpy(NULL, "test", 0);
//     printf("%s\n", re);
// }
