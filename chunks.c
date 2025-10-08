/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armeneze <armeneze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 16:52:22 by armeneze          #+#    #+#             */
/*   Updated: 2025/10/08 10:32:53 by armeneze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	size_chunk(int n)
{
	int	c;

	if (n <= 100)
		c = 5;
	else
		c = 10;
	return (50);
}

// void    push_chunks(t_a_node **a, t_b_node **b)
// {
//     int N = get_list_size(*a);
//     int C = (N <= 100) ? 5 : 10;
//     int chunk_size = N / C;
    
//     int current_limit = chunk_size; 
    
//     int i = 0; 

void	push_chunks(t_a_node **a, t_b_node **b)
{
	int			n;
	int			chunk_size;
	int			i;
	t_a_node	*head;
	int			current_limit;

	i = 0;
	n = get_list_size(a);
	chunk_size = size_chunk(n);
	current_limit = chunk_size;
	while (i < n)
	{
		head = *a;
		if (head->index < current_limit)
		{
			pb(a, b, 1);
			i++;
		}
		else
			ra(a, 1);
		if (i >= current_limit)
		{
			current_limit += chunk_size;
		}
	}
}
