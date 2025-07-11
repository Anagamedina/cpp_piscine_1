# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/11 12:02:39 by anamedin          #+#    #+#              #
#    Updated: 2025/07/11 12:13:46 by anamedin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=megaphone
OBJ_DIR=objs/

CC=g++
CFLAGS=-Wall-Wextra-Werror -std=c++98
OBJ_FLAGS=$(CFLAGS)-MMD -g -c

SRC=megaphone.cpp
OBJ=$(SRC:.cpp=.o)

OBJS=$(addprefix $(OBJ_DIR), $(OBJ))

.PHONY: all clean fclean re

all:$(NAME)

$(NAME):Makefile$(OBJS)
	$(CC)$(CFLAGS)$(OBJS) -o$@

$(OBJ_DIR)%.o: %.cpp
	@mkdir -p $(OBJ_DIR)
	$(CC) $(OBJ_FLAGS) $<-o $@

clean:
	rm -rf $(NAME)

re: fclean all



