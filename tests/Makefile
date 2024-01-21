###############################################################################
######                            PROPERTIES                             ######
###############################################################################

CC			= cc
RM			= rm -rf
MAKE		+= --no-print-directory
CFLAGS		= -Wall -Wextra -Werror

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
	main.c

D_OBJS	= $(D_SRCS:.c=.o)

###############################################################################
######                             UNITTEST                              ######
###############################################################################

UNIT_DIR	= ../framework
UNIT		= ${UNIT_DIR}/libunit.a

###############################################################################
######                               RULES                               ######
###############################################################################

all: $(D_NAME)

test: $(D_NAME)
	@./$(D_NAME)

$(D_NAME): $(D_OBJS) $(NAME)
	$(MAKE) -C $(UNIT_DIR)
	$(CC) -o $@ ${D_OBJS} $(NAME) -L $(UNIT_DIR) -lunit -L $(LIBFT_DIR) -lft

clean:
	$(MAKE) clean -C $(UNIT_DIR)
	$(RM) $(D_OBJS)

fclean:
	$(MAKE) fclean -C $(UNIT_DIR)
	$(RM) $(D_OBJS) $(D_NAME)

re: fclean all

.PHONY: all clean fclean re test
