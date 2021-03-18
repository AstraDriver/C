

NAME := libft.a
CC := gcc
CFLAGS := -Wall -Werror -Wextra -c
SRC_DIR := ./srcs/
SRC_FILES := ft_putchar.c \
			ft_putnbr.c \
			ft_putstr.c \
			ft_strcat.c \
			ft_strcmp.c \
			ft_strcpy.c \
			ft_strdup.c \
			ft_strjoin.c \
			ft_strlen.c \
			ft_strlowcase.c \
			ft_strstr.c
OBJ_FILES = $(SRC_FILES:.c=.o)
SRCS = $(addprefix $(SRC_DIR), $(SRC_FILES))
OBJS = $(addprefix $(SRC_DIR), $(OBJ_FILES))
HEADER := -I includes/
LIBC := ar rc
LIBR := ranlib
RM := rm -f

all: obj $(NAME)

obj: $(SRCS)

$(SRC_DIR)%.o: $(SRC_DIR)%.c
	$(CC) $(CFLAGS) $< -o $@ $(HEADER)

$(NAME): $(OBJS)
	$(LIBC) $(NAME) $(OBJS)
	$(LIBR) $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re








