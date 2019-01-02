# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: delay <cpieri@student.42.fr>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/12 15:05:46 by delay             #+#    #+#              #
#    Updated: 2019/01/02 23:48:45 by delay            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	emulate

CC		=	g++

CFLAGS	=	-Wall -Wextra -Werror -O3 -flto #-g -fsanitize=address -fno-omit-frame-pointer

FW_PATH = ./libgraph/frameworks

SDL_PATH = $(FW_PATH)/SDL2.framework

IMG_PATH = $(FW_PATH)/SDL2_image.framework

TTF_PATH = $(FW_PATH)/SDL2_ttf.framework

SDL_FLAGS = -F $(FW_PATH) -framework SDL2 -framework SDL2_image -framework SDL2_ttf -rpath $(FW_PATH)

SDL_LOCAL_FLAGS = -framework SDL2 -F $(FW_PATH) -framework SDL2_image -framework SDL2_ttf -rpath $(FW_PATH)

CPPFLAGS=	-Iincludes

FLAGSFT	=	 -L./libgraph -lgraph

SRC_PATH=	srcs

OBJ_PATH=	obj

DEPS =		Makefile			\
			libgraph/libgraph.a	

SRC_NAME= 	main.cpp	\
			game.cpp
			
OBJ_NAME=	$(SRC_NAME:.cpp=.o)

SRC		=	$(addprefix $(SRC_PATH)/,$(SRC_NAME))

OBJ		=	$(addprefix $(OBJ_PATH)/,$(OBJ_NAME))

NONE = \033[0m
RED = \033[31m
GREEN = \033[32m
YELLOW = \033[33m
BLUE = \033[34m
MAGENTA = \033[35m
CYAN = \033[36m

.PHONY:	all clean fclean re echo norm

all:		 LGRAPH $(NAME)

$(NAME):	 echo $(OBJ)
			@if [ -d "/Library/Frameworks/SDL2.framework" ]; then \
			$(CC) $(CFLAGS) $(FLAGSFT) -o $(NAME) $(OBJ) $(CPPFLAGS) $(SDL_LOCAL_FLAGS); \
			else \
			$(CC) $(CFLAGS) $(FLAGSFT) -o $(NAME) $(OBJ) $(CPPFLAGS) $(SDL_FLAGS); \
			fi
			@echo "\n$(GREEN)$(NAME) ready!$(NONE)"

echo:
			@ echo -n Getting $(NAME) ready

$(OBJ_PATH)/%.o: $(SRC_PATH)/%.cpp $(DEPS)
			@mkdir $(OBJ_PATH) 2> /dev/null || true
			@if [ -d "/Library/Frameworks/SDL2.framework" ]; then \
			$(CC) $(CFLAGS) $(CPPFLAGS) -c $< -I/Library/Frameworks/SDL2.framework/Headers/ -I $(IMG_PATH)/Headers -I $(TTF_PATH)/Headers -o $@; \
			else \
			$(CC) $(CFLAGS) $(CPPFLAGS) -c $< -I $(SDL_PATH)/Headers -I $(TTF_PATH)/Headers -I $(IMG_PATH)/Headers -o $@; \
			fi
			@echo -n .

clean:
			@echo "$(YELLOW)Cleaning...$(NONE)"
			@make clean -C ./libgraph/
			@/bin/rm -f $(OBJ)
			@rmdir $(OBJ_PATH) 2> /dev/null || true
			@/bin/rm -rf $(PATH_SDL)

fclean:		clean
			@make fclean -C ./libgraph/
			@echo "$(RED)Libgraph.a deleted$(NONE)"
			@/bin/rm -f $(NAME)
			@echo "$(RED)$(NAME) deleted !$(NONE)"

norm:		clean
			@echo "$(CYAN)Running norminette...$(NONE)"
			@norminette $(SRC_PATH) $(INCLUDE) libft/ libgraph/ \
				| grep -B 1 '^Error' 2> /dev/null || echo '$(GREEN)Norme OK !$(NONE)';

re:			fclean all

LGRAPH:
		@make -C ./libgraph/;
		@echo "\n$(GREEN)Libgraph ready!$(NONE)";
