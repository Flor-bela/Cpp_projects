NAME = a.out

SRCS = \
		AMateria.cpp\
		Character.cpp\
		Cure.cpp\
		Ice.cpp\
		MateriaSource.cpp\
		main.cpp

HDRS = \
		AMateria.hpp\
		Character.hpp\
		Cure.hpp\
		Ice.hpp\
		MateriaSource.hpp\
		ICharacter.hpp\
		IMateriaSource.hpp

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
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re