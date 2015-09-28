NAME = ft_minishell1

SRC = ft_sh1.c exec_command.c print_env.c unset_env.c \
	set_env.c env_cpy.c get_path.c get_pwd.c cd.c free_exit.c main.c parse_line.c

OBJ = $(SRC:.c=.o) 

SRH = ft_sh1.h 

all: $(NAME)

$(NAME):
	@(cd libft && $(MAKE))
	gcc -Wall -Wextra -Werror -I libft/includes/ -c $(SRC)
	gcc -o $(NAME) $(OBJ) -L libft/ -lft

clean:
	@(cd libft && $(MAKE) $@)
	/bin/rm -f $(OBJ)

fclean: clean
	@(cd libft && $(MAKE) $@)
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: all re clean fclean
