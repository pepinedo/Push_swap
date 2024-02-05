/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppinedo- <ppinedo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 13:12:33 by ppinedo-          #+#    #+#             */
/*   Updated: 2024/02/05 13:00:38 by ppinedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_exit()
{
    write(STDERR_FILENO, "Error\n", 6);
    exit (1);
}

void	ft_free_ptrstr(char** str)
{
	int i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

t_stack_node	*ft_free_stack(t_stack_node *stack)
{
	t_stack_node	*temp;
	while (stack)
	{
		temp = stack->next;
		free (stack);
		stack = temp;
	}
	return (NULL);
}

void	ft_free_numbers(t_numbers *numbers)
{
	free (numbers->value);
	free (numbers);
	return ;
}