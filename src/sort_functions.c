/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppinedo- <ppinedo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 12:45:45 by ppinedo-          #+#    #+#             */
/*   Updated: 2024/02/02 13:54:30 by ppinedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	ft_stack_sorted(t_stack_node *a)
{
	if (!a)
		return (1);
	while (a->next)
	{
		if (a->value > a->next->value)
			return (false);
		a = a->next;
	}
	return (true);
}

t_stack_node	*ft_find_min(t_stack_node *stack)
{
	long			min;
	t_stack_node	*min_node;

	if (!stack)
		return (NULL);
	min = LONG_MAX;
	while (stack)
	{
		if (stack->value < min)
		{
			min = stack->value; 
			min_node = stack;
		}
		stack = stack->next;
	}
	return (min_node);
}

t_stack_node	*ft_find_max(t_stack_node *stack)
{
	long			max;
	t_stack_node	*max_node;

	if (!stack)
		return (NULL);
	max = LONG_MIN;
	while (stack)
	{
		if (stack->value > max)
		{
			max = stack->value; 
			max_node = stack;
		}
		stack = stack->next;
	}
	return (max_node);
}

void	ft_sort_three(t_stack_node **a)
{
	t_stack_node	*the_big_one;
	
	the_big_one = ft_find_max(*a);
	if (the_big_one == *a)
		ra(a);
	else if ((*a)->next == the_big_one)
		rra(a);
	if ((*a)->value > (*a)->next->value)
		sa(a);
}
