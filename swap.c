/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armeneze <armeneze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 12:14:12 by armeneze          #+#    #+#             */
/*   Updated: 2025/10/13 15:35:43 by armeneze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_a_node **a_stack, int flag)
{
	t_a_node	*first;
	t_a_node	*second;
	int			swap_data;
	int			swap_index;

	first = *a_stack;
	if (first == NULL || first->next == NULL)
	{
		return ;
	}
	second = first->next;
	swap_data = first->data;
	first->data = second->data;
	second->data = swap_data;
	swap_index = first->index;
	first->index = second->index;
	second->index = swap_index;
	if (flag == 1)
		ft_printf("sa\n");
	return ;
}

void	sb(t_b_node **b_stack, int flag)
{
	t_b_node	*first;
	t_b_node	*second;
	int			swap_data;
	int			swap_index;

	first = *b_stack;
	if (first == NULL || first->next == NULL)
	{
		return ;
	}
	second = first->next;
	swap_data = first->data;
	first->data = second->data;
	second->data = swap_data;
	swap_index = first->index;
	first->index = second->index;
	second->index = swap_index;
	if (flag == 1)
		ft_printf("sb\n");
	return ;
}

void	ss(t_a_node **a_stack, t_b_node **b_stack)
{
	sa(a_stack, 0);
	sb(b_stack, 0);
	ft_printf("ss\n");
	return ;
}
