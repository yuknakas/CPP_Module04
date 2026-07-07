# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/31 18:19:50 by yuknakas          #+#    #+#              #
#    Updated: 2026/07/07 19:24:29 by yuknakas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	animals
CPP		=	c++ -Wall -Wextra -Werror -std=c++98 -pedantic

SRCS	=	srcs/Animal.cpp srcs/Cat.cpp srcs/Dog.cpp srcs/WrongAnimal.cpp \
			srcs/WrongCat.cpp srcs/main.cpp
OBJS	=	$(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CPP) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CPP) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
