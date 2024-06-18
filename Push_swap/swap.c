/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 02:49:39 by marvin            #+#    #+#             */
/*   Updated: 2024/06/14 02:49:39 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap(t_stack **stack)
{
	t_stack	*head;
	t_stack	*after;

	if (!(*stack) || !(*stack)->next)
		return ;
	head = *stack;
	after = (*stack)->next;
	if (!head->next->next)
		head->next = NULL;
	else
		{
			after->next->prev = head;
			head->next = after->next;
		}
		head->prev = after;
		after->next = head;
		after->prev = NULL;
		*stack = after;
}

void	sa(t_stack **a)
{
	swap(a);
	write(1, "sa\n", 3);
}

void	sb(t_stack **b)
{
	swap(b);
	write(1, "sb\n", 3);
}

void	ss(t_stack **a, t_stack **b)
{
	swap(a;)
	swap(b);
	write(1, "ss\n", 3);
}
