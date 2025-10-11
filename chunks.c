/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armeneze <armeneze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 16:52:22 by armeneze          #+#    #+#             */
/*   Updated: 2025/10/09 16:14:50 by armeneze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	size_chunk(int n)
{
	int	c;

	if (n <= 3)
		c = 1;
	if (n <= 10)
		c = 5;
	else if (n <= 50)
		c = 10;
	else if (n <= 100)
		c = 20;
	else if (n <= 500)
		c = 100;
	return (c);
}

void	move_half(t_b_node **b, int chunk_size, int current_limit)
{
	t_b_node	*first;
	int			n;
	int			min;
	int			max;

	min = current_limit - chunk_size;
	max = current_limit;

	n = get_list_size(b);
	first = *b;
	if ((min + max) / 2 > first->index)
		rb(b, 1);
	return ;
}

void	push_chunks(t_a_node **a, t_b_node **b)
{
	int			n;
	int			chunk_size;
	int			i;
	t_a_node	*head;
	int			current_limit;

	i = 0;
	n = get_list_size(a);
	chunk_size = size_chunk(n);
	current_limit = chunk_size;
	while (*a != NULL)
	{
		move_a(a, b, current_limit);
		move_half(b, chunk_size, current_limit);
		i++;
		if (i >= current_limit)
		{
			chunk_size = chunk_size - 10;
			current_limit += chunk_size;
		}
	}
}
