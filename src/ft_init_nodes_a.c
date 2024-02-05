/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_nodes_a.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppinedo- <ppinedo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 15:49:51 by ppinedo-          #+#    #+#             */
/*   Updated: 2024/02/01 15:47:25 by ppinedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_set_cheapest(t_stack_node *stack)
{
	long			cheapest_value;
	t_stack_node	*cheapest_node;

	if (!stack)
		return ;
	cheapest_value = LONG_MAX;
	while (stack)
	{
		if (stack->push_cost < cheapest_value)
		{
			cheapest_value = stack->push_cost;
			cheapest_node = stack;
		}
		stack = stack->next;
	}
	cheapest_node->cheapest = true;
}

void	ft_cost_analysis_a(t_stack_node *a, t_stack_node *b)
{
	int	len_a;
	int	len_b;
	
	len_a = ft_lstsize(a);
	len_b = ft_lstsize(b);
	while(a)
	{
		a->push_cost = a->index;
		if (!(a->above_median))
			a->push_cost = len_a - a->index;
		if (a->target_node->above_median)
			a->push_cost += a->target_node->index;
		else
			a->push_cost += len_b - (a->target_node->index);
		a = a->next;
	}	
}

void	ft_set_target_a(t_stack_node *a, t_stack_node *b)
{
	t_stack_node	*current_b;
	t_stack_node	*target_node;
	long			best_match_index;
	
	while(a)
	{
		best_match_index = LONG_MIN; //el menor
		current_b = b;
		while (current_b)
		{
			if (current_b->value < a->value && current_b->value > best_match_index) 
			{
				best_match_index = current_b->value;
				target_node = current_b;
			}
			current_b = current_b->next;
		}
		if (best_match_index == LONG_MIN)
			a->target_node = ft_find_max(b);
		else
			a->target_node = target_node;
		a = a->next;
	}
}

void	ft_current_index(t_stack_node *stack)
{
	int i;
	int median;

	i = 0;
	if (!stack)
		return ;
	median = ft_lstsize(stack) / 2; //establecer la mitad
	while (stack)
	{
		stack->index = i; // establecer la posicion actual
		if (i <= median)
			stack->above_median = true; //indicar si está en la primera mitad
		else
			stack->above_median = false; //o en la segunda
		stack = stack->next;
		i++;
	}
}

void	ft_init_nodes_a(t_stack_node *a, t_stack_node *b)
{
	ft_current_index(a);
	ft_current_index(b);
	ft_set_target_a(a, b);
	ft_cost_analysis_a(a, b);
	ft_set_cheapest(a);
}