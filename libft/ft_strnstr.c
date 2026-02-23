/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niebais <niebais@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 14:36:18 by niebais           #+#    #+#             */
/*   Updated: 2025/10/07 18:11:09 by niebais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (little[0] == 0)
		return ((char *)big);
	while ((big[i] != '\0') && (i <= len))
	{
		j = 0;
		while ((i + j) < len && big[i + j] == little[j] && little[j] != '\0')
		{
			j++;
			if (little[j] == '\0')
				return ((char *) big + i);
		}
		i++;
	}
	return (0);
}
//
// int	main (void)
// {
// 	const char	big[] = "abcdefgh";
// 	const char	little[] = "abc";
// 	size_t	len = 3;
// 	printf("%p\n", ft_strnstr(big, little, len));
// 	printf("%p\n", strnstr(big, little, len));
// 	return (0);
// }
