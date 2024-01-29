/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsec.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppinedo- <ppinedo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 11:35:27 by ppinedo-          #+#    #+#             */
/*   Updated: 2024/01/29 11:40:37 by ppinedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack_node	*ft_parsec(int argc, char **argv)
{
	t_numbers       *numbers;

	numbers = NULL;
	if ((argc == 1) || (argc == 2 && !argv[1][0]))
        ft_exit();
    else if (argc == 2)
        argv = ft_argc2_split(argv[1]);
    else if (argc > 2)
        argv = ft_join_split(argv);
    numbers = ft_atolong_and_check(argv); 
    return (ft_put_in_the_stack(numbers));
}