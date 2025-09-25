/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armeneze <armeneze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 11:05:54 by armeneze          #+#    #+#             */
/*   Updated: 2025/09/25 17:25:28 by armeneze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_a_node **a_stack, int flag)
{
	t_a_node	*first;
	t_a_node	*end;

	first = *a_stack;
	end = *a_stack;
	while (end->next != NULL)
		end = end->next;
	*a_stack = first->next;
	first->next = NULL;
	end->next = first;
	if (flag == 1)
		ft_printf("ra\n");
	return ;
}

void	rb(t_b_node **b_stack, int flag)
{
	t_b_node	*first;
	t_b_node	*end;

	first = *b_stack;
	end = *b_stack;
	while (end->next != NULL)
		end = end->next;
	*b_stack = first->next;
	first->next = NULL;
	end->next = first;
	if (flag == 1)
		ft_printf("rb\n");
	return ;
}

void	rr(t_a_node **a_stack, t_b_node **b_stack)
{
	ra(a_stack, 0);
	rb(b_stack, 0);
	ft_printf("rr\n");
	return ;
}
