##
## EPITECH PROJECT, 2018
## stumper
## File description:
## Makefile
##

SHELL	=	/bin/sh

NAME	=	cesar	

SRC	=	src/main.c	\
		src/cesar.c	\
		src/open.c	\
		src/is_number.c	\
		src/encrypt.c

CPPFLAGS	+=	-Wall -Wextra

CPPFLAGS	+=	-I./include

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-Wall -Wextra

CC	=	gcc
RM	=	rm -rf

all:		$(NAME)

%.o:	%.c
		@echo -e "[\e[34mcesar\e[39m]\t : Compiling \e[92m$<\e[39m"
		@$(CC) -c $(CFLAGS) $(CPPFLAGS) -o $@ $<

$(NAME):	$(OBJ)
		@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
		@echo -e "[\e[36mcesar\e[39m]\t : Compiled $(NAME)"

clean:
		$(RM) $(OBJ)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all

valgrind:
		$(CC) -Wall -Wextra $(CPPFLAGS) $(SRC) -o $(NAME) -g3

.PHONY:		clean fclean re valgrind
