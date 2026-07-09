# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/06/10 10:49:07 by yuknakas          #+#    #+#              #
#    Updated: 2026/07/09 09:41:41 by yuknakas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	materias
CPP		=	c++ -Wall -Wextra -Werror -std=c++98 -pedantic

SRCS	=	srcs/AMateria.cpp srcs/Character.cpp srcs/Cure.cpp srcs/Ice.cpp \
			srcs/MateriaSource.cpp srcs/main.cpp
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