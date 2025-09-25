/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armeneze <armeneze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 07:40:40 by armeneze          #+#    #+#             */
/*   Updated: 2025/09/25 17:18:40 by armeneze         ###   ########.fr       */
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

////////////////////////* utils *////////////////////

int			ft_strlen_array(char **str);
long		ft_strtol(const char *nptr, char **endptr, int base);

///////////////////////////* join args *//////////////////////

char		*join_one_arg(char *string_numbers, char *arg);
char		*join_args_with_space(int argc, char **argv);
char		*treat_space(char *argv);



//////////////////////* Validations *//////////////////////

void		write_error(void);
int			*all_validation(int argc, char **argv);
void		write_error(void);
int			*insert_string_list(char *string_number);
void		remove_multiple_spaces(char *str);
void		validation_c_s(char *argv);

//////////////////////* Insert String List *//////////////////////

void		start_push_swap(int *array_int);
t_a_node	*isert_stack_a(int value);
t_b_node	*isert_stack_b(int value);
void		insert_list_array(int *array_int, t_a_node **a_stack);
void		validation_list(t_a_node **a_stack);


////////////////////////* turk algorithm *////////////////////////

void		turk_algorithm(t_a_node **a_stack, t_b_node **b_stack);





///////////////////////* swap *///////////////////////

void		sa(t_a_node **a_stack, int flag);
void		sb(t_b_node **b_stack, int flag);
void		ss(t_a_node **a_stack, t_b_node **b_stack);

///////////////////* push *////////////////////////

void		pa(t_a_node **a_stack, t_b_node **b_stack, int flag);
void		pb(t_a_node **a_stack, t_b_node **b_stack, int flag);

//////////////////////* rotate */////////////////////

void		ra(t_a_node **a_stack, int flag);
void		rb(t_b_node **b_stack, int flag);
void		rr(t_a_node **a_stack, t_b_node **b_stack);

//////////////////////* reverse rotate *//////////////

void		rra(t_a_node **a_stack, int flag);
void		rrb(t_b_node **b_stack, int flag);
void		rrr(t_a_node **a_stack, t_b_node **b_stack);


//////////////////// *apagar* ///////////////////////

void populate_list(t_b_node **list, int count);

#endif