
vpath %.c srcs
vpath %.h includes
SRCS := $(wildcard *.c)
HEADERS = ft.h

OBJS = ${SRCS:.c=.o}

all: create_lib

create_lib: ${OBJS}
		gcc -o -Wall -Werror -Wextra ${OBJS}
		ar rc libft.a ${OBJS}

${OBJS}: ${SRCS}
		gcc -c -Wall -Werror -Wextra ${SRCS}

clean:
	rm -rf create_lib