/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkdup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppinedo- <ppinedo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 16:03:08 by ppinedo-          #+#    #+#             */
/*   Updated: 2024/01/22 16:15:56 by ppinedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_checkdup(int *numbers)
{
	int i;
	int j;

	i = 0;
	j = 1;
	while (numbers[i])
	{
		while (numbers[j])
		{
			if (numbers[i] == numbers[j])
				ft_exit();
			else
				j++;
		}
		i++;
		j = i + 1;
	}
}
