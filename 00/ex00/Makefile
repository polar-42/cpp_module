# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/28 18:47:40 by fle-tolg          #+#    #+#              #
#    Updated: 2023/02/07 13:58:42 by fle-tolg         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

RED		=	\033[0;31m
GREEN	=	\033[0;32m
BLUE	=	\033[0;34m
ORANGE	=	\033[38;5;202m
END 	=	\033[0m

NAME	=	megaphone

CC 		= 	c++
CFLAGS 	= 	-Wextra -Wall -Werror -std=c++98
MK		=	mkdir -p
RM 		=	rm -rf

SRC = 	megaphone.cpp

OBJ 	=	$(addprefix objs/, $(SRC:%.cpp=%.o))
OBJ_DIR	=	objs

all : $(NAME)

$(OBJ_DIR)/%.o: %.cpp
	@$(MK) $(@D)
	@printf "\r                                                             "
	@printf "\r${ORANGE}Compilation: ${END}$<${END}\r"
	@$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : ${OBJ}
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "${GREEN}$(NAME) compilated with success"

clean :
	@$(RM) $(OBJ) $(OBJ_DIR)
	@echo "${RED}$(NAME) clean"

fclean :
	@$(RM) $(OBJ) $(OBJ_DIR) $(NAME)
	@echo "${RED}$(NAME) fclean"

re :	fclean all

.PHONY :
	all clean fclean re
