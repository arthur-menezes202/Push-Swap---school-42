/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_no.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armeneze <armeneze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 20:03:28 by armeneze          #+#    #+#             */
/*   Updated: 2025/10/13 20:24:35 by armeneze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_a_node	*get_last_node_a(t_a_node **a)
{
	t_a_node	*current;

	if (a == NULL)
		return (NULL);

	current = *a;
	while (current->next != NULL)
	{
		current = current->next;
	}
	return (current);
}

int	get_first_node_a(t_a_node *a_stack)
{
	if (a_stack == NULL)
		return (0);

	return (a_stack->index);
}
