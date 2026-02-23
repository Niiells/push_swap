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


// bool strtoi()
bool	ft_atoi2(const char *nptr, int *out)
{
	long num;
	int	sign;
	int	i;

	num = 0;
	sign = 0;
	i = 0;
	if (!ft_isdigit(*nptr))
		return false;
	// while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
	// 	i++;
	//
	sign = (*nptr == '-');
	if (nptr[i] == '-' || nptr[i] == '+')
		if (nptr[i] == '-')
			i++;
	while (ft_isdigit(nptr[i]))
		num = num * 10 + nptr[i++] - '0';
	if (!nptr[i])
		return false;
	if (sign)
		num = -num;
	*out = num;
	return (num >= INT_MIN || num <= INT_MAX);
	// if (! (sign % 2))
	// 	return (num);
	// return (-num);
}
