/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation_argv.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armeneze <armeneze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 11:31:14 by armeneze          #+#    #+#             */
/*   Updated: 2025/09/25 17:17:48 by armeneze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <string.h>

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

void	validation_c_s(char *argv)
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
			if (argv[count + 1] == '-' || argv[count + 1] == '+')
				write_error();
			count ++;
			continue ;
		}
		if (argv[count] > 47 && argv[count] < 58)
			count ++;
		else
			write_error();
	}
}

int	*all_validation(int argc, char **argv)
{
	char	*string_numbers;
	int		*result;

	string_numbers = join_args_with_space(argc, argv);
	result = insert_string_list(string_numbers);
	return (result);
}
