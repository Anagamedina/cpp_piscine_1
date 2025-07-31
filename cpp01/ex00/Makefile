# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/31 10:56:06 by anamedin          #+#    #+#              #
#    Updated: 2025/07/31 11:04:53 by anamedin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++;

CXXFLAGS = -Wall -Wextra -Werror -std=c++98 #-pedantic

NAME = 	brainz

SRCS = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

HDR = Zombie.hpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS) Makefile
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp $(HDR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf  $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
