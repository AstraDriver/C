
NAME = ft_cat
LIB := libft.a
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
			ft_strstr.c \
			ft_display_file.c \
			ft_write_files.c \
			main.c
OBJ_FILES = $(SRC_FILES:.c=.o)
SRCS = $(addprefix $(SRC_DIR), $(SRC_FILES))
OBJS = $(addprefix $(SRC_DIR), $(OBJ_FILES))
HEADER := -I includes/
LIBC := ar rc
LIBR := ranlib
RM := rm -f

all: obj $(LIB) $(NAME)

obj: $(SRCS)

$(SRC_DIR)%.o: $(SRC_DIR)%.c
	$(CC) $(CFLAGS) $< -o $@ $(HEADER)

$(LIB): $(OBJS)
	$(LIBC) $(LIB) $(OBJS)
	$(LIBR) $(LIB)

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(LIB) $(NAME)

re: fclean all

.PHONY: all clean fclean re








