NAME = violence

# Compiler
CC		= c++
CFLAGS	= -Werror -Wextra -Wall -std=c++98 -g3

HEADERS = HumanA.hpp \
			HumanB.hpp \
			Weapon.hpp

SRC			= main.cpp \
				HumanA.cpp \
				HumanB.cpp \
				Weapon.cpp

OBJ_PATH	= ./objects/
OBJ			= $(SRC:.cpp=.o)
OBJS		= $(addprefix $(OBJ_PATH), $(OBJ))

# Build rule
all: $(OBJ_PATH) $(NAME)

# Object-building rules
$(OBJ_PATH):
	mkdir -p $(OBJ_PATH)

$(OBJ_PATH)%.o: $(SRC_PATH)%.cpp Makefile $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@ $(INC)

# Program-building rule
$(NAME): $(OBJS) Makefile $(HEADERS)
	$(CC) $(CFLAGS) $(OBJS) -o $@ $(INC)

# Cleaning rules
clean:
	rm -rf $(OBJ_PATH)

fclean: clean
	rm -f $(NAME)

# Remake
re: fclean all

.PHONY: all re clean fclean
