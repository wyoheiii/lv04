SRCS = megaphone.cpp
OBJS =$(SRCS:.cpp=.o)
CC	= clang++
CFLAGS	= -Wall -Wextra -Werror -I.
RM	= rm -f
NAME	= megaphone

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean $(NAME)

print:		$(NAME)
			./megaphone "shhhhh... I think the students are asleep..."
			./megaphone	Damnit " ! " "Sorry students, I thought this thing was off."
			./megaphone 

.PHONY:		all clean fclean re print