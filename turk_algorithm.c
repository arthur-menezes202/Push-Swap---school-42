/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turk_algorithm.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armeneze <armeneze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 12:06:20 by armeneze          #+#    #+#             */
/*   Updated: 2025/09/25 14:22:35 by armeneze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	turk_algorithm(t_a_node **a_stack, t_b_node **b_stack)
{
	sa(a_stack, 1);
	sb(b_stack, 1);
	ss(a_stack, b_stack);
	pa(a_stack, b_stack, 1);
	pb(a_stack, b_stack, 1);
	ra(a_stack, 1);
	rb(b_stack, 1);
	rr(a_stack, b_stack);
	rra(a_stack, 1);
	rrb(b_stack, 1);
	rrr(a_stack, b_stack);
}
