/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isallnum.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorvarea <jorvarea@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 13:42:56 by ppinedo-          #+#    #+#             */
/*   Updated: 2024/01/25 15:09:10 by jorvarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_isallnum(char *array)
{
	int i;

	i = 0;
	while (array[i] != '\0')
	{
		if ((array[i] >= '0' && array[i] <= '9') || (array[i] == ' ')
			|| ((array[i] == '-' || array[i] == '+') && (array[i + 1] >= '0'
					&& array[i + 1] <= '9')))
			i++;
		else
			ft_exit();
	}
}