SRCS = main.cpp File.cpp
OBJS = $(SRCS:.cpp=.o)
CXX	= clang++
CXXFLAGS = -Wall -Wextra -Werror #-g fsanitize=address
RM = rm -f
NAME = sed


all:	$(NAME)

$(NAME):	$(OBJS)
			$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)


clean:
			$(RM) $(NAME)

fclean:		clean
			$(RM) $(NAME)

re:			fclean $(NAME)

.PHONY:		all clean fclean re