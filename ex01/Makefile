NAME = phonebook

SOURCES = \
		PhoneBook.cpp\
		Contact.cpp\
		get_input.cpp\
		search_utils.cpp\
		main.cpp


OBJECTS = $(SOURCES:.cpp=.o)

CXX = c++

CXXFLAGS = -Wall -Werror -Wextra -std=c++98
 
all: $(NAME)

%.o: %.cpp utils.hpp PhoneBook.hpp Contact.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(NAME): $(OBJECTS)
		$(CXX) $(CXXFLAGS) -o $@ $(OBJECTS)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re