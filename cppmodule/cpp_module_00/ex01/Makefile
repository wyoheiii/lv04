SRCS = Phone_book.cpp Contact.cpp main.cpp
OBJS =$(SRCS:.cpp=.o)
CXX	= clang++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98 -I. #-g -fsanitize=address
RM	= rm -f
NAME	= phone_book

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean $(NAME)

.PHONY:		all clean fclean re 