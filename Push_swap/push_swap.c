/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acunha-f <acunha-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 02:28:20 by marvin            #+#    #+#             */
/*   Updated: 2024/08/15 18:59:02 by acunha-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	finalize(t_stack **a, t_stack *smallest)
{
	set_median_and_position(smallest);
	while (smallest != *a)
	{
		if (smallest->median)
			rra(a);
		else
			ra(a);
	}
}

void	tiny_sort(t_stack **a, t_stack *big, int len)
{
	if (len == 2)
	{
		if ((*a)->content > (*a)->next->content)
			sa(a);
	}
	if (len == 3)
	{
		if (*a == big)
			ra(a);
		if ((*a)->next == big)
			rra(a);
		if ((*a)->content > (*a)->next->content)
			sa(a);
	}
}

void	push_swap(t_stack **a, t_stack **b, int len)
{
	while (len > 3)
	{
		pb(b, a);
		len--;
	}
	tiny_sort(a, find_biggest(a), len);
	while (*b)
	{
		set_all_targets(a, b);
		move_nodes(a, b, find_cheapest(b));
		pa(a, b);
	}
	finalize(a, find_smallest(a));
}
