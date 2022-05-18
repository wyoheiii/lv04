SRCS = main.cpp 
OBJS = $(SRCS:.cpp=.o)
CXX	= c++ 
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 #-g fsanitize=address
RM = rm -f
NAME = ex01

all:	$(NAME)

$(NAME):	$(OBJS)
			$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean $(NAME)

.PHONY:		all clean fclean re