# include "push_swap.h"

int main(int argc, char **argv)
{
    t_stack_node    *a;
    t_stack_node    *b;

    a = NULL;
    b = NULL;
    if (1 == argc || (2 == argc && !argv[1][0]))
        return (1);
    else if (2 == argc)
        argv = ft_split(argv[1], ' ');
    
}