/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_commands.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppinedo- <ppinedo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 15:33:39 by ppinedo-          #+#    #+#             */
/*   Updated: 2024/01/24 17:35:27 by ppinedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate(t_stack_node **list)
{
	t_stack_node *temp;
	
	temp = *list;
	while ((*list)->next != NULL)
		*list = (*list)->next;
	(*list)->next = temp;
	*list = (*list)->next;
	(*list)->next = NULL;
}

void	ra(t_stack_node **a)
{
	rotate(a);
	write(1, "ra\n", 3);	
}

void	rb(t_stack_node **b)
{
	rotate(b);
	write(1, "rb\n", 3);
}

void	rr(t_stack_node **a, t_stack_node **b)
{
	rotate(a);
	rotate(b);
	write(1, "rr\n", 3);	
}

//  void	print(t_stack_node *a)
// {
// 	while (a)
// 	{
// 		printf("%li", a->value);
// 		a = a->next;
// 	}
// }

// int	main()
// {
// 	t_stack_node *nodea = malloc(sizeof(t_stack_node));
// 	t_stack_node *nodeB = malloc(sizeof(t_stack_node));
// 	t_stack_node *nodeC = malloc(sizeof(t_stack_node));

// 	nodea->value = 1;
// 	nodeB->value = 2;
// 	nodeC->value = 3;
// 	nodea->next = nodeB;
// 	nodeB->next = nodeC;
// 	nodeC->next = NULL;
// 	print (nodea);
// 	printf ("\n");
// 	rotate(&nodea);
// 	print (nodeB);
// 	printf ("\n");
// 	return (0);
// }