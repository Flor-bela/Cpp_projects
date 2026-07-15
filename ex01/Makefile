NAME = phonebook

SOURCES = \
		PhoneBook.cpp\
		Contact.cpp\
		add_contact.cpp\
		search_contact.cpp\
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