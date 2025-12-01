/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_algoritm.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsiguenc <bsiguenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 14:10:33 by bsiguenc          #+#    #+#             */
/*   Updated: 2025/11/05 15:44:41 by bsiguenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_index(t_swap_node *node, int max)
{
	int	pos;

	pos = 0;
	while (node != NULL)
	{
		if (node->index == max)
			return (pos);
		node = node->next;
		pos++;
	}
	return (pos);
}

int	get_chunk_size(int size)
{
	int	chunk_size;

	if (size <= 100)
		chunk_size = size / 7;
	else
		chunk_size = size / 11;
	if (chunk_size == 0)
		return (1);
	return (chunk_size);
}

int	get_max_index(t_swap_node *node)
{
	int	max;

	max = node->index;
	while (node != NULL)
	{
		if (max < node->index)
			max = node->index;
		node = node->next;
	}
	return (max);
}
