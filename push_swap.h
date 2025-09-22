/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armeneze <armeneze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 07:40:40 by armeneze          #+#    #+#             */
/*   Updated: 2025/09/22 14:46:05 by armeneze         ###   ########.fr       */
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

typedef struct s_stack
{
    t_a_node  *top;
    int       size;
}   t_stack;

//////////////////////* Validations *//////////////////////

void		write_error(void);
int			**all_validation(int argc, char **argv);
void		write_error(void);

//////////////////////* Insert String List *//////////////////////
void		insert_string_list(char *string_number);
void		start_push_swap(void);
t_a_node	*isert_stack_a(int value);
t_b_node	*isert_stack_b(int value);





t_a_node *busca (int x, t_a_node *le);
#endif