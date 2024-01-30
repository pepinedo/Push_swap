/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppinedo- <ppinedo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 13:12:33 by ppinedo-          #+#    #+#             */
/*   Updated: 2024/01/30 11:42:50 by ppinedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_exit()
{
    write(2, "Error, invalid arguments\n", 25);
    exit (1);
}

t_stack_node	*ft_free_stack(t_stack_node *stack)
{
	t_stack_node	*temp;
	while (stack)
	{
		temp = stack;
		free (stack);
		stack = temp->next;
		free (temp);
	}
	return (NULL);
}

t_numbers	*ft_free_numbers(t_numbers *numbers)
{
	free (numbers->value);
	free (numbers);
	return (NULL);
}