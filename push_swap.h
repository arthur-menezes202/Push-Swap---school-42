/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armeneze <armeneze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 07:40:40 by armeneze          #+#    #+#             */
/*   Updated: 2025/10/14 18:08:07 by armeneze         ###   ########.fr       */
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
	int				index;
	struct a_node	*next;
}	t_a_node;

typedef struct b_node
{
	int				data;
	int				index;
	struct b_node	*next;
}	t_b_node;

void		clear_list(t_a_node **list);
////////////////////////* utils *////////////////////

int			ft_strlen_array(char **str);
int			ft_strlen_array_int(int *array);
long		ft_strtol(const char *nptr, char **endptr, int base);


///////////////////////////* join args *//////////////////////

char		*join_one_arg(char *string_numbers, char *arg);
char		*join_args_with_space(int argc, char **argv);

char		*treat_space(char *argv);

//////////////////////* Validations *//////////////////////

void		all_validation(int argc, char **argv, t_a_node **a_stack);
void		write_error(void);
void		insert_string_list(char *string_number, t_a_node **a_stack);
void		remove_multiple_spaces(char *str);
void		remove_multiple_zero(char *str);
void		validation_c_s(char *argv, char *string_numbers);
void		validation_zero(char *str);
void		free_char_error(char *s);
void		free_array_error(char **array);

//////////////////////* Insert String List *//////////////////////

void		start_push_swap(t_a_node **a_stack);
t_a_node	*isert_stack_a(int value);
t_b_node	*isert_stack_b(int value);
void		insert_list_array(int value, t_a_node **a_stack);
void		validation_list(t_a_node **a_stack);
void		insert_rank(t_a_node **a_stack);

t_a_node	*get_last_node_a(t_a_node **a);
int			get_first_node_a(t_a_node *a_stack);

////////////////////////* turk algorithm *////////////////////////

void		turk_algorithm(t_a_node **a_stack, t_b_node **b_stack);
void		sort_three(t_a_node **a_stack);
void		bubble_sort_a(t_a_node **a_stack);
int			get_list_size_b(t_b_node **stack);
void		sort_five(t_a_node **a_stack, t_b_node **b_stack);
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

////////////////////////* count_list */////////////////////

int			get_list_size(t_a_node **stack);
int			count_words(char const *s, char c);

/////////////////////////* index list *///////////////////////

int			max_index_list(t_b_node **b_stack);
int			min_index_list_a(t_a_node **a_stack);
int			get_max_index_node_position(t_b_node **b_stack);
int			get_index_node_position_a(t_a_node **a_stack, int index);
void		best_move_five(t_a_node **a, t_b_node **b);

///////////////////////* move_a *///////////////////////

void		move_a(t_a_node **a_stack, t_b_node **b_stack, int current_limit);


////////////////////////* move_index *//////////////////

void		move_b_no_start(t_b_node **b_stack, int index);
void		move_b_no_end(t_b_node **b_stack, int index);
void		move_a_no_start(t_a_node **a_stack, int index);
void		move_a_no_end(t_a_node **a_stack, int index);


////////////////////////* chunks *//////////////////////

void		push_chunks(t_a_node **a, t_b_node **b);

//////////////////// *apagar* ///////////////////////

#endif