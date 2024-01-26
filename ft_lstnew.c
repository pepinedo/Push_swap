/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppinedo- <ppinedo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 12:40:03 by ppinedo-          #+#    #+#             */
/*   Updated: 2024/01/26 11:34:45 by ppinedo-         ###   ########.fr       */
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