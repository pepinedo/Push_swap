/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorvarea <jorvarea@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 16:17:51 by ppinedo-          #+#    #+#             */
/*   Updated: 2024/01/25 15:50:49 by jorvarea         ###   ########.fr       */
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
    long                value;
    struct s_stack_node *next;
}       t_stack_node;

typedef struct s_numbers
{
    long        *value;
    int         len;
}       t_numbers;

//*** THE PARSEC, to handle the imput arguments
char	        **ft_argc2_split(char *s);
char            **ft_split(char const *s, char separator);
char    	    *ft_substr(char const *s, unsigned int start, size_t len);
size_t  	    ft_strlen(const char *str);
void      	    ft_isallnum(char* array);
long    	    ft_atolong(const char *str);
void    	    ft_exit();
int	            ft_isdigit(int a);
int	            ft_atoi(const char *str);
void	        ft_checkdup(int *numbers);
char    	    **ft_join_split(char **arguments);
char    	    *ft_strjoin(char const *s1, char *s2);
long    		*ft_check_dup_and_max_min(long *numbers);
void    	    *ft_calloc(size_t count, size_t size);
t_numbers       *ft_atolong_and_check(char **arguments, t_numbers *numbers);

//*** Lists functions in the parsec
t_stack_node    *ft_put_in_the_stack(t_stack_node *a, t_numbers *numbers);
t_stack_node	*ft_lstnew(long number);
void            ft_lstnewnode(t_stack_node *a, long number);

//*** Commands functionds
void            sa(t_stack_node **a);
void            sb(t_stack_node **b);
void            ss(t_stack_node **a, t_stack_node **b);
void	        pa(t_stack_node **a, t_stack_node **b);
void	        pb(t_stack_node **b, t_stack_node **a);
void	        ra(t_stack_node **a);
void	        rb(t_stack_node **b);
void	        rr(t_stack_node **a, t_stack_node **b);
void	        rra(t_stack_node **a);
void	        rrb(t_stack_node **b);
void	        rrr(t_stack_node **a, t_stack_node **b);

#endif
