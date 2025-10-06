/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turk_algorithm.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armeneze <armeneze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 12:06:20 by armeneze          #+#    #+#             */
/*   Updated: 2025/10/06 11:18:37 by armeneze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


// int	calculate_cost(t_a_node *a_stack, t_b_node *b_stack, t_b_node *b_node)
// {
// 	int	b_cost;
// 	int	a_cost;
// 	int	b_index;
// 	int	target_index;

// 	b_index = get_node_index(b_stack, b_node);

//     target_index = find_target_index(a_stack, b_node->data);

//     // --- Passo 2: Calcule o custo de rotacoes para cada lista ---

//     // Custo de rotacoes para 'b'
//     if (b_index <= get_list_size(b_stack) / 2)
//         b_cost = b_index; // Se estiver na primeira metade, use rb
//     else
//         b_cost = get_list_size(b_stack) - b_index; // Caso contrario, rrb

//     // Custo de rotacoes para 'a'
//     if (target_index <= get_list_size(a_stack) / 2)
//         a_cost = target_index; // Se estiver na primeira metade, use ra
//     else
//         a_cost = get_list_size(a_stack) - target_index; // Caso contrario, rra

//     // --- Passo 3: Calcule e Compare os 4 Cenarios de Custo ---
//     int cost1; // ra e rb (mesma direcao)
//     int cost2; // rra e rrb (mesma direcao)
//     int cost3; // ra e rrb (direcoes opostas)
//     int cost4; // rra e rb (direcoes opostas)

//     // Cenarios 1 e 2: Rotacoes na mesma direcao (otimizados com rr e rrr)
//     cost1 = max(a_cost, b_cost); // custo de ra+rb
//     cost2 = max(get_list_size(a_stack) - a_cost, get_list_size(b_stack) - b_cost); // custo de rra+rrb

//     // Cenarios 3 e 4: Rotacoes em direcoes opostas
//     cost3 = a_cost + (get_list_size(b_stack) - b_cost); // custo de ra+rrb
//     cost4 = (get_list_size(a_stack) - a_cost) + b_cost; // custo de rra+rb

//     // Retorna o menor custo dentre os 4 cenarios
//     return min(min(cost1, cost2), min(cost3, cost4));
// }

int	move_for_a(t_a_node **a_stack)
{
	t_a_node	*node_a;
	int			max_index;

	node_a = *a_stack;
	max_index = node_a->index;
	while (node_a->next != NULL)
	{
		if (max_index > node_a->index)
			max_index = node_a->index;
		node_a = node_a->next;
	}
	return (max_index);
}

void	turk_algorithm(t_a_node **a_stack, t_b_node **b_stack)
{
	while (get_list_size(*a_stack) > 3)
		pb(a_stack, b_stack, 1);
	while (*b_stack != NULL)
	{
		move_for_a(a_stack);
		pb(a_stack, b_stack, 1);
	}
}
