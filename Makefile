# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: minhnguy <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/26 14:32:46 by minhnguy          #+#    #+#              #
#    Updated: 2020/01/16 12:18:59 by dtai             ###   ########.fr        #
#    Updated: 2019/08/26 19:42:23 by dtai             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = sudoku
FLAGS = -Wall -Wextra -Werror
INCLUDES = includes/
SRCS = \
srcs/main.c \
srcs/check_num.c \
srcs/print_func.c \
srcs/recursive.c
OBJECTS = \
main.o \
check_num.o \
print_func.o \
recursive.o

all: $(NAME)

$(NAME): $(OBJECTS)
	gcc $(FLAGS) $(OBJECTS) -o $(NAME) -I $(INCLUDES)

$(OBJECTS).o:
	gcc $(FLAGS) -c $(SRCS) -I $(INCLUDES)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
