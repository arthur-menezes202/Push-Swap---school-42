/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armeneze <armeneze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 07:40:40 by armeneze          #+#    #+#             */
/*   Updated: 2025/09/23 11:23:04 by armeneze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>

# include <stdlib.h>
# include <limits.h>
# include "./libft/libft.h"

typedef struct a_node
{
	int				data;
	struct a_node	*next;
}	t_a_node;

typedef struct b_node
{
	int				data;
	struct b_node	*next;
}	t_b_node;

//////////////////////* Validations *//////////////////////

void		write_error(void);
int			**all_validation(int argc, char **argv);
void		write_error(void);
int			**insert_string_list(char *string_number);

//////////////////////* Insert String List *//////////////////////

void		start_push_swap(int **array_int);
t_a_node	*isert_stack_a(int value);
t_b_node	*isert_stack_b(int value);
void		insert_list_array(int **array_int, t_a_node **a_stack);
void		validation_list(t_a_node **a_stack);

#endif