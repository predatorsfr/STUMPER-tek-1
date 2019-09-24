##
## EPITECH PROJECT, 2018
## stumper
## File description:
## Makefile generator
##

SHELL	=	/bin/sh

NAME	=	connect4

SRC	=	src/is_number.c		\
		src/parameters.c	\
		src/build_tab.c		\
		src/game.c		\
		src/victory.c

CPPFLAGS	+=	-Wall -Wextra

CPPFLAGS	+=	-I./include											\

SRC_UNIT=	$(SRC)

SRC	+=	src/main.c

OBJ	=	$(SRC:.c=.o)


CFLAGS	=	-Wall -Wextra

CC	=	gcc
RM	=	rm -rf

all:		$(NAME)

%.o:	%.c
		@echo -e "[\e[34mstumper\e[39m]\t : Compiling \e[92m$<\e[39m"
		@$(CC) -c $(CFLAGS) $(CPPFLAGS) -o $@ $<

$(NAME):	$(OBJ)
		@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
		@echo -e "[\e[36mstumper\e[39m]\t : Compiled $(NAME)"

clean:
		$(RM) $(OBJ)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all

valgrind:
		$(CC) -Wall -Wextra $(CPPFLAGS) $(SRC) -o $(NAME) -g3

.PHONY:		clean fclean re valgrind
