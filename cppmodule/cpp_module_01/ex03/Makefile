SRCS = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
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