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
#include "libft/libft.h"

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
		if(duplicates(arg, i, arg[i]))
			return (free(arg), NULL);
		i++;
	}
	return (arg);
}

bool duplicates(int *arg, size_t i, int num)
{
	size_t n;

	n = 0;
	while(n < i)
	{
		if(arg[n] == num)
			return (1);
		n++;
	}
	return (0);
}

t_stack *init_stack(int *nums, size_t size) 
{
	t_stack *s;

	s = malloc(sizeof(t_stack));
	if(s == NULL)
		return (NULL);
	s->stack = malloc(sizeof(int) * size);
	if(s->stack == NULL)
		return (free(s), NULL);
	ft_memcpy(s->stack, nums, sizeof(int) * size);
	s->size = size;
	return (s);
}

t_stack *new_stack(void)
{
	t_stack *s;

	s = malloc(sizeof(t_stack));
	if(s == NULL)
		return (NULL);
	s->stack = NULL;
	s->size = 0;
	return (s);
}

void	free_stack(t_stack *stack)
{
	if (stack)
	{
		free(stack->stack);
		free(stack);
	}
}

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
	a = init_stack(arg, argc - 1);
	if (!a)
	{
		free(arg);
		return (-1);
	}
	b = new_stack();
	if (!b)
	{
		free_stack(a);
		free(arg);
		return (-1);
	}
	free(arg);
	return (0);
}
