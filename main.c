/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppinedo- <ppinedo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 16:18:02 by ppinedo-          #+#    #+#             */
/*   Updated: 2024/01/22 17:46:45 by ppinedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

int main(int argc, char **argv)
{
    t_stack_node    *a;
    t_stack_node    *b;
    int             *temp;

    a = NULL;
    b = NULL;
    if (argc == 1)
        return (1);
    else if (argc == 2 && !argv[1][0])
        ft_exit();
    else if (argc == 2)
        argv = ft_argc2_split(argv[1]);
    else if (argc > 2)
        argv = ft_join_split(argv);
    temp = ft_atoi_and_check(argv);
    
    // ahora a meter las cosas en el stack

    int j;

    j = 0;
    while (temp[j])
        printf("%i ", temp[j++]);
    return (1);
    
}
