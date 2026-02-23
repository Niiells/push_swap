/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niebais <niebais@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 22:07:47 by niebais           #+#    #+#             */
/*   Updated: 2025/11/11 22:07:49 by niebais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	intlen(int n)
{
	int	count;

	count = 1;
	while (n / 10)
	{
		++count;
		n = n / 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	long	n2;
	int		min;
	char	*str;
	int		i;

	n2 = n;
	min = 0;
	if (n2 < 0)
	{
		n2 *= -1;
		min++;
	}
	i = intlen(n) + min;
	str = malloc((i * sizeof(char) + 1));
	if (!str)
		return (0);
	if (min > 0)
		str[0] = '-';
	str[i] = '\0';
	while (i - min)
	{
		str[--i] = (n2 % 10) + '0';
		n2 = n2 / 10;
	}
	return (str);
}

// int main(void)
// {
// 	int n = -1;
// 	printf("%s", ft_itoa(n));
// 	return (0);
// }
