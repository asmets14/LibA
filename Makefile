NAME= liba.a

SRC= *.c

OBJ= *.o

HEAD = -I ./

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c $(SRC) $(HEAD)
	ar rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all