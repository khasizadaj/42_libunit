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

SRCS		= \
	${SRCS_DIR}/testlist_helper.c \
	${SRCS_DIR}/executor.c

OBJS_DIR	= ${SRCS_DIR}/objs
OBJS		= $(SRCS:${SRCS_DIR}/%.c=${OBJS_DIR}/%.o)
DEPS		= $(SRCS:${SRCS_DIR}/%.c=${OBJS_DIR}/%.d)

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

clean:
	$(MAKE) clean -C $(LIBFT_DIR)
	$(RM) $(OBJS_DIR)

fclean:
	$(MAKE) fclean -C $(LIBFT_DIR)
	$(RM) $(OBJS_DIR) $(NAME)

re: fclean all

.PHONY: all clean fclean re test

-include $(DEPS) $(T_DEPS) $(D_DEPS)
