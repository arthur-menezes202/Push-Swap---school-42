/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armeneze <armeneze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 16:19:39 by armeneze          #+#    #+#             */
/*   Updated: 2025/10/14 16:50:57 by armeneze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int	get_min_index_node_position(t_a_node **a)
{
	t_a_node	*node_a;
	int			max_index;
	int			count;

	max_index = min_index_list_a(a);
	node_a = *a;
	count = 0;
	while (node_a != NULL)
	{
		if (node_a->index == max_index)
		{
			return (count);
		}
		count++;
		node_a = node_a->next;
	}
	return (count);
}

// Função auxiliar de movimento otimizado, baseada na posição (0-base)
void move_to_top_optimized(t_a_node **a_stack, int position)
{
    int size;

    size = get_list_size(a_stack);

    // Se a posicao for 0, nao ha o que fazer.
    if (position == 0)
        return;

    // Se a POSIÇÃO for na primeira metade (RA é o melhor movimento)
    // Ex: size=5, medio=2. position=0, 1, 2 => RA
    if (position <= size / 2)
    {
        while (position-- > 0)
            ra(a_stack, 1); // Rota para cima (RA)
    }
    // Caso contrario, RRA é o melhor movimento
    else
    {
        // O numero de RRA necessarios e (tamanho - posicao)
        while (position++ < size) 
            rra(a_stack, 1); // Rota para baixo (RRA)
    }
}

void best_move_five(t_a_node **a_stack, t_b_node **b_stack)
{
    int position;
    int i;

    i = 0;
    // Precisamos empurrar os dois menores (rank 0 e rank 1)
    while (i < 2)
    {
        // 1. Encontra a posicao do menor elemento restante
        position = get_min_index_node_position(a_stack); 
        
        // 2. Move o elemento para o topo de A usando o movimento mais barato
        // A logica de custo é encapsulada aqui, substituindo seu 'if/else'
        move_to_top_optimized(a_stack, position);
        
        // 3. Empurra o menor elemento (agora no topo) para B
        pb(a_stack, b_stack, 1);
        
        i++;
    }
}
