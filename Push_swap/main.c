/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acunha-f <acunha-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 03:58:06 by marvin            #+#    #+#             */
/*   Updated: 2024/08/13 16:42:59 by acunha-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	int		checker;

	a = NULL;
	b = NULL;
	checker = 0;
	if (argc < 2 || (argc == 2 && !argv[1][0]))
		return (0);
	else if (argc == 2)
	{
		argv = ft_split(*argv + 1, ' ');
		checker = 1;
	}
	create_stack(&a, argv + 1, checker);
	if (!is_stack_sorted(&a))
		push_swap(&a, &b, stack_size(&a));
	stack_clear(&a);
}
