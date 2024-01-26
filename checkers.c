/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppinedo- <ppinedo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 10:19:12 by ppinedo-          #+#    #+#             */
/*   Updated: 2024/01/26 12:20:51 by ppinedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_isallnum(char* array)
{
	int i;

	i = 0;
	while (array[i] != '\0')
	{
		if (((array[i] >= 48 && array[i] <= 57) && (array[i + 1] != '-' && array[i + 1] != '+'))
			|| (array[i] == ' ') ||
			((array[i] == '-' || array[i] == '+') && (array[i + 1] >= 48 && array[i + 1] <= 57)))
			i++;
		else
			ft_exit();
	}
}

void	ft_no_dup(long *numbers)
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

void	ft_check_max_min_int(long *numbers)
{
	int i;

	i = 0;
	while (numbers[i])
	{
		if (numbers[i] >= INT_MAX || numbers[i] <= INT_MIN) 
			ft_exit();
		i++;
	}
}

int		ft_isdigit(int a)
{
	if (a >= '0' && a <= '9')
		return (1);
	return (0);
}