/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_index.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armeneze <armeneze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 15:10:07 by armeneze          #+#    #+#             */
/*   Updated: 2025/10/09 12:49:52 by armeneze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	move_b_no_start(t_b_node **b_stack, int index)
{
	t_b_node	*first_node;
	int			min_rank;

	first_node = *b_stack;
	while (first_node->index != index)
	{
		rb(b_stack, 1);
		first_node = *b_stack;
	}
}

void	move_b_no_end(t_b_node **b_stack, int index)
{
	t_b_node	*first_node;
	int			min_rank;

	first_node = *b_stack;
	while (first_node->index != index)
	{
		rrb(b_stack, 1);
		first_node = *b_stack;
	}
}

void	move_a_no_start(t_a_node **a_stack, int index)
{
	t_a_node	*first_node;
	int			min_rank;

	first_node = *a_stack;
	while (first_node->index != index)
	{
		ra(a_stack, 1);
		first_node = *a_stack;
	}
}

void	move_a_no_end(t_a_node **a_stack, int index)
{
	t_a_node	*first_node;
	int			min_rank;

	first_node = *a_stack;
	while (first_node->index != index)
	{
		rra(a_stack, 1);
		first_node = *a_stack;
	}
}
