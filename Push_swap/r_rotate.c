/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_rotate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acunha-f <acunha-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 05:05:12 by marvin            #+#    #+#             */
/*   Updated: 2024/08/10 19:03:38 by acunha-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rrotate(t_stack **stack, t_stack *last)
{
	if (!(*stack) || !(*stack)->next)
		return ;
	last->prev->next = NULL;
	last->next = *stack;
	last->prev = NULL;
	last = *stack;
	last->next->prev = last;
}

void	rra(t_stack **a)
{
	rrotate(a, last_node(*a));
	write(1, "rra\n", 3);
}

void	rrb(t_stack **b)
{
	rrotate(b, last_node(*b));
	write(1, "rrb\n", 3);
}

void	rrr(t_stack **a, t_stack **b)
{
	rrotate(a, last_node(*a));
	rrotate(b, last_node(*b));
	write(1, "rrr\n", 3);
}
