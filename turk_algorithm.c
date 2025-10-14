/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turk_algorithm.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armeneze <armeneze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 12:06:20 by armeneze          #+#    #+#             */
/*   Updated: 2025/10/14 18:15:52 by armeneze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	move_max_start_or_end(t_b_node **b_stack)
{
	t_b_node	*head;
	int			max_node_index;
	int			list_size;
	int			cost_rb;
	int			cost_rrb;

	if (*b_stack == NULL || (*b_stack)->next == NULL)
		return (0);

	head = *b_stack;

	list_size = get_list_size_b(b_stack);
	max_node_index = get_max_index_node_position(b_stack);
	cost_rb = max_node_index;
	cost_rrb = list_size - max_node_index;
	if (cost_rb < cost_rrb)
	{
		return (1);
	}
	return (0);
}

void	turk_algorithm(t_a_node **a_stack, t_b_node **b_stack)
{
	push_chunks(a_stack, b_stack);
	while (*b_stack != NULL)
	{
		if (move_max_start_or_end(b_stack))
		{
			move_b_no_start(b_stack, max_index_list(b_stack));
		}
		else
		{
			move_b_no_end(b_stack, max_index_list(b_stack));
		}
		pa(a_stack, b_stack, 1);
	}
	return ;
}
