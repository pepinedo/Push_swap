/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_commands.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppinedo- <ppinedo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 15:33:39 by ppinedo-          #+#    #+#             */
/*   Updated: 2024/02/05 15:53:02 by ppinedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

t_stack_node	*ft_last(t_stack_node *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}

void	rotate(t_stack_node **stack)
{
	t_stack_node	*second;
	t_stack_node	*last;

	last = ft_last(*stack);
	second = (*stack)->next;
	(*stack)->next = NULL;
	last->next = *stack;
	*stack = second;
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

// static void	print(t_stack_node *a)
// {
// 	while (a)
// 	{
// 		printf("%i", a->value);
// 		a = a->next;
// 	}
// }

// int	main(void)
// {
// 	t_stack_node *nodeA = malloc(sizeof(t_stack_node));
// 	t_stack_node *nodeB = malloc(sizeof(t_stack_node));
// 	t_stack_node *nodeC = malloc(sizeof(t_stack_node));

// 	nodeA->value = 9;
// 	nodeB->value = 8;
// 	nodeC->value = 7;
// 	nodeA->next = nodeB;
// 	nodeB->next = nodeC;
// 	nodeC->next = NULL;
// 	print (nodeA);
// 	printf ("\n");

// 	ra(&nodeA);
// 	print (nodeA);
// 	printf ("\n");

// 	return (0);
// }