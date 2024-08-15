/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_related_also.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acunha-f <acunha-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 03:53:41 by marvin            #+#    #+#             */
/*   Updated: 2024/08/13 17:43:09 by acunha-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_atoll(const char *str)
{
	int			i;
	int			sign;
	long long	sum;

	i = 0;
	sign = 1;
	sum = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		sum = 10 * sum + (str[i] - 48);
		i++;
	}
	return (sum * sign);
}

int	is_stack_sorted(t_stack **stack)
{
	t_stack	*temp;

	temp = *stack;
	while (temp->next)
	{
		if (temp->content > temp->next->content)
			return (0);
		temp = temp->next;
	}
	return (1);
}

void	create_stack(t_stack **stack, char **argv, int checker)
{
	long long	n;

	if (!stack)
		return ;
	while (*argv)
	{
		if (e_syntax(*argv))
			e_free(stack, argv, checker);
		n = ft_atoll(*argv);
		if (n > INT_MAX || n < INT_MIN)
			e_free(stack, argv, checker);
		if (n_repeat(*stack, (int)n))
			e_free(stack, argv, checker);
		new_node(stack, (int)n);
		argv += 1;
	}
	if (checker && argv != NULL)
		free_av(argv);
}

t_stack	*find_smallest(t_stack **stack)
{
	t_stack	*small;
	t_stack	*temp;

	if (!(*stack))
		return (NULL);
	small = *stack;
	temp = *stack;
	while (temp)
	{
		if (small->content > temp->content)
			small = temp;
		temp = temp->next;
	}
	return (temp);
}

t_stack	*find_biggest(t_stack **stack)
{
	t_stack	*big;
	t_stack	*temp;

	if (!(*stack))
		return (NULL);
	big = *stack;
	temp = *stack;
	while (temp)
	{
		if (big->content < temp->content)
			big = temp;
		temp = temp->next;
	}
	return (temp);
}
