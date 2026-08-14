NAME = weapon

SRCS = \
		main.cpp\
		Weapon.cpp\
		HumanA.cpp\
		HumanB.cpp

OBJS_DIR = objs

OBJS = $(SRCS:%.cpp=$(OBJS_DIR)/%.o)

HEADERS = \
		Weapon.hpp\
		HumanA.hpp\
		HumanB.hpp

CXX = c++

CXXFLAGS = -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(OBJS_DIR)/%.o: %.cpp $(HEADERS)
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