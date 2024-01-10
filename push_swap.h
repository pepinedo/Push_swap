#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <limits.h>
# include <stdbool.h>
# include <unistd.h>

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
char        **ft_split(char *str, char separator);

