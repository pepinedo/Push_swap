/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_in_the_stack.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorvarea <jorvarea@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 11:33:06 by ppinedo-          #+#    #+#             */
/*   Updated: 2024/01/25 16:09:33 by jorvarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack_node	*ft_put_in_the_stack(t_stack_node *a, t_numbers *numbers)
{
	int	i;
	i = 0;
	while (i < numbers->len)
	{
		printf("NUMERO QUE ENTRA : %ld\n", numbers->value[i]);
		i++;
	}
	
	a = ft_lstnew(numbers->value[0]);
	i = 0;
	while (i < numbers->len)
	{
		printf("NUMERO QUE ENTRA despues : %ld\n", numbers->value[i]);
		i++;
	}
	i = 1;
	printf("len : %d\n", numbers->len);
	while(i < numbers->len)
	{
		printf("XD:%li\n", numbers->value[i]);
		ft_lstnewnode(a, numbers->value[i]);
		i++;
	}
	return (a);
}
