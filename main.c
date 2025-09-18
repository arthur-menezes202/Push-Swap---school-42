/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armeneze <armeneze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 07:29:45 by armeneze          #+#    #+#             */
/*   Updated: 2025/09/17 13:35:51 by armeneze         ###   ########.fr       */
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
		all_validation(argc, argv);
	}
	printf("Fim do algoritimo");
	return (0);
}
