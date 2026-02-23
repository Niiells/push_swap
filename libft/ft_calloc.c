/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niebais <niebais@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 16:17:10 by niebais           #+#    #+#             */
/*   Updated: 2025/11/06 16:59:46 by niebais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	i;
	char	*tmp;

	i = 0;
	if (size != 0 && nmemb > (SIZE_MAX) / size)
		return (NULL);
	if (!nmemb || !size)
		return (malloc(0));
	tmp = malloc(nmemb * size);
	if (!tmp)
		return (NULL);
	while (i < (nmemb * size))
	{
		tmp[i] = 0;
		i++;
	}
	return (tmp);
}

// int main(void)
// {
// 	size_t nmemb = 0;
// 	size_t size = 2;
// 	printf("%p\n", ft_calloc(nmemb, size));
// 	printf("%p\n", calloc(nmemb, size));
// 	return (0);
// }
