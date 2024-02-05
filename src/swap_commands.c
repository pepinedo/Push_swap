/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_commands.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppinedo- <ppinedo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 11:23:14 by ppinedo-          #+#    #+#             */
/*   Updated: 2024/02/05 15:55:24 by ppinedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

static void	swap(t_stack_node **stack)
{
	t_stack_node	*aux;
	t_stack_node	*third;

	third = ((*stack)->next)->next;
	aux = *stack;
	*stack = (*stack)->next;
	aux->next = third;
	(*stack)->next = aux;
}

void	sa(t_stack_node **a)
{
	swap(a);
	write(1, "sa\n", 3);
}

void	sb(t_stack_node **b)
{
	swap(b);
	write(1, "sb\n", 3);
}

void	ss(t_stack_node **a, t_stack_node **b)
{
	swap(a);
	swap(b);
	write(1, "ss\n", 3);
}

//  void	print(t_stack_node *a)
// {
// 	while (a)
// 	{
// 		printf("%li", a->value);
// 		a = a->next;
// 	}
// }

// int	main(void)
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
// 	swap(&nodea);
// 	print (nodea);
// 	printf ("\n");
// 	return (0);
// }