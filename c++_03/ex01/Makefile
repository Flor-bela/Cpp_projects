NAME = scav

SRCS = \
		ClapTrap.cpp\
		ScavTrap.cpp\
		main.cpp

HDRS = \
		ClapTrap.hpp\
		ScavTrap.hpp

OBJS_DIR = objs

OBJS = $(SRCS:%.cpp=$(OBJS_DIR)/%.o)

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(OBJS_DIR)/%.o: %.cpp $(HDRS)
			@mkdir -p $(dir $@)
			$(CXX) $(CXXFLAGS) -c $< -o $@

$(NAME): $(OBJS)
		$(CXX) $(CXXFLAGS) $^ -o $@

clean:
	rm -rf $(OBJS_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re