/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armeneze <armeneze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 09:20:17 by armeneze          #+#    #+#             */
/*   Updated: 2025/09/25 17:23:58 by armeneze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	start_push_swap(int *array_int)
{
	t_a_node	*a_stack;
	t_b_node	*b_stack;

	insert_list_array(array_int, &a_stack);
	free(array_int);
	validation_list(&a_stack);
	turk_algorithm(&a_stack, &b_stack);
	return ;
}
