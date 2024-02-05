/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_to_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppinedo- <ppinedo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 16:17:08 by ppinedo-          #+#    #+#             */
/*   Updated: 2024/02/02 13:58:54 by ppinedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_prep_for_push(t_stack_node **stack, t_stack_node *top_node, char stack_name)
{
	while (*stack != top_node) //mientras no sea el top, muevelo al top
	{
		if (stack_name == 'a')
		{
			if (top_node->above_median)
				ra(stack);
			else
				rra(stack);
		}
		else if (stack_name == 'b')
		{
			if (top_node->above_median)
				rb(stack);
			else
				rrb(stack);
		}
	}
}

t_stack_node	*ft_get_the_cheapest(t_stack_node *stack)
{
	while (stack)
	{
		if (stack->cheapest)
			return (stack);
		stack = stack->next;
	}
	return (NULL);
}

void	ft_rev_rotate_both(t_stack_node **a, t_stack_node **b, t_stack_node *cheapest_node)
{
	while (*b != cheapest_node->target_node && *a != cheapest_node)
		rrr(a, b); 
	ft_current_index(*a);
	ft_current_index(*b);
}

void	ft_rotate_both(t_stack_node **a, t_stack_node **b, t_stack_node *cheapest_node)
{
	while(*b != cheapest_node->target_node && *a != cheapest_node)
		rr(a, b);
	ft_current_index(*a);
	ft_current_index(*b);
}

void	ft_move_to_b(t_stack_node **a, t_stack_node **b)
{
	t_stack_node	*cheapest_node;

	cheapest_node = ft_get_the_cheapest(*a);
	if (cheapest_node->above_median && cheapest_node->target_node->above_median) //si ambos estan por encima de la mediana
		ft_rotate_both(a, b, cheapest_node);
	else if (!(cheapest_node->above_median) && !(cheapest_node->target_node->above_median)) // si estan por debajo
		ft_rev_rotate_both(a, b, cheapest_node);
	ft_prep_for_push(a, cheapest_node, 'a');
	ft_prep_for_push(b, cheapest_node->target_node, 'b');
	pb(a, b);
}