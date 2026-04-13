# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pecavalc <pecavalc@student.42berlin.de>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/12 00:16:04 by pecavalc          #+#    #+#              #
#    Updated: 2026/04/13 03:09:56 by pecavalc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex03

SRC = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
OBJ = main.o Weapon.o HumanA.o HumanB.o

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

valgrind: $(NAME)
	valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./$(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
