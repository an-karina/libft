NAME	= libft.a
SRCDIR	= ./
OBJDIR	= ./
SRC		= ${SRCDIR}ft_memset.c \
		  ${SRCDIR}ft_bzero.c \
		  ${SRCDIR}ft_memcpy.c \
		  ${SRCDIR}ft_memccpy.c \
		  ${SRCDIR}ft_memmove.c \
		  ${SRCDIR}ft_memchr.c \
		  ${SRCDIR}ft_memcmp.c \
		  ${SRCDIR}ft_strlen.c \
		  ${SRCDIR}ft_strlcpy.c
OBJ		= ${patsubst ${SRCDIR}%.c, ${OBJDIR}%.o, ${SRC}}
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror

${OBJDIR}%.o: ${SRCDIR}%.c
	${CC} ${CFLAGS} -c $< -o $@

${NAME}: ${OBJ}
	ar rc ${NAME} ${OBJ}
	ranlib ${NAME}

all:  ${NAME}

clean:
	rm -rf ${OBJ}

fclean: clean
	rm -rf ${NAME}

re: fclean all