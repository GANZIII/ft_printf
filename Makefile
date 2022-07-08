SRCS = ft_printf.c\
	   ft_print_memory.c\
	   ft_putchar.c\
	   ft_puthex.c\
	   ft_putnbr_u.c\
	   ft_putnbr.c\
	   ft_putstr.c

NAME = libftprintf.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
AR = ar -rc
OBJS = ${SRCS:.c=.o}

%.o : %.c
	${CC} ${CFLAGS} -c $< -o $@

${NAME}: ${OBJS}
	${AR} $@ $?

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
