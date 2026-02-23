/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niebais <niebais@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 14:54:39 by niebais           #+#    #+#             */
/*   Updated: 2025/10/14 14:53:16 by niebais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	n;

	n = ft_strlen(dst);
	if (size <= n)
		return (ft_strlen((char *) src) + size);
	ft_strlcpy(dst + n, src, size - n);
	return (n + ft_strlen((char *)src));
}
// int    main(void)
// {
//     char	dst[80] = "sevens";
//     const char	src[80] = "sixsix";
//
//     size_t size = 9;
//     printf("niels\n""%zu\t%s\n", ft_strlcat(dst, src, size), dst);
//     // printf("niet niels\n""%zu\t%s\n", strlcat(dstb, srcb, size), dstb);
//     return (0);
// }
