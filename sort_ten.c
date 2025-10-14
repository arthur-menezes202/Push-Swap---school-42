/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_ten.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armeneze <armeneze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 20:37:31 by armeneze          #+#    #+#             */
/*   Updated: 2025/10/14 18:35:03 by armeneze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted_a(t_a_node *a_stack)
{
	t_a_node	*current;

	if (a_stack == NULL || a_stack->next == NULL)
		return (1);
	current = a_stack;
	while (current->next != NULL)
	{
		if (current->index > current->next->index)
		{
			return (0);
		}
		current = current->next;
	}
	return (1);
}

void	finalize_stack_a(t_a_node **a_stack, int size)
{
	int			pos_of_min;
	t_a_node	*current;

	pos_of_min = 0;
	current = *a_stack;
	while (current->index != 0)
	{
		current = current->next;
		pos_of_min++;
	}
	if (pos_of_min <= size / 2)
	{
		while ((*a_stack)->index != 0)
			ra(a_stack, 1);
	}
	else
	{
		while ((*a_stack)->index != 0)
			rra(a_stack, 1);
	}
}

void	bubble_sort_a(t_a_node **a_stack)
{
	int	list_size;
	int	i;
	int	j;

	list_size = get_list_size(a_stack);
	if (is_sorted_a(*a_stack))
		return ;
	i = 0;
	while (i < list_size - 1)
	{
		j = 0;
		while (j < list_size - 1 - i)
		{
			if ((*a_stack)->index > (*a_stack)->next->index)
				sa(a_stack, 1);
			ra(a_stack, 1);
			j++;
		}
		if (is_sorted_a(*a_stack))
			break ;
		i++;
	}
	if (!is_sorted_a(*a_stack))
		return ;
	finalize_stack_a(a_stack, list_size);
}
