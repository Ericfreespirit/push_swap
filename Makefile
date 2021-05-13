# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eriling <eriling@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/13 14:36:37 by eriling           #+#    #+#              #
#    Updated: 2021/05/13 16:43:53 by eriling          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = clang
HEAD = -Iinclude -Ilibft
CFLAGS = -Wall -Wextra 

FILES = main.c ft_atol.c

SRC_PATH = $(shell find srcs -type d)
vpath %.c $(foreach dir, $(SRC_PATH), $(dir))

OBJ_PATH = objs
OBJ = $(addprefix $(OBJ_PATH)/, $(FILES:%.c=%.o))

all :   $(NAME) 

$(NAME) : libft/libft.a $(OBJ_PATH) $(OBJ) ./include/push_swap.h
	$(CC) $(CFLAGS) $(HEAD) $(OBJ) libft/libft.a -o ${NAME}

libft/libft.a : 
	make -C libft

$(OBJ_PATH):
	mkdir -p $(OBJ_PATH)

$(OBJ_PATH)/%.o : %.c
	$(CC) $(CFLAGS) $(HEAD) -c $< -o $@

print:
	@echo $(OBJ)
clean:
	rm -rf $(OBJ)
	make -C libft clean

fclean: clean
	rm -rf $(NAME)
	make -C libft fclean
re: fclean all