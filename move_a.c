/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armeneze <armeneze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 10:37:34 by armeneze          #+#    #+#             */
/*   Updated: 2025/10/10 13:18:45 by armeneze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int	end_index_a(t_a_node **a, int current_limit)
{
	t_a_node	*head;
	int			max_rank_in_chunk;

	if (*a == NULL)
		return (-1);
	head = *a;
	max_rank_in_chunk = -1;
	while (head != NULL)
	{
		if (head->index < current_limit)
		{
			if (head->index > max_rank_in_chunk)
			{
				max_rank_in_chunk = head->index;
			}
		}
		head = head->next;
	}
	return (max_rank_in_chunk);
}

int	start_index_a(t_a_node **a, int current_limit)
{
	t_a_node	*head;
	int			min_rank_in_chunk;

	if (*a == NULL)
		return (-1);

	head = *a;
	min_rank_in_chunk = current_limit;
	while (head != NULL)
	{
		if (head->index < current_limit)
		{
			if (head->index < min_rank_in_chunk)
			{
				return (head->index);
			}
		}
		head = head->next;
	}
	return (min_rank_in_chunk);
}

void	execute_min_rotations(t_a_node **a_stack, int target_rank)
{
	int	list_size;
	int	target_position;
	int	cost_ra;
	int	cost_rra;

	list_size = get_list_size(a_stack);
	target_position = get_index_node_position_a(a_stack, target_rank);
	cost_ra = target_position;
	cost_rra = list_size - target_position;
	if (cost_ra <= cost_rra)
	{
		while (cost_ra > 0)
		{
			ra(a_stack, 1);
			cost_ra--;
		}
	}
	else
	{
		while (cost_rra > 0)
		{
			rra(a_stack, 1);
			cost_rra--;
		}
	}

}

void	move_a(t_a_node **a_stack, t_b_node **b_stack, int current_limit)
{
	int	start_index_val;
	int	end_index_val;
	int	list_size;
	int	pos_start;
	int	pos_end;
	int	cost_start;
	int	cost_end;

	start_index_val = start_index_a(a_stack, current_limit);
	end_index_val = end_index_a(a_stack, current_limit);
	list_size = get_list_size(a_stack);
	pos_start = get_index_node_position_a(a_stack, start_index_val);
	pos_end = get_index_node_position_a(a_stack, end_index_val);
	cost_start = (pos_start < list_size - pos_start) ? pos_start : (list_size - pos_start);
	cost_end = (pos_end < list_size - pos_end) ? pos_end : (list_size - pos_end);
	if (cost_start <= cost_end)
	{
		execute_min_rotations(a_stack, start_index_val);
		pb(a_stack, b_stack, 1);
		return ;
	}
	else
	{
		execute_min_rotations(a_stack, end_index_val);
		pb(a_stack, b_stack, 1);
		return ;
	}
}

// int	move_a(t_a_node **a, int current_limit)
// {
// 	t_a_node	*head;
// 	int			max_node_index;
// 	int			list_size;
// 	int			cost_rb;
// 	int			cost_rrb;

// 	if (*a == NULL || (*a)->next == NULL)
// 		return (0);
// 	head = *a;
// 	list_size = get_list_size(a);
// 	max_node_index = get_current_index_node_position(a, current_limit);
// 	cost_rb = max_node_index;
// 	cost_rrb = list_size - max_node_index;
// 	if (cost_rb < cost_rrb)
// 	{
// 		return (1);
// 	}
// 	return (0);
// }
