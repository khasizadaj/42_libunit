###############################################################################
######                            PROPERTIES                             ######
###############################################################################

CC			= cc
AR			= ar -rcs
RM			= rm -rf
NAME		= libunit.a
CFLAGS		= -Wall -Wextra -Werror -MP -MD

TESTER		= routine
SRCS_DIR	= src
TEST_DIR	= tests

SRCS		= \
	${SRCS_DIR}/testlist_helper.c

OBJS_DIR	= ${SRCS_DIR}/objs
OBJS		= $(SRCS:${SRCS_DIR}/%.c=${OBJS_DIR}/%.o)
DEPS		= $(SRCS:${SRCS_DIR}/%.c=${OBJS_DIR}/%.d)

###############################################################################
######                             TESTS                                 ######
###############################################################################

T_ISINT_DIR	= ${TEST_DIR}/ft_isint

T_SRCS	= \
	${T_ISINT_DIR}/00_launcher.c \
	${T_ISINT_DIR}/01_test_all_chars_are_digits.c \
	${T_ISINT_DIR}/02_test_one_char_are_letter.c \
	main.c

T_OBJS	= $(T_SRCS:.c=.o)
T_DEPS	= $(T_SRCS:.c=.d)

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
	$(MAKE) -C $(LIBFT_DIR) --no-print-directory
	cp $(LIBFT) $(NAME)
	$(AR) $(NAME) $(OBJS)

${OBJS_DIR}/%.o: ${SRCS_DIR}/%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

test: $(T_OBJS) $(NAME)
	$(CC) -o $(TESTER) ${T_OBJS} $(NAME)
	@clear; ./$(TESTER)

clean:
	$(MAKE) clean -C $(LIBFT_DIR) --no-print-directory
	$(RM) $(OBJS_DIR) $(T_DEPS) $(T_OBJS)

fclean:
	$(MAKE) fclean -C $(LIBFT_DIR) --no-print-directory
	$(RM) $(OBJS_DIR) $(T_DEPS) $(T_OBJS) $(NAME) $(TESTER)

re: fclean all

.PHONY: all clean fclean re test

-include $(DEPS) $(T_DEPS)
