/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 04:34:07 by marvin            #+#    #+#             */
/*   Updated: 2024/06/14 04:34:07 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate(t_stack **stack, t_stack *last)
{
	if (!(*stack) || !(*stack)->next)
		return ;
	last->next = *stack;
	*stack = (*stack)->next;
	(*stack)->prev = NULL;
	last->next->prev = last;
	last->next->next = NULL;
}

void	ra(t_stack **a)
{
	rotate(a, last_node(a));
	write(1, "ra\n", 3);
}

void	rb(t_stack **b)
{
	rotate(b, last_node(b));
	write(1, "rb\n", 3);
}

void	rr(t_stack **a, t_stack **b)
{
	rotate(a, last_node(a));
	rotate(b, last_node(b));
	write(1, "rr\n", 3);
}
