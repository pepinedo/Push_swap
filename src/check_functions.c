/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_functions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppinedo- <ppinedo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 10:19:12 by ppinedo-          #+#    #+#             */
/*   Updated: 2024/02/05 12:40:39 by ppinedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_checks_dup_int(long*	array, int len)
{
	int i;

	i = ft_no_dup(array, len);
	if (i == 0)
		return (0);
	i = ft_check_max_min_int(array);
	if (i == 0)
		return (0);
	return (1);
}	

int	ft_isallnum(char* array)
{
	int i;

	i = 0;
	if (((array[i] == '+' || array[i] == '-') && (array[i + 1] >= 48 && array[i + 1] <= 57))|| array[i] == ' ' || (array[i] >= 48 && array[i] <= 57))
		i++;
	else
		return (0);
	while (array[i] != '\0')
	{
		if (((array[i] >= 48 && array[i] <= 57)) //si es numero
			|| (array[i] == ' ') || //si es espacio
			((array[i] == '-' || array[i] == '+') && (array[i + 1] >= 48 && array[i + 1] <= 57) && array[i - 1] == ' ')) //si es un signo && la siguiente es un numero && el anterior es un espacio
			i++;
		else
			return (0);
	}
	return (1);
}

int	ft_no_dup(long *numbers, int len)
{
	int i;
	int j;

	i = 0;
	j = 1;
	while (i < len)
	{
		while (j < len)
		{
			if (numbers[i] == numbers[j])
				return (0);
			else
				j++;
		}
		i++;
		j = i + 1;
	}
	return (1);
}

int	ft_check_max_min_int(long *numbers)
{
	int i;

	i = 0;
	while (numbers[i])
	{
		if (numbers[i] > INT_MAX || numbers[i] < INT_MIN) 
			return (0);
		i++;
	}
	return (1);
}

int		ft_isdigit(int a)
{
	if (a >= '0' && a <= '9')
		return (1);
	return (0);
}