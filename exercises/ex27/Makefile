NAME		= ft_display_file

SRC		= display_file.c
OBJ		= display_file.o

CC		= gcc
CFLAGS		= -Wall -Wextra -Werror
RM		= rm -f

all:		$(NAME)

$(NAME):	$(OBJ)
		${CC} ${CFLAGS} ${OBJ} -o ${NAME}

clean:
		$(RM) $(OBJ)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all

.PHONY:		all clean fclean re
