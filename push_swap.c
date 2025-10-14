/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armeneze <armeneze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 09:20:17 by armeneze          #+#    #+#             */
/*   Updated: 2025/10/14 18:07:47 by armeneze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Assumindo que get_min_pos_a agora aceita um 'min_rank' para procurar

int	get_min_pos_a(t_a_node **a_stack)
{
	t_a_node	*current;
	int			position;
	int			min_rank;

	if (*a_stack == NULL)
		return (-1);
	current = *a_stack;
	position = 0;
	min_rank = 0;
	while (current != NULL)
	{
		if (current->index == min_rank)
		{
			return (position);
		}
		current = current->next;
		position++;
	}
	return (-1);
}

void	sort_four(t_a_node **a_stack, t_b_node **b_stack)
{
	int	min_pos;
	int	size;

	size = 4;
	min_pos = get_min_pos_a(a_stack);
	if (min_pos <= size / 2)
	{
		while (min_pos-- > 0)
			ra(a_stack, 1);
	}
	else
	{
		while (min_pos++ < size)
			rra(a_stack, 1);
	}
	pb(a_stack, b_stack, 1);
	sort_three(a_stack);
	pa(a_stack, b_stack, 1);
}

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
	a = *a_stack;
	if (a->index > a->next->index)
	{
		sa(a_stack, 1);
	}
}

void	start_push_swap(t_a_node **a_stack)
{
	t_b_node	*b_stack;

	b_stack = NULL;
	insert_rank(a_stack);
	validation_list(a_stack);

	if (get_list_size(a_stack) <= 2)
		sa(a_stack, 1);
	else if (get_list_size(a_stack) < 4)
		sort_three(a_stack);
	else if (get_list_size(a_stack) == 4)
		sort_four(a_stack, &b_stack);
	else if (get_list_size(a_stack) == 5)
		sort_five(a_stack, &b_stack);
	else
		turk_algorithm(a_stack, &b_stack);
	return ;
}
