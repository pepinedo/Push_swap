/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppinedo- <ppinedo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 12:24:24 by ppinedo-          #+#    #+#             */
/*   Updated: 2024/02/05 15:50:08 by ppinedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int	ft_lstsize(t_stack_node *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

t_stack_node	*ft_lstnew(long number)
{
	t_stack_node	*new;

	new = (t_stack_node *)ft_calloc(1, sizeof(t_stack_node));
	if (new == NULL)
		return (NULL);
	new->value = (int)number;
	new->index = -1;
	new->push_cost = -1;
	new->above_median = false;
	new->cheapest = false;
	new->target_node = NULL;
	new->next = NULL;
	return (new);
}

void	ft_lstnewnode(t_stack_node *a, long number)
{
	while (a->next)
		a = a->next;
	a->next = ft_lstnew(number);
}

t_stack_node	*ft_put_in_the_stack(t_numbers *numbers)
{
	int				i;
	t_stack_node	*a;

	a = NULL;
	a = ft_lstnew(numbers->value[0]);
	i = 1;
	while (i < numbers->len)
	{
		ft_lstnewnode(a, numbers->value[i]);
		i++;
	}
	free(numbers->value);
	free(numbers);
	return (a);
}
