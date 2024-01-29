/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_argorithm.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppinedo- <ppinedo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 11:58:31 by ppinedo-          #+#    #+#             */
/*   Updated: 2024/01/29 13:33:58 by ppinedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_lstsize(t_stack_node *lst)
{
	int	i;

	i = 0;
	while (lst != 0)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

void	ft_sort_argorithm(t_stack_node *a, t_stack_node *b)
{
	if (!ft_stack_sorted(a))
	{
		if (ft_lstsize(a) == 2)
			sa(a);
		else if (ft_lstsize(a) == 3)
			ft_sort_three(a);
		else
			ft_turk_algorithm(a, b);	
	}
	return (0);
}