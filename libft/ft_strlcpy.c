/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niebais <niebais@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 14:45:45 by niebais           #+#    #+#             */
/*   Updated: 2025/10/14 14:53:16 by niebais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (ft_strlen((char *) src));
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen((char *) src));
}

//  int	main(void)
// {
//     char	src[] = "lorem ipsum dolor sit amet";
//     char	dst[100] = "";
//     size_t size = 2;
//
//     printf("%zu\n", ft_strlcpy(dst, src, size));
//     printf("%zu\n", strlcpy(dst, src, size));
//     return (0);
// }
