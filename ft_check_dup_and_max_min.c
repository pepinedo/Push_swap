/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_dup_and_max_min.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppinedo- <ppinedo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 16:03:08 by ppinedo-          #+#    #+#             */
/*   Updated: 2024/01/23 11:29:20 by ppinedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long		*ft_check_dup_and_max_min(long *numbers)
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
	i = 0;
	while (numbers[i])
	{
		if (numbers[i] >= INT_MAX || numbers[i] <= INT_MIN) 
			ft_exit();
		i++;
	}
	return (numbers);
}
