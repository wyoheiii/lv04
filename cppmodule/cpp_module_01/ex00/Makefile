SRCS = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp 
OBJS =$(SRCS:.cpp=.o)
CXX	= clang++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98 -I.
RM	= rm -f
NAME	= ZOMBIEEEEEEEEEEEEEEEEEEEEEEEEE

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean $(NAME)

.PHONY:		all clean fclean re 