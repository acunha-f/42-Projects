/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 03:12:53 by marvin            #+#    #+#             */
/*   Updated: 2024/06/11 03:12:53 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <stdarg.h>
# include <fcntl.h>
# include <limits.h>

typedef struct s_stack
{
	int				content;
	int				position;
	int				cost;
	int				median;
	struct	s_stack	*target;
	struct s_stack	*next;
	struct s_stack	*prev;
}							t_stack;

char	**ft_split(char const *s, char c);

int		n_repeat(t_stack *stack, int n);
int		e_syntax(char *str);
void	free_av(char **argv);
void	e_free(t_stack	**stack, char **argv);

void	tiny_sort(t_stack **a, t_stack *big, int len);
void	push_swap(t_stack **a, t_stack **b, int len);

void	set_all_targets(t_stack **a, t_stack **b);
void	set_median_and_position(t_stack *node);
t_stack	*find_cheapest(t_stack **a, t_stack **b);
void	move_nodes(t_stack **a, t_stack **b, t_stack *n);

void	pa(t_stack **a, t_stack **b);
void	pb(t_stack **b, t_stack **a);
void	sa(t_stack **a);
void	sb(t_stack **b);
void	ss(t_stack **a, t_stack **b);
void	ra(t_stack **a);
void	rb(t_stack **b);
void	rr(t_stack **a, t_stack **b);
void	rra(t_stack **a);
void	rrb(t_stack **b);
void	rrr(t_stack **a, t_stack **b);

t_stack	*last_node(t_stack *lst);
int		stack_size(t_stack **stack);
t_stack	*new_node(t_stack **a, int content);
void	stack_clear(t_stack **stack);

int		is_stack_storted(t_stack **stack);
void	create_stack(t_stack **stack, char **argv);
t_stack	*find_smallest(t_stack **stack);
t_stack	*find_biggest(t_stack **stack);

#endif
