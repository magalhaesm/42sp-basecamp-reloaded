NAME		= ft_display_file
SRC_DIR		= srcs
OBJ_DIR		= objs

INCLUDE		= -I includes

FILES		= ft_display_file.c ft_putstr_fd.c main.c errors.c

SRCS		= $(addprefix $(SRC_DIR)/, $(FILES))
OBJS		= $(subst $(SRC_DIR), $(OBJ_DIR), $(SRCS:.c=.o))

CC		= gcc
CFLAGS		= -Wall -Wextra -Werror
RM		= rm -f

$(OBJ_DIR)/%.o:	$(SRC_DIR)/%.c
		@mkdir -p $(OBJ_DIR)
		$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

all:		$(NAME)

$(NAME):	$(OBJS)
		${CC} ${CFLAGS} ${OBJS} -o ${NAME}

clean:
		$(RM) $(OBJS)
		$(RM) -r $(OBJ_DIR)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all

.PHONY:		all clean fclean re
