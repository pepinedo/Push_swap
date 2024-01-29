/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atolong_and_check.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppinedo- <ppinedo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 17:33:00 by ppinedo-          #+#    #+#             */
/*   Updated: 2024/01/29 12:26:02 by ppinedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	ft_atolong(const char *str)
{
	long	i;
	long	s;
	long	res;

	i = 0;
	s = 1;
	res = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'
		|| str[i] == '\r' || str[i] == '\f' || str[i] == '\v')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s = s * (-1);
		i++;
	}
	while (ft_isdigit(str[i]) == 1)
	{
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	return (res * s);
}

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
    i = ft_no_dup(numbers->value);
	i = ft_check_max_min_int(numbers->value);
    if (i == 0)
    {
        numbers = ft_free_numbers(numbers);
        ft_exit();
    }
	return (numbers);
}
