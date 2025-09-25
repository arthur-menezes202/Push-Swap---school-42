/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armeneze <armeneze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 12:28:30 by armeneze          #+#    #+#             */
/*   Updated: 2025/09/25 13:16:48 by armeneze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_a_node **a_stack, int flag)
{
	t_a_node	*end;
	t_a_node	*before_end;

	before_end = *a_stack;
	end = (*a_stack)->next;
	while (end->next != NULL)
	{
		before_end = end;
		end = end->next;
	}
	before_end->next = NULL;
	end->next = *a_stack;
	*a_stack = end;
	if (flag == 1)
		ft_printf("rra\n");
}

void	rrb(t_b_node **b_stack, int flag)
{
	t_b_node	*end;
	t_b_node	*before_end;

	before_end = *b_stack;
	end = (*b_stack)->next;
	while (end->next != NULL)
	{
		before_end = end;
		end = end->next;
	}
	before_end->next = NULL;
	end->next = *b_stack;
	*b_stack = end;
	if (flag == 1)
		ft_printf("rrb\n");
}

void	rrr(t_a_node **a_stack, t_b_node **b_stack)
{
	rra(a_stack, 0);
	rrb(b_stack, 0);
	ft_printf("rrr\n");
}
