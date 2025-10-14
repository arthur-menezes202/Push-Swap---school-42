NAME = push_swap
# FLAGS = -Wall -Werror -Wextra
FLAGS = -Wall -Werror -Wextra
CC = cc -g3


#includes
INCLUDES = -I
SRCDIR = .
LIBFT = libft/libft.a
LIBFT_DIR = libft
SRCS = $(SRCDIR)/./chunks.c \
        $(SRCDIR)/./count_list.c \
        $(SRCDIR)/./error.c \
        $(SRCDIR)/./find_no.c \
        $(SRCDIR)/./index_list.c \
        $(SRCDIR)/./insert_string_list.c \
        $(SRCDIR)/./join_args.c \
        $(SRCDIR)/./main.c \
        $(SRCDIR)/./move_a.c \
        $(SRCDIR)/./move_index.c \
        $(SRCDIR)/./push.c \
        $(SRCDIR)/./push_swap.c \
        $(SRCDIR)/./push_swap_utils.c \
        $(SRCDIR)/./reverse_rotate.c \
        $(SRCDIR)/./rotate.c \
        $(SRCDIR)/./sort_five.c \
        $(SRCDIR)/./sort_ten.c \
        $(SRCDIR)/./stack_manage.c \
        $(SRCDIR)/./swap.c \
        $(SRCDIR)/./turk_algorithm.c \
        $(SRCDIR)/./validation_argv.c \
        $(SRCDIR)/./validation_zero.c

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