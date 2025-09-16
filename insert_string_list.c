/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_string_list.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armeneze <armeneze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 16:47:34 by armeneze          #+#    #+#             */
/*   Updated: 2025/09/16 17:54:07 by armeneze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*find_number(char *string_number)
{
	char	*temp;

	return (NULL);
}

void	insert_string_list(char *string_number)
{
	char	*temp_number_char;
	int		temp_number_int;
	int		count;

	count = 0;
	while (count < 10)
	{
		temp_number_char = find_number(string_number);
		if (temp_number_char == NULL)
			// break ;
		count ++;
	}
	if (count == 10)
		printf("chegou a contagem de 10");
}
