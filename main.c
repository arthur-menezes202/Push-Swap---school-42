/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armeneze <armeneze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 07:29:45 by armeneze          #+#    #+#             */
/*   Updated: 2025/10/11 20:32:49 by armeneze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "push_swap.h"

void	clear_list(t_a_node **list)
{
	t_a_node	*current;
	t_a_node	*current_test;
	t_a_node	*next_node;

	if (list == NULL || *list == NULL)
		return ;
	current = *list;
	current_test = current;
	while (current != NULL)
	{
		next_node = current->next;
		free(current);
		current = next_node;
	}
	*list = NULL;
}

int	main(int argc, char **argv)
{
	t_a_node	*a_stack;

	a_stack = NULL;
	if (argc == 2 && *argv[1] == '\0')
		write_error();
	if (argc > 1)
	{
		all_validation(argc, argv, &a_stack);
		start_push_swap(&a_stack, argc);
	}
	clear_list(&a_stack);
	free(a_stack);
	return (0);
}
