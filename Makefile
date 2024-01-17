# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: manperez <manperez@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/09 14:31:54 by manperez          #+#    #+#              #
#    Updated: 2024/01/15 14:31:39 by manperez         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#**********************************VARIABLES***********************************#
CC = gcc
CFLAGS = -Wextra -Wall -Werror -c -MMD
NAME = libft.a
BNAME = .bonus
HEADER = libft.h
SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
	  ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
	  ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c ft_strlcat.c \
	  ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c \
	  ft_tolower.c ft_toupper.c ft_substr.c ft_strjoin.c ft_strtrim.c \
	  ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
	  ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
BONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
		ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
		ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c
OBJ = $(SRC:.c=.o)
DEP = $(OBJ:.o=.d)
OBJ_BONUS = $(BONUS:.c=.o)
DEP_BONUS = $(OBJ_BONUS:.o=.d)

#**********************************COLORS**************************************#
DEF_COLOR = \033[0;39m
RED = \033[0;91m
GREEN = \033[0;92m
YELLOW = \033[0;93m

#**********************************RULES***************************************#

%.o: %.c Makefile
	@$(CC) $(CFLAGS) -I./ $< -o $@
	@echo "$(YELLOW)Compiling..."

all: $(NAME)

$(NAME): $(OBJ)
	@ar crs $(NAME) $(OBJ)
	@echo "$(GREEN)libft compiled!"

-include $(DEP)

bonus: $(BNAME)

$(BNAME): $(OBJ) $(OBJ_BONUS)
	@ar crs $(NAME) $(OBJ) $(OBJ_BONUS)
	@touch $@
	@echo "$(GREEN)libft with bonus compiled!"

-include $(DEP_BONUS)

clean:
	@rm -f $(OBJ) $(OBJ_BONUS) $(DEP) $(DEP_BONUS)
	@echo "$(RED)objects and dependences deleted"

fclean: clean
	@rm -f $(NAME) $(BNAME)
	@echo "$(RED)libft deleted"

re: fclean all


.PHONY: all clean fclean re bonus
