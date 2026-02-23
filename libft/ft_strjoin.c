/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niebais <niebais@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 18:08:09 by niebais           #+#    #+#             */
/*   Updated: 2025/11/14 18:11:28 by niebais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	int		i;
	int		n;
	char	*str;

	i = 0;
	n = 0;
	str = (char *) malloc((ft_strlen((char *) s1)
				+ ft_strlen((char *) s2) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (s1[i] != '\0')
	{
		str[n] = s1[i];
		i++;
		n++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		str[n] = s2[i];
		i++;
		n++;
	}
	str[n] = '\0';
	return (str);
}

// int	main(void)
// {
// 	const char	s1[] = "Hello";
// 	const char	s2[] = "Bye";
//
// 	printf("%s", ft_strjoin(s1, s2));
// 	return (0);
// }
