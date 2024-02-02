/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_commands.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppinedo- <ppinedo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 16:31:45 by ppinedo-          #+#    #+#             */
/*   Updated: 2024/02/01 13:45:05 by ppinedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack_node	*ft_penultimate(t_stack_node *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next && (lst->next)->next)
		lst = lst->next;
	return (lst);
}

void	reverse_rotate(t_stack_node **stack)
{
	t_stack_node	*last;
	t_stack_node	*penultimate;

	last = ft_last(*stack);
	penultimate = ft_penultimate(*stack);
	ft_add_front(stack, last);
	penultimate->next = NULL;
}

void	rra(t_stack_node **a)
{
	reverse_rotate(a);
	write(1, "rra\n", 4);
}

void	rrb(t_stack_node **b)
{
	reverse_rotate(b);
	write(1, "rrb\n", 4);
}

void	rrr(t_stack_node **a, t_stack_node **b)
{
	reverse_rotate(a);
	reverse_rotate(b);
	write(1, "rrr\n", 4);
}

// void	print(t_stack_node *a)
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
// 	t_stack_node *nodeD = malloc(sizeof(t_stack_node));
// 	t_stack_node *node1 = malloc(sizeof(t_stack_node));
// 	t_stack_node *node2 = malloc(sizeof(t_stack_node));
// 	t_stack_node *node3 = malloc(sizeof(t_stack_node));
// 	t_stack_node *node4 = malloc(sizeof(t_stack_node));

// 	nodea->value = 9;
// 	nodeB->value = 8;
// 	nodeC->value = 7;
// 	nodeD->value = 6;
// 	nodea->next = nodeB;
// 	nodeB->next = nodeC;
// 	nodeC->next = nodeD;
// 	nodeD->next = NULL;
// 	print (nodea);
// 	printf ("\n");

// 	node1->value = 1;
// 	node2->value = 2;
// 	node3->value = 3;
// 	node4->value = 4;
// 	node1->next = node2;
// 	node2->next = node3;
// 	node3->next = node4;
// 	node4->next = NULL;
// 	print (node1);
// 	printf ("\n");
	
// 	reverse_rotate(&nodea);
// 	print (nodea);
// 	printf ("\n");
// 	print (node1);
// 	printf ("\n");
// 	return (0);
// }