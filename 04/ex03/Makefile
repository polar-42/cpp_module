# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/28 18:47:40 by fle-tolg          #+#    #+#              #
#    Updated: 2023/04/09 16:30:14 by fle-tolg         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

RED 	=	\033[0;31m
GREEN 	=	\033[0;32m
BLUE 	=	\033[0;34m
ORANGE	=	\033[38;5;202m
END 	=	\033[00m

NAME	=	ex03

CC 		= 	c++
CFLAGS 	= 	-g -Wextra -Wall -Werror -Wshadow -Wno-shadow -I. -std=c++98
MK		=	mkdir -p
RM 		=	rm -rf

SRC = 	main.cpp			\
		AMateria.cpp		\
		Ice.cpp				\
		Cure.cpp			\
		MateriaSource.cpp	\
		Character.cpp

OBJ 	=	$(addprefix objs/, $(SRC:%.cpp=%.o))
OBJ_DIR	=	objs

all : $(NAME)

$(OBJ_DIR)/%.o: %.cpp
	@$(MK) $(@D)
	@printf "\r                                                       \r"
	@printf "\r${ORANGE}Compilation: ${END}$<${END}\r"
	@$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : ${OBJ}
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@printf "${GREEN}$(NAME) compilated with success${END}\n"

clean :
	@$(RM) $(OBJ) $(OBJ_DIR)
	@printf "${RED}$(NAME) clean${END}\n"

fclean :
	@$(RM) $(OBJ) $(OBJ_DIR) $(NAME)
	@printf "${RED}$(NAME) fclean${END}\n"

re :	fclean all

.PHONY :
	all clean fclean re
