# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: cgarrot <marvin@le-101.fr>                 +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2018/10/10 19:59:22 by cgarrot      #+#   ##    ##    #+#        #
#    Updated: 2018/10/10 20:03:13 by cgarrot     ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

.PHONY: all clean fclean re

NAME = libft.a
CC = gcc
FLAGS = -Wall -Wextra -Werror
INC = libft.h

#------------------------------------FILE--------------------------------------#

FILES = ft_atoi\
		ft_bzero\
		ft_isalnum\
		ft_isalpha\
		ft_isascii\
		ft_isdigit\
		ft_isprint\
		ft_itoa\
		ft_memalloc\
		ft_memccpy\
		ft_memchr\
		ft_memcmp\
		ft_memcpy\
		ft_memdel\
		ft_memmove\
		ft_memset\
		ft_putchar\
		ft_putchar_fd\
		ft_putendl\
		ft_putendl_fd\
		ft_putnbr\
		ft_putnbr_fd\
		ft_putstr\
		ft_putstr_fd\
		ft_strcat\
		ft_strchr\
		ft_strclr\
		ft_strcmp\
		ft_strcpy\
		ft_strdel\
		ft_strdup\
		ft_strequ\
		ft_striter\
		ft_striteri\
		ft_strjoin\
		ft_strlcat\
		ft_strlen\
		ft_strmap\
		ft_strmapi\
		ft_strncat\
		ft_strncmp\
		ft_strncpy\
		ft_strnequ\
		ft_strnew\
		ft_strnstr\
		ft_strrchr\
		ft_strsplit\
		ft_strstr\
		ft_strsub\
		ft_strtrim\
		ft_tolower\
		ft_toupper\

#----------------------------------SOURCE--------------------------------------#

SRC = $(addsuffix .c , $(FILES))

#----------------------------------OBJECT--------------------------------------#

OBJ = $(addsuffix .o , $(FILES))

#-----------------------------------RULE---------------------------------------#

all: $(NAME)

$(NAME): $(OBJ)
	@printf "\033[36m                                ______________________________________\033[0m\n"
	@printf "\033[36m                              / /-----------|  |----------| |--------- \ \033[0m\n"
	@printf "\033[36m                            / /             |  |          | |           \ \033[0m\n"
	@printf "\033[36m                          / /               |  |          | |           |\033[0m\n"
	@printf "\033[36m               _________/ /                 |  |          | |           |\033[0m\n"
	@printf "\033[36m      _______(|___________\_________________|  |----------===============\ \033[0m\n"
	@printf "\033[36m    /                  |           (=)       |           (=)|            /\ \033[0m\n"
	@printf "\033[36m  /                   |                     |                |           \/\ \033[0m\n"
	@printf "\033[36m /<>      ________    |                     |                |________      \ \033[0m\n"
	@printf "\033[36m |      /  ______  \   |  <==================|===========>  /  ______  \   -/\033[0m\n"
	@printf "\033[36m |)    |  / \  / \  |__|_____________________|_____________|  / \  / \  |  /\033[0m\n"
	@printf "\033[36m \____ | |   ()   | |______________________________________| |   ()   | |_/\033[0m\n"
	@printf "\033[36m          \_/__\_/                                            \_/__\_/\033[0m\n"
	@ar rcs $(NAME) $(OBJ)

%.o: %.c $(INC)
	@$(CC) $(FLAGS) -o $@ -c $< -I $(INC)

clean:
	@echo "\033[1m--------Supprimer les OBJECT-------\033[0m"
	@rm -f $(OBJ)

fclean: clean
	@echo "\033[1m--------Supprimer la libft.a-------\033[0m"
	@rm -f $(NAME) 

re: fclean all
	@clear
