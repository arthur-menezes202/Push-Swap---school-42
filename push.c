/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armeneze <armeneze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 15:55:19 by armeneze          #+#    #+#             */
/*   Updated: 2025/10/06 13:58:00 by armeneze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_a_node **a_stack, t_b_node **b_stack, int flag)
{
	t_a_node	*new;
	t_b_node	*first_b;
	t_b_node	*temp;

	first_b = *b_stack;
	new = (t_a_node *)malloc(sizeof(t_a_node));
	if (new == NULL)
		return ;
	new->data = first_b->data;
	new->index = first_b->index;
	new->next = *a_stack;
	*a_stack = new;
	*b_stack = (*b_stack)->next;
	free(first_b);
	if (flag == 1)
		ft_printf("pa\n");
	return ;
}

void	pb(t_a_node **a_stack, t_b_node **b_stack, int flag)
{
	t_b_node	*new;
	t_a_node	*first_a;
	t_a_node	*temp;

	first_a = *a_stack;
	new = (t_b_node *)malloc(sizeof(t_b_node));
	if (new == NULL)
		return ;
	new->data = first_a->data;
	new->index = first_a->index;
	new->next = *b_stack;
	*b_stack = new;
	*a_stack = (*a_stack)->next;
	free(first_a);
	if (flag == 1)
		ft_printf("pb\n");
	return ;
}
