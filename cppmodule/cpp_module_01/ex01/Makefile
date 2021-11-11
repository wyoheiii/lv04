SRCS = main.cpp Zombie.cpp ZombieHorde.cpp
OBJS =$(SRCS:.cpp=.o)
CXX	= clang++
CXXFLAGS	= -Wall -Wextra -Werror -I.
RM	= rm -f
NAME	= NOPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPP

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean $(NAME)

.PHONY:		all clean fclean re 