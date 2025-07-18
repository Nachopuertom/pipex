NAME = pipex

SRC = pipex_utils.c pipex.c

OBJ = $(SRC:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror 

$(NAME): $(OBJ)
	cd libft && $(MAKE)
	$(CC) $(CFLAGS) $(OBJ)  -L ./libft -lft -o $(NAME)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	cd libft && $(MAKE) clean
	rm -f $(OBJ)

fclean: clean
	cd libft && $(MAKE) fclean
	rm -f $(NAME)

all: $(NAME)

re: fclean all

.PHONY: clean fclean all re
