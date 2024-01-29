/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_join_split.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppinedo- <ppinedo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 16:36:40 by ppinedo-          #+#    #+#             */
/*   Updated: 2024/01/29 11:47:14 by ppinedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**ft_join_split(char **arguments)
{
	char*	temp;
	int		i;
	
	i = 1;
	temp = arguments[i];
	while (arguments[i + 1])
	{
		temp = ft_strjoin(temp, " ");
		temp = ft_strjoin(temp, arguments[++i]);
	}
	if (ft_isallnum(temp) == 0)
	{
		free(temp);
		ft_exit();
	}
	arguments = ft_split(temp, ' ');
	if (arguments == NULL)
		return (free(arguments), NULL);
	return (arguments);
}
