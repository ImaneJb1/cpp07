CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = $(shell find . -name "*.cpp")
OBJ = $(SRCS:%.cpp=%.o)
NAME = whatever

all : $(NAME)

%.o: %.cpp
	@$(CPP) $(CPPFLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	@$(CPP) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean :
	@rm -rf $(OBJ)

fclean : clean
	@rm -rf $(NAME)
	
re : fclean all