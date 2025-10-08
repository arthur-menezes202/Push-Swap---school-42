/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armeneze <armeneze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 13:59:32 by armeneze          #+#    #+#             */
/*   Updated: 2025/10/07 15:40:35 by armeneze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	max_index_list(t_b_node **b_stack)
{
	t_b_node	*node_b;
	int			max_index;

	node_b = *b_stack;
	max_index = node_b->index;
	while (node_b != NULL)
	{
		if (max_index < node_b->index)
			max_index = node_b->index;
		node_b = node_b->next;
	}
	return (max_index);
}

int	min_index_list(t_b_node **b_stack)
{
	t_b_node	*node_b;
	int			min_index;

	node_b = *b_stack;
	min_index = node_b->index;
	while (node_b != NULL)
	{
		if (min_index > node_b->index)
			min_index = node_b->index;
		node_b = node_b->next;
	}
	return (min_index);
}

int	get_max_index_node_position(t_b_node **b_stack)
{
	t_b_node	*node_b;
	int			max_index;
	int			count;

	max_index = max_index_list(b_stack);
	node_b = *b_stack;
	count = 0;
	while (node_b != NULL)
	{
		if (node_b->index == max_index)
		{
			return (count);
		}
		count++;
		node_b = node_b->next;
	}
	return (count);
}
