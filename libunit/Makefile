###############################################################################
######                            PROPERTIES                             ######
###############################################################################

CC			= cc
AR			= ar -rcs
RM			= rm -rf
NAME		= libunit.a
MAKE		+= --no-print-directory
CFLAGS		= -Wall -Wextra -Werror -MP -MD

###############################################################################
######                              MAIN                                 ######
###############################################################################

SRCS_DIR	= src
TEST_DIR	= real-tests

SRCS		= \
	${SRCS_DIR}/testlist_helper.c \
	${SRCS_DIR}/executor.c

OBJS_DIR	= ${SRCS_DIR}/objs
OBJS		= $(SRCS:${SRCS_DIR}/%.c=${OBJS_DIR}/%.o)
DEPS		= $(SRCS:${SRCS_DIR}/%.c=${OBJS_DIR}/%.d)

###############################################################################
######                             TESTS                                 ######
###############################################################################

TESTER		= routine
T_ISINT_DIR	= ${TEST_DIR}/ft_isint
T_ATOI_DIR	= ${TEST_DIR}/ft_atoi
T_ITOA_DIR	= ${TEST_DIR}/ft_itoa

T_SRCS	= \
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
	main.c

T_OBJS	= $(T_SRCS:.c=.o)
T_DEPS	= $(T_SRCS:.c=.d)

###############################################################################
######                             DUMMY                                 ######
###############################################################################

D_NAME	= dummy

D_DIR	= dummy-tests

D_SRCS	= \
	${D_DIR}/00_launcher.c \
	${D_DIR}/01_OK_test.c \
	${D_DIR}/02_KO_test.c \
	${D_DIR}/03_BUSE_test.c \
	${D_DIR}/04_SEGV_test.c \
	${D_DIR}/main.c

D_OBJS	= $(D_SRCS:.c=.o)
D_DEPS	= $(D_SRCS:.c=.d)

###############################################################################
######                               LIBFT                               ######
###############################################################################

LIBFT_DIR	= ${SRCS_DIR}/libft
LIBFT		= ${LIBFT_DIR}/libft.a

###############################################################################
######                               RULES                               ######
###############################################################################

all: $(NAME)

$(NAME): $(OBJS)
	$(MAKE) -C $(LIBFT_DIR)
	cp $(LIBFT) $(NAME)
	$(AR) $(NAME) $(OBJS)

${OBJS_DIR}/%.o: ${SRCS_DIR}/%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

test: $(TESTER)
	@./$(TESTER)

$(TESTER): $(T_OBJS) $(NAME)
	$(CC) -o $@ ${T_OBJS} $(NAME)

dummy-test: $(D_NAME)
	@./$(D_NAME)

$(D_NAME): $(D_OBJS) $(NAME)
	$(CC) -o $@ ${D_OBJS} $(NAME)

clean:
	$(MAKE) clean -C $(LIBFT_DIR)
	$(RM) $(OBJS_DIR) $(T_DEPS) $(T_OBJS) $(D_DEPS) $(D_OBJS)

fclean:
	$(MAKE) fclean -C $(LIBFT_DIR)
	$(RM) $(OBJS_DIR) $(T_DEPS) $(T_OBJS) $(D_DEPS) $(D_OBJS) $(NAME) $(TESTER) $(D_NAME)

re: fclean all

.PHONY: all clean fclean re test

-include $(DEPS) $(T_DEPS) $(D_DEPS)
