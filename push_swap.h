/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppinedo- <ppinedo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 16:17:51 by ppinedo-          #+#    #+#             */
/*   Updated: 2024/01/11 16:56:29 by ppinedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <limits.h>
# include <stdbool.h>
# include <unistd.h>
# include <stdio.h>

typedef struct s_stack_node
{
    int                 value;
    int                 current_position;
    int                 final_index;
    int                 push_price;
    bool                above_median;
    bool                cheapets;
    struct s_stack_node *target_node;
    struct s_stack_node *next;
    struct s_stack_node *prev;
}       t_stack_node;

//*** to handle the imput if we recive 2 arguments
char        **ft_split(char const *s, char separator);
char	    *ft_substr(char const *s, unsigned int start, size_t len);
size_t	    ft_strlen(const char *str);

#endif
