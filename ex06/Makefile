# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pecavalc <pecavalc@student.42berlin.de>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/15 02:27:28 by pecavalc          #+#    #+#              #
#    Updated: 2026/04/15 21:04:02 by pecavalc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME:= harlFilter
SRC:= main.cpp Harl.cpp
OBJ:= $(SRC:.cpp=.o)
DEP:= $(OBJ:.o=.d)

CXX:= c++
CXXFLAGS:= -Wall -Wextra -Werror -std=c++98 -MMD -MP

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(CXXFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)
	@rm -f $(DEP)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

-include $(DEP)