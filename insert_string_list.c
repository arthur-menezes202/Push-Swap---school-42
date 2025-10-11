/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_string_list.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armeneze <armeneze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 16:47:34 by armeneze          #+#    #+#             */
/*   Updated: 2025/10/11 18:30:48 by armeneze         ###   ########.fr       */
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

void	validation_repet_number(char *number, char **n_char, t_a_node **a,
	char *string_number)
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
		clear_list(a);
		free_array_error(n_char);
		free(string_number);
		write_error();
	}
	return ;
}

int	transforme_n(char *number, char **array, t_a_node **a, char *string_number)
{
	long long	temp_ll;
	char		*endptr;

	if (ft_strlen(number) > 11)
	{
		clear_list(a);
		free_array_error(array);
		free_char_error(string_number);
	}
	temp_ll = ft_strtol(number, &endptr, 10);
	if (*endptr != '\0' && *endptr != '\n')
	{
		clear_list(a);
		free_array_error(array);
		free_char_error(string_number);
	}
	if (temp_ll > INT_MAX || temp_ll < INT_MIN)
	{
		clear_list(a);
		free_array_error(array);
		free_char_error(string_number);
	}
	return ((int)temp_ll);
}

void	insert_string_list(char *string_number, t_a_node **a_stack)
{
	char		**temp_number_char;
	int			count;

	count = 0;
	temp_number_char = ft_split(string_number, ' ');
	while (count < count_words(string_number, ' '))
	{
		validation_repet_number(temp_number_char[count],
			temp_number_char, a_stack, string_number);
		insert_list_array(transforme_n(temp_number_char[count],
				temp_number_char, a_stack, string_number), a_stack);
		count ++;
	}
	count = 0;
	while (count < count_words(string_number, ' '))
	{
		free(temp_number_char[count]);
		count ++;
	}
	free(temp_number_char);
	free(string_number);
	return ;
}
