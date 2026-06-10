# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/06/10 10:49:07 by yuknakas          #+#    #+#              #
#    Updated: 2026/06/10 10:52:47 by yuknakas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	materias
CPP		=	c++ -Wall -Wextra -Werror -std=c++98

SRCS	=	srcs/AMateria.cpp srcs/Character.cpp srcs/Cure.cpp srcs/Ice.cpp \
			srcs/MateriaSource.cpp srcs/main.cpp
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