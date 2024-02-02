/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppinedo- <ppinedo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 16:17:51 by ppinedo-          #+#    #+#             */
/*   Updated: 2024/02/01 16:11:32 by ppinedo-         ###   ########.fr       */
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
    int                 index;
    int                 push_cost;
    bool                above_median;
    bool                cheapest;
    struct s_stack_node *target_node;
    struct s_stack_node *next;
}       t_stack_node;

typedef struct s_numbers
{
    long              *value;
    int               len;
}       t_numbers;

//*** THE PARSEC, to handle the imput arguments
char	        **ft_argc2_split(char *s);
char            **ft_split(char const *s, char separator);
char    	    *ft_substr(char const *s, unsigned int start, size_t len);
size_t  	    ft_strlen(const char *str);
long    	    ft_atolong(const char *str);
char    	    **ft_join_split(char **arguments);
char    	    *ft_strjoin(char const *s1, char *s2);
void    	    *ft_calloc(size_t count, size_t size);
t_numbers       *ft_atolong_and_check(char **arguments);
t_stack_node	*ft_parsec(int argc, char **argv);

//*** Checkers
int	            ft_no_dup(long *numbers);
int    	    	ft_check_max_min_int(long *numbers);
int	            ft_isdigit(int a);
int      	    ft_isallnum(char* array);
int	            ft_checks_dup_int(long*	array);

//*** Lists functions
t_stack_node    *ft_put_in_the_stack(t_numbers *numbers);
t_stack_node	*ft_lstnew(long number);
void            ft_lstnewnode(t_stack_node *a, long number);
int	            ft_lstsize(t_stack_node *lst);
t_stack_node	*ft_penultimate(t_stack_node *lst);
t_stack_node	*ft_last(t_stack_node *lst);
void	        ft_add_front(t_stack_node **lst, t_stack_node *new);

//*** Free functions
void	        ft_free_numbers(t_numbers *numbers);
void    	    ft_exit();
t_stack_node	*ft_free_stack(t_stack_node *stack);

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

//*** Algorithm functions
void	        ft_sort_argorithm(t_stack_node **a, t_stack_node **b);
bool            ft_stack_sorted(t_stack_node *a);
void	        ft_sort_three(t_stack_node **a);
t_stack_node	*ft_find_max(t_stack_node *stack);
t_stack_node	*ft_find_min(t_stack_node *stack);
void	        ft_turk_algorithm(t_stack_node **a, t_stack_node **b);
void            ft_init_nodes_a(t_stack_node *a, t_stack_node *b);
void	        ft_current_index(t_stack_node *stack);
void	        ft_set_target_a(t_stack_node *a, t_stack_node *b);
void	        ft_cost_analysis_a(t_stack_node *a, t_stack_node *b);
void	        ft_set_cheapest(t_stack_node *stack);
void	        ft_move_to_b(t_stack_node **a, t_stack_node **b);
t_stack_node	*ft_get_the_cheapest(t_stack_node *stack);
void	        ft_rotate_both(t_stack_node **a, t_stack_node **b, t_stack_node *cheapest_node);
void	        ft_rev_rotate_both(t_stack_node **a, t_stack_node **b, t_stack_node *cheapest_node);
void	        ft_move_to_a(t_stack_node **a, t_stack_node **b);
void	        ft_init_nodes_b(t_stack_node *a, t_stack_node *b);
void	        ft_prep_for_push(t_stack_node **stack, t_stack_node *top_node, char stack_name);
void	        ft_min_on_top(t_stack_node **a);

#endif
