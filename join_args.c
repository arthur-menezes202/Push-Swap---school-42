/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   join_args.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armeneze <armeneze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 17:15:22 by armeneze          #+#    #+#             */
/*   Updated: 2025/10/14 11:39:35 by armeneze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*treat_space(char *argv)
{
	char	*temp;
	size_t	len;

	remove_multiple_spaces(argv);
	remove_multiple_zero(argv);
	len = ft_strlen(argv);
	if (len > 0 && argv[len - 1] != ' ')
	{
		temp = ft_strjoin(argv, " ");
	}
	else
		temp = ft_strjoin(argv, "");
	return (temp);
}

char	*join_one_arg(char *string_numbers, char *arg)
{
	char	*arg_with_space;
	char	*temp;

	arg_with_space = treat_space(arg);
	if (string_numbers == NULL)
	{
		temp = ft_strjoin(" ", arg_with_space);
	}
	else
	{
		temp = ft_strjoin(string_numbers, arg_with_space);
		free(string_numbers);
	}
	free(arg_with_space);
	return (temp);
}

char	*join_args_with_space(int argc, char **argv)
{
	int		count;
	char	*string_numbers;
	char	*temp;

	count = 1;
	string_numbers = NULL;
	while (count < argc)
	{
		if ((argv[count] == NULL || *argv[count] == '\0') && argc == 2)
			exit(0);
		validation_c_s(argv[count], string_numbers);
		temp = join_one_arg(string_numbers, argv[count]);
		string_numbers = temp;
		count++;
	}
	return (string_numbers);
}
