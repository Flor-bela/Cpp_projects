NAME = megaphone

SOURCES = megaphone.cpp\


OBJECTS = $(SOURCES:.c=.o)

CC = c++

C++FLAGS = -Wall -Werror -Wextra -std=c++98

%.o: %.c
	$(CC) $(C++FLAGS) -c $< -o $@

$(NAME): $(OBJECTS)
		$(CC) $(C++FLAGS) -o $@ $(OBJECTS)

all: $(NAME)

clean:
		rm -f $(OBJECTS)

fclean: clean
		rm -f $(NAME)

re: fclean all


.PHONY: all clean fclean re