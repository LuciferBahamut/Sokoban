##
## EPITECH PROJECT, 2019
## makefile
## File description:
## my_printf
##

NAME	=	my_sokoban

SRC	=	src/main.c \
		src/error_handling.c \
		src/displayhelp.c \
		src/my_putstr.c \
		src/my_putchar.c \
		src/sokoban.c \
		src/my_strlen.c \
		src/size.c \
		src/gest_file.c \
		src/my_split.c

CC	=	gcc

DEFLAGS	=	-W -Wextra -Wall -g3

CPPFLAGS	=	-lncurses -I./include/

CFFLAGS	=	tests/unit_tests.c -I./include --coverage -lcriterion

OBJ	=	$(SRC:.c=.o)

all	:	$(OBJ)
		$(CC) $(DEFLAGS) -o $(NAME) $(OBJ) $(CPPFLAGS)

TU	:
		$(CC) -o unit_tests lib/my/*.c $(CFFLAGS)

clean	:
		rm -f $(OBJ)

fclean	:	clean
		rm -f $(NAME)
		rm -f *#
		rm -f *~
		rm -f *.gcda
		rm -f *.gcno

re	:	fclean all

.PHONY	:	all TU clean fclean re
