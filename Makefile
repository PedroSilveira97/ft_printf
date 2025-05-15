NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC_DIR = .
SRC = $(wildcard $(SRC_DIR)/Sources/*.c)
OBJ_DIR = obj

OBJ = $(SRC:.c=.o)

LIBFT_DIR = libft
LIBFT_A = $(LIBFT_DIR)/libft.a

all: $(NAME)

$(NAME): $(OBJ) $(LIBFT_A)
	cp $(LIBFT_A) temp_libft.a
	ar x temp_libft.a
	ar rcs $(NAME) $(OBJ) *.o
	ranlib $(NAME)
	rm -f temp_libft.a *.o

$(LIBFT_A):
	$(MAKE) -C $(LIBFT_DIR)

clean:
	rm -rf $(OBJ)
	$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	rm -f $(NAME)
	$(MAKE) -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re

