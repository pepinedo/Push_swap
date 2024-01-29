/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppinedo- <ppinedo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 16:18:02 by ppinedo-          #+#    #+#             */
/*   Updated: 2024/01/29 17:07:24 by ppinedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

// static void ft_printea_stacks(t_stack_node *a)
// {
//     while (a != NULL)
//     {
//         printf("NUMERO : %i\n", a->value);
//         a = a->next;
//     }
// }

int main(int argc, char **argv)
{
    t_stack_node    *a;
    t_stack_node    *b;
    
    a = NULL;
    b = NULL;
    a = ft_parsec(argc, argv);
    ft_sort_argorithm(a, b);
    ft_free_stack(&a);
    return (0); 
}
