NAME = ex00

SRCS = \
		Animal.cpp\
		Dog.cpp\
		Cat.cpp\
		main.cpp

HDRS = \
		Animal.hpp\
		Dog.hpp\
		Cat.hpp

OBJS_DIR = objs

OBJS = $(SRCS:%.cpp=$(OBJS_DIR)/%.o)

CXX = c++

CXXFLAGS = -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(OBJS_DIR)/%.o: %.cpp $(HDRS)
			@mkdir -p $(dir $@)
			$(CXX) $(CXXFLAGS) -c $< -o $@

$(NAME): $(OBJS)
		$(CXX) $(CXXFLAGS) $^ -o $@

clean:
	rm -rf $(OBJS_DIR)

fclean: clean
	rm -r $(NAME)

re: fclean all

.PHONY: all clean fclean re