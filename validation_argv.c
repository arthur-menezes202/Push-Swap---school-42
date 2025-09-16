/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation_argv.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armeneze <armeneze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 11:31:14 by armeneze          #+#    #+#             */
/*   Updated: 2025/09/16 17:49:01 by armeneze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <string.h>

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

void	all_validation(int argc, char **argv)
{
	int		count;
	char	*string_numbers;
	char	*arg_with_space;
	char	*temp;

	count = 1;
	string_numbers = NULL;
	while (count < argc)
	{
		validation_c_s(argv[count]);
		if (string_numbers == NULL)
			temp = ft_strjoin(" ", argv[count]);
		else
		{
			arg_with_space = ft_strjoin(" ", argv[count]);
			temp = ft_strjoin(string_numbers, arg_with_space);
			free(arg_with_space);
			free(string_numbers);
		}
		string_numbers = temp;
		count++;
	}
	insert_string_list(string_numbers);
	return ;
}
