NAME = phonebook

SOURCES = \
		PhoneBook.cpp\
		Contact.cpp\
		get_input.cpp\
		search_utils.cpp\
		main.cpp

OBJECTS_DIR = obj

OBJECTS = $(SOURCES:%.cpp=$(OBJECTS_DIR)/%.o)

CXX = c++

CXXFLAGS = -Wall -Werror -Wextra -std=c++98
 
all: $(NAME)

$(OBJECTS_DIR)/%.o: %.cpp PhoneBook.hpp Contact.hpp utils.hpp
		@mkdir -p $(dir $@)
		$(CXX) $(CXXFLAGS) -c $< -o $@

$(NAME): $(OBJECTS)
		$(CXX) $(CXXFLAGS) -o $@ $(OBJECTS)

clean:
	rm -rf $(OBJECTS_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re