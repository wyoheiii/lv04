SRCS = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp a
OBJS =$(SRCS:.cpp=.o)
CC	= clang++
CFLAGS	= -Wall -Wextra -Werror -I.
RM	= rm -f
NAME	= main

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean $(NAME)

.PHONY:		all clean fclean re 