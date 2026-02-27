/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niebais <niebais@student.codam.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 18:41:57 by niebais           #+#    #+#             */
/*   Updated: 2026/02/23 18:48:05 by niebais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"
#include <limits.h>

bool	strtoi(const char *nptr, int *out)
{
	long num;
	int	sign;
	int	i;

	num = 0;
	sign = 0;
	i = 0;
	sign = (*nptr == '-');
	if (nptr[i] == '-' || nptr[i] == '+')
		i++;
	if (!ft_isdigit(nptr[i]))
		return false;
	while (ft_isdigit(nptr[i]))
		num = num * 10 + nptr[i++] - '0';
	if (nptr[i])
		return false;
	if (sign)
		num = -num;
	*out = num;
	return (num >= INT_MIN && num <= INT_MAX);
}
