/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation_argv.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armeneze <armeneze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 11:31:14 by armeneze          #+#    #+#             */
/*   Updated: 2025/10/14 11:07:35 by armeneze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <string.h>

void	remove_multiple_zero(char *str)
{
	char	*reader;
	char	*writer;
	char	*first_non_zero;

	if (str == NULL || *str == '\0')
		return ;
	reader = str;
	writer = str;
	if (*reader == '+' || *reader == '-')
	{
		if (*reader == '-')
			*writer++ = *reader;
		reader++;
	}
	first_non_zero = reader;
	while (*first_non_zero == '0' && *(first_non_zero + 1) != '\0' && *(first_non_zero + 1) != ' ')
		first_non_zero++;
	reader = first_non_zero;
	while (*reader != '\0')
	{
		*writer++ = *reader++;
	}
	*writer = '\0';
}

void	remove_multiple_spaces(char *str)
{
	char	*reader;
	char	*writer;

	if (str == NULL || *str == '\0')
		return ;
	reader = str;
	writer = str;
	while (*reader == ' ')
		reader++;
	while (*reader != '\0')
	{
		*writer = *reader;
		if (*reader == ' ')
		{
			while (*(reader + 1) == ' ')
				reader++;
		}
		writer++;
		reader++;
	}
	*writer = '\0';
}

void	validation_c_s(char *argv, char *string_numbers)
{
	int	count;

	count = 0;
	while (argv[count] != '\0')
	{
		if (argv[count] == ' ')
		{
			count ++;
			continue ;
		}
		if (argv[count] == '-' || argv[count] == '+')
		{
			if (argv[count + 1] == '-' || argv[count + 1] == '+'
				|| argv[count + 1] == ' ' || argv[count + 1] == '\0')
				free_char_error(string_numbers);
			count ++;
			continue ;
		}
		if (argv[count] > 47 && argv[count] < 58)
			count ++;
		else
			free_char_error(string_numbers);
	}
}

void	all_validation(int argc, char **argv, t_a_node **a_stack)
{
	char	*string_numbers;

	string_numbers = join_args_with_space(argc, argv);
	insert_string_list(string_numbers, a_stack);
	return ;
}
