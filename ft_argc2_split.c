/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_argc2_split.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppinedo- <ppinedo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 16:30:51 by ppinedo-          #+#    #+#             */
/*   Updated: 2024/01/29 11:47:32 by ppinedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**ft_argc2_split(char *s)
{
	char	**arguments;
	
    if (ft_isallnum(s) == 0)
	{
		free(s);
		ft_exit();
	}
    arguments = ft_split(s, ' ');
	if (arguments == NULL)
		return (free(arguments), NULL);
	return (arguments);
}    