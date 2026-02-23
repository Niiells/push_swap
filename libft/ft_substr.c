/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niebais <niebais@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 16:02:55 by niebais           #+#    #+#             */
/*   Updated: 2025/11/14 16:02:56 by niebais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*s2;

	i = 0;
	if (!s)
		return (NULL);
	if ((size_t) start > ft_strlen((char *) s))
		return (ft_strdup(""));
	if (len > ft_strlen((char *) s + start))
		len = ft_strlen((char *)s + start);
	s2 = (char *)ft_calloc(len + 1, sizeof(char));
	if (!s2)
		return (NULL);
	while (i < len)
	{
		s2[i] = s[start + i];
		i++;
	}
	return (s2);
}

// int main (void)
// {
// 	const char s[10] = "Nielsniels";
// 	unsigned int start = 5;
// 	size_t len = 5;
// 	printf("%s", ft_substr(s, start, len));
// 	return (0);
// }
