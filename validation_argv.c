/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation_argv.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armeneze <armeneze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 11:31:14 by armeneze          #+#    #+#             */
/*   Updated: 2025/09/17 16:44:32 by armeneze         ###   ########.fr       */
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

char	*treat_space(char *argv)
{
	char	*temp;
	size_t	len;

	remove_multiple_spaces(argv);
	len = ft_strlen(argv);
	if (len > 0 && argv[len - 1] != ' ')
	{
		temp = ft_strjoin(argv, " ");
	}
	else
		temp = ft_strjoin(argv, "");
	return (temp);
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
		{
			arg_with_space = treat_space(argv[count]);
			temp = ft_strjoin(" ", arg_with_space);
			free(arg_with_space);
		}
		else
		{
			arg_with_space = treat_space(argv[count]);
			temp = ft_strjoin(string_numbers, arg_with_space);
			free(arg_with_space);
			free(string_numbers);
		}
		string_numbers = temp;
		count++;
	}
	printf("%s\n", string_numbers);
	insert_string_list(string_numbers);
	return ;
}
