/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atolong_and_check.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppinedo- <ppinedo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 17:33:00 by ppinedo-          #+#    #+#             */
/*   Updated: 2024/01/23 16:48:28 by ppinedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_numbers   *ft_atolong_and_check(char **arguments, t_numbers *numbers)
{
	int     i;
    ;
	i = 0;
    while (arguments[i])
        i++;
    numbers = (t_numbers *)ft_calloc(sizeof(t_stack_node), 1);
    numbers->len = i;
    numbers->value = ft_calloc(i, sizeof(int));
    i = 0;
    while (arguments[i])
    {
        numbers->value[i] = ft_atolong(arguments[i]);
        i++;
    }
	numbers->value = ft_check_dup_and_max_min(numbers->value);
	return (numbers);
}