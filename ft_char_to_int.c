/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_to_int.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppinedo- <ppinedo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 17:33:00 by ppinedo-          #+#    #+#             */
/*   Updated: 2024/01/22 17:41:38 by ppinedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int *ft_atoi_and_check(char **arguments)
{
	int  i;
	i = 0;
    while (arguments[i])
        i++;
    int  *enteros = ft_calloc(i, sizeof(int));
    i = 0;
    while (arguments[i])
    {
        enteros[i] = ft_atoi(arguments[i]);
        i++;
    }
	ft_checkdup(enteros);
	return (enteros);
}