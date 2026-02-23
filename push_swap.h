/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niebais <niebais@student.codam.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 19:54:57 by niebais           #+#    #+#             */
/*   Updated: 2026/02/21 20:54:29 by niebais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "push_swap.h"
#include <stdbool.h>
#include <stdlib.h>

typedef struct s_stack
{
	int			*stack;
	size_t		size;
}				t_stack;
