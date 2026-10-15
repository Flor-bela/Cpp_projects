NAME = a.out

SRCS = \
		Fixed.cpp\
		main.cpp

OBJS_DIR = objs

OBJS=$(SRCS:%.cpp=$(OBJS_DIR)/%.o)

CXX = c++

CXXFLAGS = -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(OBJS_DIR)/%.o: %.cpp Fixed.hpp
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