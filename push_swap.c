/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armeneze <armeneze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 09:20:17 by armeneze          #+#    #+#             */
/*   Updated: 2025/09/23 12:07:08 by armeneze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	start_push_swap(int **array_int)
{
	t_a_node	*a_stack;

	printf("Início start_push_swap\n");

	insert_list_array(array_int, &a_stack);
	validation_list(&a_stack);
	free(array_int);
	printf("final start_push_swap\n");
	return ;
}

