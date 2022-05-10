SRCS	=	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
			ft_isprint.c 

MAIN	=	main.c		

OBJS	= ${SRCS:.c=.o}

NAME	= libft.a

CC		= cc
RM		= rm -f

CFLAGS	= -Wall -Werror -Wextra

${NAME}:	${OBJS}
			ar -rcs ${NAME} ${OBJS}
			
.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all:		${NAME}

clean:
			${RM} ${OBJS} 

fclean:		clean
			${RM} ${NAME}

re:			fclean all

bonus:

test:		${NAME}
			${CC} ${CFLAGS} -L. -lft ${MAIN}
			./a.out
			rm a.out
#			norminette ${SRCS}

.PHONY:		all clean fclean re bonus test