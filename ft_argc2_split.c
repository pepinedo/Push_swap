/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_argc2split.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppinedo- <ppinedo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 16:30:51 by ppinedo-          #+#    #+#             */
/*   Updated: 2024/01/22 16:43:36 by ppinedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**ft_argc2_split(char *s)
{
	char	**arguments;
    ft_isallnum(s);
    arguments = ft_split(s, ' ');
	return (arguments);
}    