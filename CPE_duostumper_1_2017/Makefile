##
## EPITECH PROJECT, 2017
## makefile
## File description:
##
##

SRC	= main.c \
		src/my_putstr.c \
		src/my_strcmp.c \
		src/my_strcpy.c \
		src/my_strdup.c \
		src/my_strlen.c \
		src/my_strcat.c \
		src/my_getnbr.c \
		src/my_putchar.c \
		src/my_revstr.c \

OBJ	=	$(SRC:.c=.o)

CC	=	gcc -g

NAME	=	fractals

all:		$(NAME)

$(NAME):	$(OBJ)
		$(CC) $(SRC) -o $(NAME)
clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)
		rm -f *~
		rm -f src/*~
		rm -f include/*~

re:		fclean all

.PHONY :	all clean fclean re
