/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_turk_algorithm.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppinedo- <ppinedo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 12:28:47 by ppinedo-          #+#    #+#             */
/*   Updated: 2024/02/02 13:55:01 by ppinedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_min_on_top(t_stack_node **a)
{
	while((*a)->value != ft_find_min(*a)->value && !ft_stack_sorted(*a))
	{
		if (ft_find_min(*a)->above_median)
			ra(a);
		else
			rra(a);
	}
}

void	ft_turk_algorithm(t_stack_node **a, t_stack_node **b)
{
	int	len;
	
	len = ft_lstsize(*a);
	if (len-- > 3 && !ft_stack_sorted(*a))
		pb(a, b);
	if (len-- > 3 && !ft_stack_sorted(*a)) 
		pb(a, b);
	while (len-- > 3 && !ft_stack_sorted(*a))
	{
		ft_init_nodes_a(*a, *b);
		ft_move_to_b(a, b);
	}
	ft_sort_three(a);
	while(*b)
	{
		ft_init_nodes_b(*a, *b);
		ft_move_to_a(a, b);
	}
	ft_current_index(*a);
	ft_min_on_top(a);
}