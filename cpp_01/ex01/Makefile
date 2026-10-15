NAME = horde

SRC = \
		zombieHorde.cpp\
		Zombie.cpp\
		main.cpp\

OBJS_DIR = objs

OBJS = $(SRC:%.cpp=$(OBJS_DIR)/%.o)

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(OBJS_DIR)/%.o: %.cpp Zombie.hpp
		@mkdir -p $(dir $@)
		$(CXX) $(CXXFLAGS) -c $< -o $@

$(NAME): $(OBJS)
		$(CXX) $(CXXFLAGS) -o $@ $(OBJS)

clean:
		rm -rf $(OBJS_DIR)

fclean: clean
		rm -f $(NAME)

re: fclean all


.PHONY: all clean fclean re
