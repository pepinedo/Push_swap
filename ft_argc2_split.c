/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_argc2_split.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppinedo- <ppinedo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 16:30:51 by ppinedo-          #+#    #+#             */
/*   Updated: 2024/01/26 13:05:31 by ppinedo-         ###   ########.fr       */
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
	return (arguments);
}    