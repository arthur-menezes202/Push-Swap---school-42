/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armeneze <armeneze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 16:19:39 by armeneze          #+#    #+#             */
/*   Updated: 2025/10/14 18:32:57 by armeneze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_min_index_node_position(t_a_node **a)
{
	t_a_node	*node_a;
	int			max_index;
	int			count;

	max_index = min_index_list_a(a);
	node_a = *a;
	count = 0;
	while (node_a != NULL)
	{
		if (node_a->index == max_index)
		{
			return (count);
		}
		count++;
		node_a = node_a->next;
	}
	return (count);
}

void	move_to_top_optimized(t_a_node **a_stack, int position)
{
	int	size;

	size = get_list_size(a_stack);
	if (position == 0)
		return ;
	if (position <= size / 2)
	{
		while (position-- > 0)
			ra(a_stack, 1);
	}
	else
	{
		while (position++ < size)
			rra(a_stack, 1);
	}
}

void	best_move_five(t_a_node **a_stack, t_b_node **b_stack)
{
	int	position;
	int	i;

	i = 0;
	while (i < 2)
	{
		position = get_min_index_node_position(a_stack);
		move_to_top_optimized(a_stack, position);
		pb(a_stack, b_stack, 1);
		i++;
	}
}

void	sort_five(t_a_node **a_stack, t_b_node **b_stack)
{
	best_move_five(a_stack, b_stack);
	sort_three(a_stack);
	pa(a_stack, b_stack, 1);
	pa(a_stack, b_stack, 1);
}
