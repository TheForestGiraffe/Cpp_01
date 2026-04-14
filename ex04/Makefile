# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pecavalc <pecavalc@student.42berlin.d      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/14 10:29:12 by pecavalc          #+#    #+#              #
#    Updated: 2026/04/14 11:55:32 by pecavalc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME:= ex04
SRC:= main.cpp
OBJ:= $(SRC:.cpp=.o)
DEP:= $(OBJ:.o=.d)

CXX:= c++
CXXFLAGS:= -Wall -Wextra -Werror -MMD -MP -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(CXXFLAGS) -c $< -o $@

-include $(DEP)

clean:
	rm -f $(DEP)
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
