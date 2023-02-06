# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fle-tolg  <fle-tolg@student.42angouleme    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/28 18:47:40 by fle-tolg          #+#    #+#              #
#    Updated: 2023/02/03 16:12:08 by fle-tolg         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

RED 	=	\033[0;31m
GREEN 	=	\033[0;32m
BLUE 	=	\033[0;34m
ORANGE	=	\033[38;5;202m
END 	=	\033[00m

NAME	=	phoneBook

CC 		= 	c++
CFLAGS 	= 	-Wextra -Wall -Werror -std=c++98
MK		=	mkdir -p
RM 		=	rm -rf
SLP		=	spleep

SRC = 	main.cpp\
		PhoneBook.cpp\
		Contact.cpp

OBJ 	=	$(addprefix objs/, $(SRC:%.cpp=%.o))
OBJ_DIR	=	objs

all : $(NAME)

compilation:
	@printf "Compilation = ["

$(OBJ_DIR)/%.o: %.cpp
	@$(MK) $(@D)
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