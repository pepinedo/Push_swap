#Variables

NAME = push_swap
B_NAME = checker
INCLUDE = include
SRC_DIR = src/
B_SRC_DIR = src/bonus/
OBJ_DIR = obj/
CC = gcc
CFLAGS = -Wall -Werror -Wextra
AR = ar rcs

# Colors

DEF_COLOR = \033[0;39m
GRAY = \033[0;90m
RED = \033[0;91m
GREEN = \033[0;92m
YELLOW = \033[0;93m
BLUE = \033[0;94m
MAGENTA = \033[0;95m
CYAN = \033[0;96m
WHITE = \033[0;97m

#Sources
	
SRC_FILES = check_functions \
			free_functions \
			ft_calloc \
			ft_init_nodes_a \
			ft_move_to_a \
			ft_move_to_b \
			ft_split \
			ft_turk_algorithm \
			list_functions \
			main \
			parsec \
			push_commands \
			reverse_rotate_commands \
			rotate_commands \
			sort_functions \
			str_utils \
			swap_commands \

B_SRC_FILES = 

SRC = $(addprefix $(SRC_DIR), $(addsuffix .c, $(SRC_FILES)))
B_SRC = $(addprefix $(B_SRC_DIR), $(addsuffix _bonus.c, $(B_SRC_FILES)))
OBJ = $(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_FILES)))
B_OBJ = $(addprefix $(OBJ_DIR), $(addsuffix _bonus.o, $(B_SRC_FILES)))
OBJF = .cache_exists

###

all:		$(NAME)

$(NAME):	$(OBJ)
			@$(CC) -I./$(INCLUDE) $(CFLAGS) $(OBJ) -o $(NAME)
			@echo "$(GREEN)✅$(NAME) COMPILED!✅$(DEF_COLOR)"

$(OBJ_DIR)%.o: $(SRC_DIR)%.c | $(OBJF)
			@echo "$(YELLOW)Compiling: $< $(DEF_COLOR)"
			@$(CC) -I./$(INCLUDE) $(CFLAGS) -c $< -o $@

$(OBJ_DIR)%.o: $(B_SRC_DIR)%.c | $(OBJF)
			@echo "$(YELLOW)Compiling: $< $(DEF_COLOR)"
			@$(CC) -I./$(INCLUDE) $(CFLAGS) -c $< -o $@

$(OBJF):
			@mkdir -p $(OBJ_DIR)

clean:
			@rm -rf $(OBJ_DIR)
			@echo "$(BLUE)🧼$(NAME) object files cleaned!🧼$(DEF_COLOR)"

fclean:		
			@rm -rf $(OBJ_DIR)
			@rm -f $(NAME)
			@rm -f $(B_NAME)
			@echo "$(BLUE)🧼$(NAME) executable cleaned!🧼$(DEF_COLOR)"

re:			fclean all
			@echo "$(MAGENTA)📦$(NAME) recompiled!📦$(DEF_COLOR)"

norm:
			@norminette $(SRC) $(B_SRC) $(INCLUDE) $(LIBFT)
			@echo "$(GREEN) ✅NORMINETTE OK!✅$(DEF_COLOR)"

bonus: $(B_OBJ)
			@make -C $(LIBFT)
			@$(CC) $(CFLAGS) $(B_OBJ) -L$(LIBFT) -lft -o $(B_NAME)
			@echo "$(MAGENTA)$(B_NAME) ✅compiled!✅$(DEF_COLOR)"

.PHONY: all clean fclean re norm bonus