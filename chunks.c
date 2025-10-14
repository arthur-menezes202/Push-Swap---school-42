/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armeneze <armeneze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 16:52:22 by armeneze          #+#    #+#             */
/*   Updated: 2025/10/14 18:34:10 by armeneze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	size_chunk(int n)
{
	int	c;

	if (n <= 3)
		c = 1;
	if (n <= 10)
		c = 2;
	else if (n <= 50)
		c = 10;
	else if (n <= 100)
		c = 20;
	else
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
	n = get_list_size_b(b);
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
	chunk_size = size_chunk(get_list_size(a));
	current_limit = chunk_size;
	while (i < n)
	{
		head = *a;
		if (head->index < current_limit)
		{
			pb(a, b, 1);
			move_half(b, chunk_size, current_limit);
			i++;
		}
		else
			ra(a, 1);
		if (i >= current_limit)
			current_limit += chunk_size;
	}
}
