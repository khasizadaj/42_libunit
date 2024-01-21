###############################################################################
######                            PROPERTIES                             ######
###############################################################################

CC			= cc
RM			= rm -rf
NAME		= routine
MAKE		+= --no-print-directory
CFLAGS		= -Wall -Wextra -Werror

###############################################################################
######                             TESTS                                 ######
###############################################################################

T_ISINT_DIR		= ft_isint
T_ATOI_DIR		= ft_atoi
T_ITOA_DIR		= ft_itoa
T_SUBSTR_DIR	= ft_substr

SRCS	= \
	${T_ISINT_DIR}/00_launcher.c \
	${T_ISINT_DIR}/01_test_all_chars_are_digits.c \
	${T_ISINT_DIR}/02_test_one_char_is_letter.c \
	${T_ISINT_DIR}/03_test_one_char_is_symbol.c \
	${T_ISINT_DIR}/04_test_non_printable_chars.c \
	${T_ISINT_DIR}/05_test_empty_string.c \
	${T_ISINT_DIR}/06_test_null_input.c \
	${T_ATOI_DIR}/00_launcher.c \
	${T_ATOI_DIR}/01_test_empty_input.c \
	${T_ATOI_DIR}/02_test_null_input.c \
	${T_ATOI_DIR}/03_test_number_with_letter.c \
	${T_ATOI_DIR}/04_test_number_with_only_letters.c \
	${T_ATOI_DIR}/05_test_number_with_zeros.c \
	${T_ITOA_DIR}/00_launcher.c \
	${T_ITOA_DIR}/01_handle_zero.c \
	${T_ITOA_DIR}/02_handle_max_int.c \
	${T_ITOA_DIR}/03_handle_min_int.c \
	${T_SUBSTR_DIR}/00_launcher.c \
	${T_SUBSTR_DIR}/01_substr_null_test.c \
	${T_SUBSTR_DIR}/02_substr_valid_test.c \
	${T_SUBSTR_DIR}/03_substr_overflow_index_test.c \
	${T_SUBSTR_DIR}/04_substr_overflow_len_test.c \
	${T_SUBSTR_DIR}/05_substr_empty_string_test.c \
	main.c

OBJS	= $(SRCS:.c=.o)

###############################################################################
######                               LIBFT                               ######
###############################################################################

LIBFT_DIR	= ../libft
LIBFT		= ${LIBFT_DIR}/libft.a

###############################################################################
######                             UNITTEST                              ######
###############################################################################

UNIT_DIR	= ../framework
UNIT		= ${UNIT_DIR}/libunit.a

###############################################################################
######                               RULES                               ######
###############################################################################

all: $(NAME)

$(NAME): $(OBJS)
	$(MAKE) -C $(LIBFT_DIR)
	$(MAKE) -C $(UNIT_DIR)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) -L $(UNIT_DIR) -lunit -L $(LIBFT_DIR) -lft

test: $(NAME)
	@./$(NAME)

clean:
	$(MAKE) clean -C $(LIBFT_DIR)
	$(MAKE) clean -C $(UNIT_DIR)
	$(RM) $(OBJS)

fclean:
	$(MAKE) fclean -C $(LIBFT_DIR)
	$(MAKE) fclean -C $(UNIT_DIR)
	$(RM) $(OBJS) $(NAME)

re: fclean all

.PHONY: all clean fclean re test
