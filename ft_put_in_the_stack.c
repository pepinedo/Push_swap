/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_in_the_stack.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppinedo- <ppinedo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 11:33:06 by ppinedo-          #+#    #+#             */
/*   Updated: 2024/01/23 19:33:05 by ppinedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack_node	*ft_put_in_the_stack(t_stack_node *a, t_numbers *numbers)
{
	int	i;
	i = 0;
	while (i < numbers->len)
	{
		printf("NUMERO QUE ENTRA : %ld\n", *(numbers->value + i));
		i++;
	}
	
	a = ft_lstnew(numbers->value[0]);
	i = 1;
	printf("len : %d\n", numbers->len);
	while(i < numbers->len)
	{
		printf("XD:%u\n", (unsigned int)*(numbers->value + i));
		ft_lstnewnode(a, *(numbers->value + i));
		i++;
	}
	return (a);
}
