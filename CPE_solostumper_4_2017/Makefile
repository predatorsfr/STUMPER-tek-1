##
## EPITECH PROJECT, 2018
## makefile
## File description:
## raphael.dubois@epitech.eu
##

SRC	=	main.c \
		src/lib.c \

OBJ	=	$(SRC:.c=.o)

CC	=	gcc

NAME	=	frenchNameFormatter

all:		$(NAME)

$(NAME):	$(OBJ)
		$(CC) $(SRC) -o $(NAME)
clean:
		rm -f $(OBJ)

fclean:	clean
		rm -f $(NAME)
		rm -f *~
		rm -f src/*~
		rm -f include/*~

re:		fclean all

.PHONY :	all clean fclean re
