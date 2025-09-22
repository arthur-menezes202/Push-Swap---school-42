/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_string_list.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armeneze <armeneze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 16:47:34 by armeneze          #+#    #+#             */
/*   Updated: 2025/09/22 15:08:02 by armeneze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#include <stdlib.h>

int	ft_strcmp(const char *s1, const char *s2)
{
	size_t	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

void	validation_repet_number(char *number, char **n_char)
{
	int	count;
	int	count_repet;

	count = 0;
	count_repet = 0;
	while (n_char[count] != NULL)
	{
		if (ft_strcmp(n_char[count], number) == 0)
		{
			count_repet++;
		}
		count++;
	}
	if (count_repet > 1)
	{
		write_error();
	}
	return ;
}

int	transforme_number(char *number)
{
	long long	temp_ll;
	char		*endptr;

	if (ft_strlen(number) > 11)
		write_error();
	// ainda preciso desenvolver essa função
	temp_ll = strtol(number, &endptr, 10);
	if (*endptr != '\0' && *endptr != '\n')
	{
		write_error();
	}
	if (temp_ll > INT_MAX || temp_ll < INT_MIN)
		write_error();
	return ((int)temp_ll);
}

void	insert_string_list(char *string_number)
{
	char		**temp_number_char;
	int long	number_position;
	int			count;

	count = 0;
	temp_number_char = ft_split(string_number, ' ');
	free(string_number);
	while (temp_number_char[count] != NULL)
	{
		validation_repet_number(temp_number_char[count], temp_number_char);
		number_position = transforme_number(temp_number_char[count]);
		isert_stack_a((int)number_position);
		printf("numero validado: %d\n", number_position);
		count ++;
	}
	
	return ;
}
