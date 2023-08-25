# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jsantann <jsantann@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/13 16:35:03 by jsantann          #+#    #+#              #
#    Updated: 2023/08/25 17:53:23 by jsantann         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

##########################################################
#					FLAGS								#
##########################################################

NAME		:= Polymorphism
CC		:= c++
CFLAGS		:= -Wall -Wextra -Werror -std=c++98 -Iincludes
DEBUG		:= -g

##########################################################
#					PROGRAM`S SRCS						 #
##########################################################

SRCS		:= AAnimal.cpp \
		   Dog.cpp \
		   Cat.cpp \
		   Brain.cpp \
		   WrongAnimal.cpp \
		   WrongCat.cpp \
		   main.cpp

OBJS		:= $(SRCS:.c=.o)

#########################################################
#						COLORS							#
#########################################################

CLR_RMV	:= \033[0m
RED		:= \033[1;31m
GREEN	:= \033[1;32m
YELLOW	:= \033[1;33m
BLUE    := \033[1;34m
CYAN	:= \033[1;36m

########################################################
#						FUNCTIONS					   #
########################################################

all: $(NAME)

$(NAME): $(OBJS)
		@echo "$(GREEN)Compilation ${CLR_RMV}of ${YELLOW}$(NAME) ${CLR_RMV}..."
		@ ${CC} ${CFLAGS} -o $@ $^ 
		@ echo "$(GREEN)$(NAME) created ✔️"

clean:
	@ echo "$(RED)Cleaning up$(CLR_RMV)..."

fclean: clean
	@ rm -rf ${NAME}
	@ echo "$(RED)OBJS REMOVED ✔️"

re: fclean all

.PHONY: all clean fclean re
