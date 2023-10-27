NAME = Braiiiiiinnnzzz

# Compiler
CC		= c++
CFLAGS	= -Werror -Wextra -Wall -std=c++98 -g3

SRC			=	Zombie.cpp \
				newZombie.cpp \
				randomChump.cpp	\
				main.cpp

OBJ_PATH	= ./objects/
OBJ			= $(SRC:.cpp=.o)
OBJS		= $(addprefix $(OBJ_PATH), $(OBJ))

# Build rule
all: $(OBJ_PATH) $(NAME)

# Object-building rules
$(OBJ_PATH):
	mkdir -p $(OBJ_PATH)

$(OBJ_PATH)%.o: $(SRC_PATH)%.cpp
	$(CC) $(CFLAGS) -c $< -o $@ $(INC)

# Program-building rule
$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@ $(INC)

# Cleaning rules
clean:
	rm -rf $(OBJ_PATH)

fclean: clean
	rm -f $(NAME)

# Remake
re: fclean all

.PHONY: all re clean fclean
