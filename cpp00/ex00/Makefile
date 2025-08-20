# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/11 12:02:39 by anamedin          #+#    #+#              #
#    Updated: 2025/08/20 16:29:23 by anamedin         ###   ########.fr        #
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
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 #-fsanitize=address

# Flags for compiling objects
OBJ_FLAGS = $(CXXFLAGS) -MMD -c

# ===========================
# SOURCES AND OBJECTS
# ===========================

SRC = megaphone.cpp
OBJS = objs/megaphone.o
DEPS = deps/megaphone.d

# ===========================
# RULES
# ===========================

.PHONY: all clean fclean re

# Compile everything
all: $(NAME)

# Create executable
$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $@

# Compile each .cpp to .o and generate dependencies
objs/%.o: %.cpp Makefile
	@mkdir -p objs/ deps/
	$(CXX) $(OBJ_FLAGS) $< -o $@
	@mv $(@:.o=.d) deps/

# Remove object files and dependencies
clean:
	rm -rf objs/ deps/

# Remove everything including executable
fclean: clean
	rm -f $(NAME)

# Recompile from scratch
re: fclean all

# Include dependencies automatically
-include $(DEPS)

