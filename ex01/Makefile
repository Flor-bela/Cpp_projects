NAME = phonebook

SOURCES = \
		PhoneBook.cpp\
		Contact.cpp\
		main.cpp\

OBJECTS = $(SOURCES:.c = .o)

CC = c++

FLAGS = -Wall -Werror -Wextra -std=c++98
 
%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJECTS)
		$(CC) $(FLAGS) -o $@ $(OBJECTS)

all: $(NAME)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re