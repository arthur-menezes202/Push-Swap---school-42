/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_manage.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armeneze <armeneze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 15:55:58 by armeneze          #+#    #+#             */
/*   Updated: 2025/09/24 14:42:04 by armeneze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	insert_list_array(int *array_int, t_a_node **a_stack)
{
	int			i;
	t_a_node	*new_node;
	t_a_node	*last_node;

	i = 0;
	*a_stack = NULL;
	while (array_int[i] != NULL )
	{
		new_node = isert_stack_a(array_int[i]);
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

t_b_node	*isert_stack_b(int value)
{
	t_b_node	*new_node;

	new_node = (t_b_node *)malloc(sizeof(t_b_node));
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
