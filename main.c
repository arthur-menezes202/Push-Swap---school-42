/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armeneze <armeneze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 07:29:45 by armeneze          #+#    #+#             */
/*   Updated: 2025/09/25 17:19:12 by armeneze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "push_swap.h"

int	main(int argc, char **argv)
{
	int		count;
	int		*array_int;

	if (argc > 1)
	{
		array_int = all_validation(argc, argv);
		//free(array_int);
		start_push_swap(array_int);
	}
	return (0);
}
