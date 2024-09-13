NAME	= DivideAndRule

SRC		= main.cpp Bank.cpp Account.cpp
OBJ		= $(SRC:.cpp=.o)

CPP		=	c++
CPPFLAGS	= -g -Wall -Wextra -Werror -std=c++98


%.o : %.cpp
	@$(CPP) $(CPPFLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	@$(CPP) $(CPPFLAGS) $(OBJ) -o $(NAME)

all : $(NAME)

clean :
	@rm -rf $(OBJ)

fclean : clean
	@rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re