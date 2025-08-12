# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/11 15:52:53 by anamedin          #+#    #+#              #
#    Updated: 2025/08/12 10:52:56 by anamedin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = clap

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98  #-fsanitize=address

DEPFLAGS = -MMD -MP

SRCS = main.cpp ClapTrap.cpp ScacTrap.cpp

HDR = ClapTrap.hpp ScavTrap.hpp

DIR_OBJS = objs/

OBJS = $(addprefix $(DIR_OBJS), $(SRCS:.cpp=.o))

DEPS = $(OBJS:.o=.d)

all: $(DIR_OBJS) $(NAME)

$(DIR_OBJS):
	mkdir -p $(DIR_OBJS)
	
$(NAME): $(OBJS) Makefile
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

$(DIR_OBJS)%.o: %.cpp $(HDR)
	$(CXX) $(CXXFLAGS) $(DEPFLAGS) -c $< -o $@

clean:
	rm -rf $(DIR_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

-include $(DEPS)

.PHONY: all clean fclean re

