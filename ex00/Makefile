# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sbadr <sbadr@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/31 01:13:29 by sbadr             #+#    #+#              #
#    Updated: 2023/09/02 11:24:04 by sbadr            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
SRCS= main.cpp ClapTrap.cpp
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