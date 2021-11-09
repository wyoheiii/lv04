SRCS = Account.cpp tests.cpp
OBJS =$(SRCS:.cpp=.o)
CC	= clang++
CFLAGS	= -Wall -Wextra -Werror -I.
RM	= rm -f
NAME	= Account

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean $(NAME)

.PHONY:		all clean fclean re 