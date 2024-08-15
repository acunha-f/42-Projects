/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_related.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acunha-f <acunha-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 19:27:30 by marvin            #+#    #+#             */
/*   Updated: 2024/08/10 19:07:43 by acunha-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*last_node(t_stack *head)
{
	t_stack	*temp;

	if (!head)
		return (NULL);
	temp = head;
	while (temp->next != NULL)
		temp = temp->next;
	return (temp);
}

int	stack_size(t_stack **stack)
{
	int		i;
	t_stack	*temp;

	i = 0;
	if (!stack)
		return (i);
	temp = *stack;
	while (temp != NULL)
	{
		i++;
		temp = temp->next;
	}
	return (i);
}

void	new_node(t_stack **a, int content)
{
	t_stack	*new;

	new = (t_stack *)malloc(sizeof(t_stack));
	if (!new)
		return ;
	new->content = content;
	new->cost = 0;
	new->next = NULL;
	if (!*a)
	{
		new->prev = NULL;
		*a = new;
	}
	else
	{
		new->prev = last_node(*a);
		new->prev->next = new;
	}
	new->target = NULL;
	return ;
}

void	stack_clear(t_stack **stack)
{
	t_stack	*temp;
	t_stack	*head;

	if (!(*stack))
		return ;
	head = *stack;
	while (head)
	{
		temp = head->next;
		free (head);
		head = temp;
	}
	*stack = NULL;
}
