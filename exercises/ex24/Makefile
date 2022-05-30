NAME		= libft.a

SRC_DIR		= srcs
OBJ_DIR		= objs

INCLUDE		= -I includes

FILES		= ft_putchar.c ft_putstr.c ft_swap.c \
		ft_strlen.c ft_strcmp.c

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
		ar -rcs $(NAME) $(OBJS)
		@ranlib $(NAME)

clean:
		$(RM) $(OBJS)
		$(RM) -r $(OBJ_DIR)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all

.PHONY:		all clean fclean re
