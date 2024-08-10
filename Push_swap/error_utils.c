/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acunha-f <acunha-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 02:01:16 by marvin            #+#    #+#             */
/*   Updated: 2024/08/10 18:58:03 by acunha-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_isdigit(int val)
{
	if (val >= '0' && val <= '9')
		return (1);
	return (0);
}

int	n_repeat(t_stack *stack, int n)
{
	if (stack == NULL)
		return (0);
	while (stack)
	{
		if (stack->content == n)
			return (1);
		stack = stack->next;
	}
	return (0);
}

int	e_syntax(char *str)
{
	int	i;

	i = 0;
	if (!(str[i] == '-' || str[i] == '+')
		|| !ft_isdigit(str[i]))
		return (1);
	if ((str[i] == '-' || str[i] == '+')
		&& !ft_isdigit(str[i + 1]))
		return (1);
	i++;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (1);
		i++;
	}
	return (0);
}

void	free_av(char **argv)
{
	int	lenght;

	lenght = -1;
	while (argv[lenght])
		lenght++;
	while (lenght >= 0)
	{
		free(argv[lenght]);
		lenght--;
	}
	free(argv);
}

void	e_free(t_stack	**stack, char **argv)
{
	stack_clear(stack);
	free_av(argv);
	write(2, "Error\n", 6);
	exit(1);
}
