/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armeneze <armeneze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 07:29:45 by armeneze          #+#    #+#             */
/*   Updated: 2025/10/06 16:03:45 by armeneze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "push_swap.h"

int	main(int argc, char **argv)
{
	int			count;
	int			*array_int;
	t_a_node	*a_stack;

	a_stack = NULL;

	if (argc > 1)
	{
		all_validation(argc, argv, &a_stack);
		start_push_swap(&a_stack);
	}
	return (0);
}
