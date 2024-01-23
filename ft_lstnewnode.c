/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnewnode.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppinedo- <ppinedo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 13:04:27 by ppinedo-          #+#    #+#             */
/*   Updated: 2024/01/23 18:14:13 by ppinedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstnewnode(t_stack_node *a, long number)
{
	while (a && a->next != NULL)
		a = a->next;
	a->next = ft_lstnew(number);
}