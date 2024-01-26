/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_in_the_stack.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppinedo- <ppinedo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 11:33:06 by ppinedo-          #+#    #+#             */
/*   Updated: 2024/01/26 12:05:34 by ppinedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack_node	*ft_put_in_the_stack(t_numbers *numbers)
{
	int				i;
	t_stack_node 	*a;

	a = ft_lstnew(numbers->value[0]);
	i = 1;
	while(i < numbers->len)
		ft_lstnewnode(a, numbers->value[i++]);
	return (a);
}
