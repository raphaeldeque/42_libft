SRCS	= ft_isalpha.c

OBJS	= ${SRCS:.c=.o}

NAME	= libft.a

CC		= cc
RM		= rm -f

CFLAGS	= -Wall -Werror -Wextra

${NAME}:	${OBJS}
			ar -rcs ${NAME} ${OBJS}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

bonus:

.PHONY:		all clean fclean re bonus