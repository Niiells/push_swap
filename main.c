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

int *parse(int argc, char **argv)
{
	int i;
	int *arg;

	arg = malloc(argc * sizeof(int));
	if (!arg)
		return (NULL);
	i = 0;
	i++;
	while(i != argc - 1)
	{
		if(!strtoi(argv[argc - i - 1], &arg[i]))
			return (free(arg), NULL);
		i++;
	}
	return (&arg);
}


int main(int argc, char **argv)
{
	t_stack *a;
	t_stack *b;
	int		*arg;

	if (argc < 2)
		return 1;
	arg = parse(argc - 1, &argv[1]);
}
