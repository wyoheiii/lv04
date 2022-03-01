SRCS = main.cpp Fixed.cpp
OBJS = $(SRCS:.cpp=.o)
CXX	= clang++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98#-g fsanitize=address
RM = rm -f
NAME = karen


all:	$(NAME)

$(NAME):	$(OBJS)
			$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)


clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean $(NAME)

.PHONY:		all clean fclean re