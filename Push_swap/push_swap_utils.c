/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 03:54:19 by marvin            #+#    #+#             */
/*   Updated: 2024/06/17 03:54:19 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	set_target(t_stack **a, t_stack *b)
{
	t_stack	*ta;
	int		dif;
	int		smallest_dif;

	dif = 0;
	ta = *a;
	while (ta->content < b->content && ta->next)
		ta = ta->next;
	b->target = ta;
	smallest_dif = ta->content - b->content;
	while (ta)
	{
		dif = ta->content - b->content;
		if (smallest_dif > dif && dif > 0)
		{
			smallest_dif = dif;
			b->target = ta;
		}
		ta = ta->next;
	}
	if (dif == 0)
		b->target = find_smallest(a);
}

void	set_all_targets(t_stack **a, t_stack **b)
{
	t_stack	*tb;

	tb = *b;
	while (tb)
	{
		set_target(a, tb);
		tb = tb->next;
	}
}

void	set_median_and_position(t_stack *node)
{
	t_stack	*up;
	t_stack	*down;
	int		*count;

	up = node;
	down = node;
	count = 0;
	while (up && down)
	{
		up = up->prev;
		down = down->next;
		count++;
	}
	if (down == NULL)
		node->median = 1;
	else if (up == NULL)
	{
		node->median = 0;
		count--;
	}
	node->position = count;
}

t_stack	*find_cheapest(t_stack **a, t_stack **b)
{
	t_stack *cheapest;
	t_stack *tb;
	int		smallest;

	tb = *b;
	smallest = tb->position + tb->target->position;
	while (tb)
	{
		tb->cost = (tb->position + tb->target->position);
		if (tb->cost < smallest)
		{
			smallest = tb->cost;
			cheapest = tb;
		}
		tb = tb->next;
	}
	return (cheapest);
}

void	move_nodes(t_stack **a, t_stack **b, t_stack *n)
{
	while (n != *a && n != *b)
	{
		if ((!n->median && !n->target->median) && (n != *a || n != *b))
			rr(a, b);
		if (n->median && n->target->median)
			rrr(a, b);
		if (n != *a || n != *b)
		{
			if (n != *a)
			{
				if (n->median)
					rrb(b);
				else
					rb(b);
			}
			if (n != *b)
			{
				if (n->target->median)
					rra(a);
				else
					ra(a);
			}
		}
	}
}
