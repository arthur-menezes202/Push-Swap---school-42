/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation_zero.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armeneze <armeneze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 20:24:59 by armeneze          #+#    #+#             */
/*   Updated: 2025/10/11 17:45:04 by armeneze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	validation_zero(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '-' && str[i + 1] == '0')
			free_char_error(str);
		i++ ;
	}
}

void	free_char_error(char *s)
{
	free(s);
	write_error();
}

void	free_array_error(char **array)
{
	int	count;

	count = 0;
	while (array[count] != NULL)
	{
		free(array[count]);
		count ++;
	}
	free(array);
	return ;
}
