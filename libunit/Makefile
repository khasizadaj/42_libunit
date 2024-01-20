NAME = libunit.a
LIBFT = libft.a
TESTER = routine.out

SRC_DIR = src
LIBFT_DIR = src/libft
UTILS_DIR = src/utils

INCLUDES = -I include -I ${LIBFT_DIR}
CC = cc
AR = ar
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

# LIBFT files
LIBFT_FILES = $(shell find $(LIBFT_DIR) -name '*.c')
LIBFT_OBJS = $(LIBFT_FILES:.c=.o)

# UTILS files
UTILS_FILES = $(shell find $(UTILS_DIR) -name '*.c')
UTILS_OBJS = $(UTILS_FILES:.c=.o)

all: $(NAME)

# Assemble both libraries and move it to the root directory
# to use it at compile time
$(NAME): $(LIBFT_OBJS) $(UTILS_OBJS)
	$(MAKE) -C $(LIBFT_DIR) --no-print-directory
	cp $(LIBFT_DIR)/$(LIBFT) $(LIBFT)
	$(AR) rcs $(NAME) $(UTILS_OBJS)

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

test: $(NAME)
	$(CC) -o $(TESTER) tests/ft_isint/*.c main.c ${INCLUDES} -I tests/* $(NAME) $(LIBFT)

clean:
	$(MAKE) clean -C $(LIBFT_DIR) --no-print-directory
	$(RM) $(UTILS_OBJS)

fclean: clean
	$(MAKE) fclean -C $(LIBFT_DIR) --no-print-directory
	$(RM) $(NAME) $(LIBFT)

re: fclean all

.PHONY: all clean fclean re test
