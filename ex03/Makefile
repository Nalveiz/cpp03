NAME = DiamondTrap

CXXFLAGS = -Wall -Wextra -Werror -std=c++98  -Wshadow

SRCS = main.cpp ClapTrap.cpp DiamondTrap.cpp ScavTrap.cpp FragTrap.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME):$(SRCS)
	@echo "\033[1;106mC O M P İ L İ N G . . ."
	@c++ $(CXXFLAGS) $(SRCS) -o $(NAME)


clean:
	@echo "\033[1;101mC L E A N  O B J E C T . . ."
	@rm -f $(OBJS)

fclean: clean
	@echo "\033[1;101mC L E A N  N A M E . . ."
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
