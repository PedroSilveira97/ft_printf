NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC_DIR = .
SRC =	$(SRC_DIR)/Sources/ft_print_char.c \
		$(SRC_DIR)/Sources/ft_print_decimal.c \
		$(SRC_DIR)/Sources/ft_print_hex.c \
		$(SRC_DIR)/Sources/ft_print_nbr.c \
		$(SRC_DIR)/Sources/ft_print_percent.c \
		$(SRC_DIR)/Sources/ft_print_ptr.c \
		$(SRC_DIR)/Sources/ft_print_str.c \
		$(SRC_DIR)/Sources/ft_print_unsigned.c \
		$(SRC_DIR)/Sources/ft_printf.c \

OBJ = $(SRC:.c=.o)

LIBFT_DIR = libft
LIBFT_A = $(LIBFT_DIR)/libft.a

all: $(LIBFT_A) $(NAME)

$(LIBFT_A):
	$(MAKE) -C $(LIBFT_DIR)

$(NAME): $(OBJ) $(LIBFT_A)
	cp $(LIBFT_A) $(NAME)
	ar rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)
	$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	rm -f $(NAME)
	$(MAKE) -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re

