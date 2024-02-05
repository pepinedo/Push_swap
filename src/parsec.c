/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsec.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppinedo- <ppinedo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 11:35:27 by ppinedo-          #+#    #+#             */
/*   Updated: 2024/02/02 13:23:33 by ppinedo-         ###   ########.fr       */
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
	i = ft_checks_dup_int(numbers->value, numbers->len);
    if (i == 0)
    {
        ft_free_numbers(numbers);
        ft_exit();
    }
	return (numbers);
}

char	**ft_argc2_split(char *s)
{
	char	**arguments;
	
    if (ft_isallnum(s) == 0)
		ft_exit();
    arguments = ft_split(s, ' ');
	if (arguments == NULL)
		return (free(arguments), NULL);
	return (arguments);
}    

char	**ft_join_split(char **arguments)
{
	char*	temp;
	char*	temp2;
	int		i;
	
	i = 0;
	temp = ft_calloc(1, 1);
	while (arguments[i + 1])
	{
		temp2 = ft_strjoin(temp, " ");
		free(temp);
		temp = ft_strjoin(temp2, arguments[++i]);
		free(temp2);
	}
	if (ft_isallnum(temp) == 0)
		ft_exit();
	arguments = ft_split(temp, ' ');
	if (arguments == NULL)
		return (free(arguments), NULL);
	free(temp);
	return (arguments);
}

t_stack_node	*ft_parsec(int argc, char **argv)
{
	t_numbers       *numbers;

	numbers = NULL;
	if ((argc == 1) || (argc == 2 && !argv[1][0]))
        ft_exit();
    else if (argc == 2)
        argv = ft_argc2_split(argv[1]);
    else if (argc > 2)
        argv = ft_join_split(argv);
    numbers = ft_atolong_and_check(argv);
	ft_free_ptrstr(argv);	
    return (ft_put_in_the_stack(numbers));
}
