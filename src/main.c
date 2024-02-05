/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppinedo- <ppinedo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 16:18:02 by ppinedo-          #+#    #+#             */
/*   Updated: 2024/02/05 15:51:09 by ppinedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

// static void ft_printea_stacks(t_stack_node *a, char c)
// {
//     if (c == '1')
//     {
//         while (a != NULL)
//         {
//             printf("NUMERO : %i\n", a->value);
//             a = a->next;
//         }
//     }
//     if (c == '2')
//     {
//     while (a != NULL)
//         {
//             printf("NUMERO FINAL : %i\n", a->value);
//             a = a->next;
//         }
//     }
// }

// void leaks(){
//     system("leaks -q push_swap");
// }

void	ft_sort_argorithm(t_stack_node **a, t_stack_node **b)
{
	if (!ft_stack_sorted(*a))
	{
		if (ft_lstsize(*a) == 2)
			sa(a);
		else if (ft_lstsize(*a) == 3)
			ft_sort_three(a);
		else
			ft_turk_algorithm(a, b);
	}
}

int	main(int argc, char **argv)
{
	t_stack_node	*a;
	t_stack_node	*b;

	a = NULL;
	b = NULL;
	a = ft_parsec(argc, argv);
	ft_sort_argorithm(&a, &b);
	a = ft_free_stack(a);
	return (0);
}
