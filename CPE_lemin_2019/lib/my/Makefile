##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## makefile
##

SRC	=	my_putstr.c \
		my_putchar.c \
		my_put_nbr.c \
		my_strlen.c \
		my_strncmp.c \
		my_getnbr.c \
		my_str_to_word_array.c \
		my_strncpy.c \
		my_strcpy.c \
		my_str_to_directory.c \
		my_strcmp.c \
		my_strcat.c \

OBJ	=	$(SRC:.c=.o)

NAME    =       libmy.a

CC	=	ar rc

RM	=	rm -f

all:    $(NAME)

$(NAME): $(OBJ)
	gcc -c -g $(SRC)
	$(CC) $(NAME) *.o

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all













