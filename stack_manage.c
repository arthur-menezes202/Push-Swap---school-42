/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_manage.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armeneze <armeneze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 15:55:58 by armeneze          #+#    #+#             */
/*   Updated: 2025/10/06 11:04:40 by armeneze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	insert_list_array(int value, t_a_node **a_stack)
{
	int			i;
	t_a_node	*new_node;
	t_a_node	*last_node;

	i = 0;
	new_node = isert_stack_a(value);
	if (new_node == NULL)
		return ;
	if (*a_stack == NULL)
		*a_stack = new_node;
	else
	{
		last_node = *a_stack;
		while (last_node->next != NULL)
			last_node = last_node->next;
		last_node->next = new_node;
	}
	i++;
}

t_a_node	*isert_stack_a(int value)
{
	t_a_node	*new_node;

	new_node = (t_a_node *)malloc(sizeof(t_a_node));
	if (!new_node)
		return (NULL);
	new_node->data = value;
	new_node->next = NULL;
	return (new_node);
}

void	validation_list(t_a_node **a_stack)
{
	t_a_node	*current;

	current = *a_stack;
	while (current->next != NULL)
	{
		if (current->data > current->next->data)
		{
			return ;
		}
		current = current->next;
	}
	exit(0);
}

void	insert_rank(t_a_node **a_stack)
{
	t_a_node	*node_i;
	t_a_node	*node_j;
	int			rank;

	node_i = *a_stack;
	while (node_i != NULL)
	{
		rank = 0;
		node_j = *a_stack;
		while (node_j != NULL)
		{
			if (node_j->data < node_i->data)
				rank++;
			node_j = node_j->next;
		}
		node_i->index = rank;
		node_i = node_i->next;
	}
}
