/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armeneze <armeneze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 09:20:17 by armeneze          #+#    #+#             */
/*   Updated: 2025/10/06 11:13:17 by armeneze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	start_push_swap(t_a_node **a_stack)
{
	t_b_node	*b_stack;
	
	b_stack = NULL;
	insert_rank(a_stack);
	validation_list(a_stack);
	b_stack = NULL;
	turk_algorithm(a_stack, &b_stack);
	return ;
}
