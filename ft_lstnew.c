/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorvarea <jorvarea@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 12:40:03 by ppinedo-          #+#    #+#             */
/*   Updated: 2024/01/25 16:20:30 by jorvarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack_node	*ft_lstnew(long number)
{
	t_stack_node	*new;

	new = (t_stack_node *)ft_calloc(1, sizeof(t_stack_node));
	if (new == NULL)
		return (NULL);
	new->value = (long)number;
	new->next = NULL;
	return (new);
}