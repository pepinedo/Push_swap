/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_turk_algorith.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppinedo- <ppinedo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 12:28:47 by ppinedo-          #+#    #+#             */
/*   Updated: 2024/02/02 10:30:38 by ppinedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void ft_printea_stacks(t_stack_node *a)
{
    while (a != NULL)
    {
        printf("NUMERO : %i\n", a->value);
        a = a->next;
    }
}

void	ft_min_on_top(t_stack_node **a)
{
	t_stack_node *temp;

	temp = *a;
	while(temp->value != ft_find_min(temp)->value && temp->next)
	{
		if (ft_find_min(temp)->above_median)
			ra(&temp);
		else
			rra(&temp);
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
		//printf("NODO ACTUAL -> %i\n", (*b)->value);
		ft_init_nodes_a(*a, *b);
		ft_move_to_b(a, b);
	}
	//printf("*-----------------*\n");
	ft_sort_three(a);
	while(*b)
	{
		//printf("NODO ACTUAL -> %i\n", (*b)->value);
		ft_init_nodes_b(*a, *b);
		ft_move_to_a(a, b);
		//printf("*---------|||-|||-------*\n");
	}
	//printf("*-----------------*\n");
	ft_current_index(*a);
	ft_printea_stacks(*a);
	ft_min_on_top(a);
}