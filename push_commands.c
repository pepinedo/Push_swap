/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_commands.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppinedo- <ppinedo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 13:51:46 by ppinedo-          #+#    #+#             */
/*   Updated: 2024/01/24 17:27:24 by ppinedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push(t_stack_node **dest, t_stack_node **source)
{
	t_stack_node *temp;
	
	temp = *source;
	*source = (*source)->next; 
	temp->next = *dest; 
	*dest = temp;
}

void	pa(t_stack_node **a, t_stack_node **b)
{
	if (!b)
		return ;
	push(a, b);
	write(1, "pa\n", 3);
}

void	pb(t_stack_node **b, t_stack_node **a)
{
	if (!a)
		return ;
	push(b, a);
	write(1, "pb\n", 3);
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

// 	t_stack_node *node1 = malloc(sizeof(t_stack_node));
// 	t_stack_node *node2 = malloc(sizeof(t_stack_node));
// 	t_stack_node *node3 = malloc(sizeof(t_stack_node));

// 	nodea->value = 9;
// 	nodeB->value = 8;
// 	nodeC->value = 7;
// 	nodea->next = nodeB;
// 	nodeB->next = nodeC;
// 	nodeC->next = NULL;

// 	node1->value = 1;
// 	node2->value = 2;
// 	node3->value = 3;
// 	node1->next = node2;
// 	node2->next = node3;
// 	node3->next = NULL;
	
// 	print (nodea);
// 	printf ("\n");
// 	push(&nodea, &node1);
// 	print (nodea);
// 	printf ("\n");
// 	return (0);
// }