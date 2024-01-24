/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppinedo- <ppinedo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 16:18:02 by ppinedo-          #+#    #+#             */
/*   Updated: 2024/01/24 15:45:25 by ppinedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

int main(int argc, char **argv)
{
    t_stack_node    **a;
    t_stack_node    **b;
    t_numbers       **numbers;

    b = NULL;
    numbers = NULL;
    if (argc == 1)
        return (1);
    else if (argc == 2 && !argv[1][0])
        ft_exit();
    else if (argc == 2)
        argv = ft_argc2_split(argv[1]);
    else if (argc > 2)
        argv = ft_join_split(argv);
    numbers = ft_atolong_and_check(argv, numbers); 
    a = ft_put_in_the_stack(NULL, numbers);

    while (a != NULL)
    {
        printf("NUMERO FINAL : %i\n", a->value);
        a = a->next;
    }
    return (0); 
}
