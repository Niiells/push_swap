/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niebais <niebais@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 00:18:40 by niebais           #+#    #+#             */
/*   Updated: 2025/11/27 00:12:37 by niebais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = ft_strlen((char *)s1) - 1;
	while (ft_strchr(set, s1[i]))
		i++;
	if (i < j)
		while (ft_strchr(set, s1[j]))
			j--;
	str = ft_substr(s1, i, j - i + 1);
	return (str);
}

// int	main (void)
// {
// 	const char *s1 = "bnielsbaisb";
// 	const char *set = "b";
// 	printf("%s", ft_strtrim(s1, set));
// 	return (0);
// }