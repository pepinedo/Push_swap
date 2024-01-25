/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atolong_and_check.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorvarea <jorvarea@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 17:33:00 by ppinedo-          #+#    #+#             */
/*   Updated: 2024/01/25 15:50:44 by jorvarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_numbers   *ft_atolong_and_check(char **arguments, t_numbers *numbers)
{
	int     i;
	i = 0;
    while (arguments[i])
        i++;
    numbers = (t_numbers *)malloc(sizeof(t_numbers));
    numbers->len = i;
    numbers->value = ft_calloc(i, sizeof(int));
    i = 0;
    while (arguments[i])
    {
        numbers->value[i] = ft_atolong(arguments[i]);
        i++;
    }
	numbers->value = ft_check_dup_and_max_min(numbers->value);
    i = 0;
    while (i < numbers->len)
    {
        printf("Num %li\n", numbers->value[i++]);
    }
	return (numbers);
}