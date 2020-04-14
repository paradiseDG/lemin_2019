
##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

SRC	=	main.c\

OBJ	=	$(SRC:.c=.o)

NAME	=	mysh

CC	=	gcc

RM 	= 	rm -f

CFLAGS	=	-W -Wall -Wextra -g -I ./include

MAKE	=	make

CFLAGS2	=	-C

all:	$(MAKEFILE) $(NAME)

$(NAME): $(OBJ)
	$(MAKE) $(CFLAGS2) lib/my
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ) -L./lib/my/ -lmy

clean:
	make clean -C lib/my
	$(RM) $(OBJ)

fclean: clean
	make fclean -C lib/my
	$(RM) $(NAME)

re: fclean all
