/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niebais <niebais@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 21:02:09 by niebais           #+#    #+#             */
/*   Updated: 2025/10/10 15:05:24 by niebais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z'))
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

// int    main (void)
// {
//     char    c;
//
//     c = 'a';
//     printf("%d\n", ft_isalnum(c));
//     printf("%d\n", isalnum(c));
// }
