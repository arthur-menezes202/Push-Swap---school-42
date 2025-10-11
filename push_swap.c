/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armeneze <armeneze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 09:20:17 by armeneze          #+#    #+#             */
/*   Updated: 2025/10/11 20:35:17 by armeneze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	min_index_list_a(t_a_node **b_stack)
{
	t_a_node	*node_b;
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

void	sort_three(t_a_node **a_stack)
{
	t_a_node	*a;
	t_a_node	*b;
	t_a_node	*c;

	if (*a_stack == NULL || (*a_stack)->next == NULL
		|| (*a_stack)->next->next == NULL)
		return ;
	a = *a_stack;
	b = a->next;
	c = b->next;
	if (a->index < b->index && b->index < c->index)
		return ;
	if (a->index > b->index && a->index > c->index) 
	{
		ra(a_stack, 1);
	}
	else if (a->index < b->index && b->index > c->index)
	{
		rra(a_stack, 1);
	}
	b = a->next;
	if (a->index > b->index)
	{
		sa(a_stack, 1);
	}
}

void	start_push_swap(t_a_node **a_stack, int argc)
{
	t_b_node	*b_stack;

	b_stack = NULL;
	insert_rank(a_stack);
	validation_list(a_stack);
	if (argc == 3)
		sa(a_stack, 1);
	if (argc <= 4)
	{
		sort_three(a_stack);
	}
	else
		turk_algorithm(a_stack, &b_stack);
	return ;
}
