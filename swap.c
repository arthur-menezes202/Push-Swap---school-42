/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armeneze <armeneze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 12:14:12 by armeneze          #+#    #+#             */
/*   Updated: 2025/09/25 17:22:56 by armeneze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_a_node **a_stack, int flag)
{
	t_a_node	*first;
	t_a_node	*second;
	int			swap;

	first = *a_stack;
	second = first->next;
	if (first == NULL || second == NULL)
	{
		return ;
	}
	swap = first->data;
	first->data = second->data;
	second->data = swap;
	if (flag == 1)
		ft_printf("sa\n");
	return ;
}

void	sb(t_b_node **b_stack, int flag)
{
	t_b_node	*first;
	t_b_node	*second;
	int			swap;

	if (first == NULL || second == NULL)
	{
		return ;
	}
	first = *b_stack;
	second = first->next;
	swap = first->data;
	first->data = second->data;
	second->data = swap;
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
