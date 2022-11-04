NAME = libftprintf.a
CFLAGS =  -Wall -Wextra -Werror
CC = cc

SRC = ft_printf_fcns.c ft_printf_fcns_II.c ft_printf.c 

OBJ = $(SRC:.c=.o)
RM = rm -f

all: $(NAME)

$(NAME): $(OBJ)
	ar -rc $(NAME) $(OBJ)

$(OBJ): $(SRC)
	$(CC) $(CFLAGS) -c $(SRC)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

