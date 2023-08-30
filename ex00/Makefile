CC = c++
SRCS= main.cpp ClapTrap.cpp
FLAGS= -Wall -Wextra -Werror -std=c++98
NAME= program

all:$(NAME)

$(NAME): $(SRCS)
	$(CC) $(FLAGS) $^ -o $@

clean:
	rm -rf $(NAME)

re: clean all

.PHONY: all re clean