# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sbadr <sbadr@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/31 01:12:50 by sbadr             #+#    #+#              #
#    Updated: 2023/09/02 11:24:25 by sbadr            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
SRCS= main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp
OBJS= $(SRCS:%.cpp=%.o)
FLAGS= -Wall -Wextra -Werror -std=c++98
NAME= program
HEADER = ClapTrap.hpp

all:$(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $^ -o $@

%.o:%.cpp $(HEADER)
	c++ $(Flags) -c $< -o $@ 

clean:
	rm -rf $(OBJS)
	
fclean:
	rm -rf $(OBJS) $(NAME)

re: fclean all

.PHONY: all re fclean clean