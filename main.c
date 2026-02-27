/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niebais <niebais@student.codam.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 19:53:35 by niebais           #+#    #+#             */
/*   Updated: 2026/02/21 19:54:14 by niebais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int *parse(char **argv, size_t size)
{
	size_t i;
	int *arg;

	arg = malloc(size * sizeof(*arg));
	if (!arg)
		return (NULL);
	i = 0;
	// i++;
	while(i < size)
	{
		if(!strtoi(argv[size - i - 1], &arg[i]))
			return (free(arg), NULL);
		i++;
	}
	return (arg);
}

// t_stack *init_stack(int *nums, size_t size) 
// {
//
// }

int main(int argc, char **argv)
{
	t_stack *a;
	t_stack *b;
	int		*arg;

	if (argc < 2)
		return 1;
	arg = parse(&argv[1], argc - 1);
	if (!arg)
		return (-1);
	// a = init_stack(arg, argc - 1);
	free(arg);
}
