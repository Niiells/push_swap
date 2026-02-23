/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niebais <niebais@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 14:54:21 by niebais           #+#    #+#             */
/*   Updated: 2025/10/07 18:11:09 by niebais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		over;

	i = 0;
	over = 0;
	if (n <= 0)
		return (0);
	while ((--n != 0) && (s1[i] != 0) && (s2[i] != 0))
	{
		if ((unsigned char)s1[i] == (unsigned char)s2[i])
			i++;
		else
		{
			over = (unsigned char)s1[i] - (unsigned char)s2[i];
			return (over);
		}
	}
	over = (unsigned char)s1[i] - (unsigned char)s2[i];
	return (over);
}

// int main(void)
// {
// 	const char *s1 = "Hello";
// 	const char *s2 = "Helho";
// 	size_t n = 5;
//
// 	ft_strncmp(s1, s2, n);
// 	printf("%d\n", ft_strncmp(s1, s2, n));
// 	printf("%d\n", strncmp(s1, s2, n));
// 	return (0);
// }
