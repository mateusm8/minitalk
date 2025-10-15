# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: matmagal <matmagal@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/14 19:02:38 by matmagal          #+#    #+#              #
#    Updated: 2025/10/14 21:54:42 by matmagal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME_SERVER = server
NAME_CLIENT = client

CC = cc
CFLAGS = -Wall -Wextra -Werror -Iinclude -I$(PRINTF_DIR) -I$(LIBFT_DIR)
SRC_DIR = src
OBJ_DIR = obj
INC_DIR = include
PRINTF_DIR = ext/ft_printf
LIBFT_DIR = ext/libft
PRINTF = $(PRINTF_DIR)/libftprintf.a
LIBFT = $(LIBFT_DIR)/libft.a

SRCS_SERVER = $(SRC_DIR)/server.c
SRCS_CLIENT = $(SRC_DIR)/client.c

OBJS_SERVER = $(OBJ_DIR)/server.o
OBJS_CLIENT = $(OBJ_DIR)/client.o
RM = rm -f

all: $(NAME_CLIENT) $(NAME_SERVER)

$(NAME_CLIENT): $(OBJ_DIR)/client.o $(PRINTF) $(LIBFT)
	@$(CC) $(CFLAGS) $(OBJ_DIR)/client.o $(PRINTF) $(LIBFT) -o $(NAME_CLIENT)

$(NAME_SERVER): $(OBJ_DIR)/server.o $(PRINTF) $(LIBFT)
	@$(CC) $(CFLAGS) $(OBJ_DIR)/server.o $(PRINTF) $(LIBFT) -o $(NAME_SERVER)
	
$(PRINTF):
	@$(MAKE) -s -C $(PRINTF_DIR)

$(LIBFT):
	@$(MAKE) -s -C $(LIBFT_DIR)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	@$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

clean:
	@$(RM) $(OBJS_SERVER) $(OBJS_CLIENT)
	@$(MAKE) -s -C $(PRINTF_DIR) clean
	@$(MAKE) -s -C $(LIBFT_DIR) clean

fclean: clean
	@$(RM) $(NAME_CLIENT) $(NAME_SERVER)
	@$(MAKE) -s -C $(PRINTF_DIR) fclean
	@$(MAKE) -s -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re
