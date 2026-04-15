# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pecavalc <pecavalc@student.42berlin.de>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/14 10:29:12 by pecavalc          #+#    #+#              #
#    Updated: 2026/04/15 02:35:49 by pecavalc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME:= replace
SRC:= main.cpp
OBJ:= $(SRC:.cpp=.o)

CXX:= c++
CXXFLAGS:= -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(CXXFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)
	@rm -f $(TEST_OBJ)

fclean: clean
	@rm -f $(NAME)
	@rm -f $(TEST_NAME)

re: fclean all

.PHONY: all clean fclean re


# **************************************************************************** #
#                              UNIT TEST                                      #
# **************************************************************************** #

TEST_NAME:= test_replace
TEST_SRC:= test.cpp
TEST_OBJ:= test.o

test: $(NAME)
	$(CXX) $(CXXFLAGS) $(TEST_SRC) -o $(TEST_NAME)
	@make clean --no-print-directory
	./test_replace