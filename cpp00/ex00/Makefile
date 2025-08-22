# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/11 12:02:39 by anamedin          #+#    #+#              #
#    Updated: 2025/08/21 10:48:42 by anamedin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ===========================
# CONFIGURATION
# ===========================

# Executable name
NAME = megaphone

# Compiler
CXX = c++

# Compilation flags
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -MMD -g #-fsanitize=address

# Directories
OBJ_DIR = objs/
DEP_DIR = deps/

# ===========================
# SOURCES AND OBJECTS
# ===========================

SRCS = megaphone.cpp
OBJS = $(addprefix $(OBJ_DIR), $(SRCS:.cpp=.o))
DEPS = $(addprefix $(DEP_DIR), $(SRCS:.cpp=.d))

# ===========================
# RULES
# ===========================

.PHONY: all clean fclean re

# Compile everything
all: $(NAME)

# Create executable
$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

# Compile each .cpp to .o and generate dependencies
objs/%.o: %.cpp Makefile
	@mkdir -p $(OBJ_DIR) $(DEP_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@
	@mv $(@:.o=.d) $(DEP_DIR)

# Remove object files and dependencies
clean:
	rm -rf $(OBJ_DIR) $(DEP_DIR)

# Remove everything including executable
fclean: clean
	rm -f $(NAME)

# Recompile from scratch
re: fclean all

# Include dependencies automatically
-include $(DEPS)

