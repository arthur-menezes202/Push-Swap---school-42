NAME = push_swap
FLAGS = -Wall -Werror -Wextra
CC = cc

#includes
INCLUDES = -I
SRCDIR = .
LIBFT = libft/libft.a
LIBFT_DIR = libft
SRCS = main.c

OBJ = $(SRCS:%.c=%.o)

all: $(LIBFT) $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) $(LIBFT) -o $(NAME)

%.o: %.c
	$(CC) $(FLAGS) $(INCLUDES). -c $< -o $@

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

clean:
	rm -f $(OBJ)
	make -C libft clean

fclean: clean
	rm -f $(NAME)
	make -C libft fclean

re: fclean all