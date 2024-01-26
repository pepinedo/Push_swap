/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atolong_and_check.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppinedo- <ppinedo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 17:33:00 by ppinedo-          #+#    #+#             */
/*   Updated: 2024/01/26 12:13:04 by ppinedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_numbers   *ft_atolong_and_check(char **arguments)
{
	int         i;
    t_numbers   *numbers;

	i = 0;
    while (arguments[i])
        i++;
    numbers = (t_numbers *)ft_calloc(sizeof(t_numbers), 1);
    if (numbers == NULL)
        return (NULL);
    numbers->len = i;
    numbers->value = ft_calloc(i, sizeof(long));
    i = 0;
    while (arguments[i])
    {
        numbers->value[i] = ft_atolong(arguments[i]);
        i++;
    }
    ft_no_dup(numbers->value);
	ft_check_max_min_int(numbers->value);
    i = 0;
	return (numbers);
}