/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armeneze <armeneze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 10:37:34 by armeneze          #+#    #+#             */
/*   Updated: 2025/10/14 18:10:35 by armeneze         ###   ########.fr       */
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
