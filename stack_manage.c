/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_manage.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armeneze <armeneze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 15:55:58 by armeneze          #+#    #+#             */
/*   Updated: 2025/09/22 14:21:14 by armeneze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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


