/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_ten.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armeneze <armeneze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 20:37:31 by armeneze          #+#    #+#             */
/*   Updated: 2025/10/14 15:14:23 by armeneze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted_a(t_a_node *a_stack)
{
	t_a_node	*current;

	if (a_stack == NULL || a_stack->next == NULL)
		return (1);

	current = a_stack;
	while (current->next != NULL)
	{
		if (current->index > current->next->index)
		{
			return (0);
		}
		current = current->next;
	}
	return (1);
}

void bubble_sort_a(t_a_node **a_stack)
{
	int list_size;
	int i; // Contador de passadas (N-1 passadas)
	int j; // Contador de elementos em cada passada

	list_size = get_list_size(a_stack); // Correcao: get_list_size recebe t_a_node *

	// Nao faz nada se a lista ja estiver ordenada
	if (is_sorted_a(*a_stack))
		return;

	i = 0;
	// N-1 passadas
	while (i < list_size - 1) 
	{
		j = 0;
		// CORREÇÃO: A cada passagem, o limite de comparacoes diminui
		while (j < list_size - 1 - i) 
		{
			// 1. Checa se A[0] e maior que A[1]
			if ((*a_stack)->index > (*a_stack)->next->index)
			{
				sa(a_stack, 1); // Troca
			}
			
			// 2. Rotaciona a lista para o proximo par ir para o topo
			ra(a_stack, 1); 
			
			j++;
		}
		
		// CORREÇÃO (Opcional, mas util): Se a lista estiver ordenada, podemos sair mais cedo.
		if (is_sorted_a(*a_stack))
			break;
			
		i++;
	}
	
	// Rotação Final: Encontra o menor caminho para levar o rank 0 para o topo.
	int pos_of_min = 0;
	t_a_node *current = *a_stack;

	// Encontra a posicao (index) do rank 0
	while (current->index != 0)
	{
		current = current->next;
		pos_of_min++;
	}

	// Rotaciona (ra ou rra) o menor elemento para o topo da forma mais eficiente
	if (pos_of_min <= list_size / 2)
	{
		while ((*a_stack)->index != 0)
			ra(a_stack, 1);
	}
	else
	{
		while ((*a_stack)->index != 0)
			rra(a_stack, 1);
	}
}
