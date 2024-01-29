/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppinedo- <ppinedo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 12:24:24 by ppinedo-          #+#    #+#             */
/*   Updated: 2024/01/29 13:33:48 by ppinedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


t_stack_node	*ft_lstnew(long number)
{
	t_stack_node	*new;

	new = (t_stack_node *)ft_calloc(1, sizeof(t_stack_node));
	if (new == NULL)
		return (NULL);
	new->value = (int)number;
	new->next = NULL;
	return (new);
}

void	ft_lstnewnode(t_stack_node *a, long number)
{
	while (a && a->next != NULL)
		a = a->next;
	a->next = ft_lstnew(number);
}
