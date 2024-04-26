
#------------------------------------------------------------------------------#
#   INGREDIENTS                                                                #
#------------------------------------------------------------------------------#

NAME			:=	 Array

CPP				:=	c++
CPPFLAGS		:=	-Wall -Wextra -Werror -std=c++98 #-g3 -fsanitize=address

INCLUDE_PATH	:=	inc/
INCLUDE			:=	$(INCLUDE_PATH)whatever.hpp



SRC_PATH		:=	src/

SRC				:=	main.cpp

SRC				:=	$(SRC:%=$(SRC_PATH)%)

OBJ_PATH		:=	obj/
OBJ				:=	$(SRC:$(SRC_PATH)%.cpp=$(OBJ_PATH)%.o)

#------------------------------------------------------------------------------#
#   UTENSILS                                                                   #
#------------------------------------------------------------------------------#

RM				:=	rm
RMFLAG			:=	-fr

DIR_DUP			=	mkdir -p $(@D)

#------------------------------------------------------------------------------#
#   RECIPES                                                                    #
#------------------------------------------------------------------------------#

all				:	$(NAME)

$(NAME)			:	$(OBJ) 
					$(CPP) $(CPPFLAGS) $(OBJ) -o $(NAME)
					@echo -e "$(MAGENTA)Files $(NAME)$(GREEN) compiled!$(RESET)"
					@echo -e  "$$ART"

$(OBJ_PATH)%.o	:	$(SRC_PATH)%.cpp
					$(DIR_DUP)
					$(CPP) $(CPPFLAGS) -I $(INCLUDE_PATH) -c $< -o $@

clean			:
					$(RM) $(RMFLAG) $(OBJ_PATH)
					@echo -e "$(MAGENTA)Removing files... $(GREEN)done!$(RESET)"

fclean			:	clean
					$(RM) $(RMFLAG) $(NAME)
					@echo -e "$(MAGENTA)Removing $(NAME) $(GREEN)done!$(RESET)"

re				:	fclean all

#------------------------------------------------------------------------------#
#   SPEC                                                                       #
#------------------------------------------------------------------------------#

.PHONY			:	all clean fclean re 

#------------------------------------------------------------------------------#
#   COLORS                                                                     #
#------------------------------------------------------------------------------#

RESET			:=	\033[0m
RED_			:=	\033[31m
RED				:=	\033[91m
GREEN			:=	\033[92m
YELLOW			:=	\033[93m
BLUE			:=	\033[94m
MAGENTA			:=	\033[95m
CYAN			:=	\033[96m
WHITE			:=	\033[97m

#********************************************************************* END ****#

