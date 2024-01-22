/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppinedo- <ppinedo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 16:17:51 by ppinedo-          #+#    #+#             */
/*   Updated: 2024/01/22 17:43:55 by ppinedo-         ###   ########.fr       */
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


//*** THE PARSEC, to handle the imput arguments
char	    **ft_argc2_split(char *s);
char        **ft_split(char const *s, char separator);
char	    *ft_substr(char const *s, unsigned int start, size_t len);
size_t	    ft_strlen(const char *str);
void     	ft_isallnum(char* array);
int	        ft_atoi(const char *str);
void	    ft_exit();
int	        ft_isdigit(int a);
void	    ft_checkdup(int *numbers);
char	    **ft_join_split(char **arguments);
char	    *ft_strjoin(char const *s1, char *s2);
int         *ft_atoi_and_check(char **arguments);
void	    *ft_calloc(size_t count, size_t size);


#endif
