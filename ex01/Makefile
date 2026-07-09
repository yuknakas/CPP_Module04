# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/31 18:19:50 by yuknakas          #+#    #+#              #
#    Updated: 2026/07/09 09:38:20 by yuknakas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	animals
CPP		=	c++ -Wall -Wextra -Werror -std=c++98 -pedantic

SRCS	=	srcs/Animal.cpp srcs/Cat.cpp srcs/Dog.cpp srcs/WrongAnimal.cpp \
			srcs/WrongCat.cpp srcs/main.cpp srcs/Brain.cpp
OBJS	=	$(SRCS:.cpp=.o)
DEPS	=	$(OBJS:.o=.d)

all: $(NAME)

$(NAME): $(OBJS)
	$(CPP) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CPP) -MMD -MF"$(@:%.o=%.d)" -c $< -o $@

clean:
	rm -f $(OBJS) $(DEPS)

fclean: clean
	rm -f $(NAME)

re: fclean all

-include $(DEPS)

.PHONY: all clean fclean re
