/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppinedo- <ppinedo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 16:18:02 by ppinedo-          #+#    #+#             */
/*   Updated: 2024/02/02 12:43:54 by ppinedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

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

int main(int argc, char **argv)
{
    t_stack_node    *a;
    t_stack_node    *b;
    
    a = NULL;
    b = NULL;
    a = ft_parsec(argc, argv);
    // ft_printea_stacks(a, '1');
    ft_sort_argorithm(&a, &b);
    // ft_printea_stacks(a, '2');
    a = ft_free_stack(a);
    // system("leaks push_swap");
    return (0); 
}
