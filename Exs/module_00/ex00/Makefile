NAME = megaphone

GCC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm
RMFLAGS = -rf

SRC_DIR = srcs

SRCS = $(wildcard $(SRC_DIR)/*.cpp)

vpath %.cpp $(SRC_DIR)


all : $(NAME)

clean :
	@$(RM) $(RMFLAGS)

fclean : clean
	@$(RM) $(RMFLAGS) $(NAME)

re : fclean all

$(NAME) :
	@$(GCC) $(CFLAGS) $(SRCS) -o $@

.PHONY: all clean fclean re
