# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kama <kama@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/16 12:18:16 by hbuisser          #+#    #+#              #
#    Updated: 2023/03/17 10:46:50 by kama             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CFLAGS = -g -fsanitize=address -Wall -Wextra -Werror -I $(HEADER)

SRCS =	*.c

OBJECTS = $(SRCS:%.c=%.o)

CC = gcc

REM = rm -rf

HEADER = ./

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)
	ranlib $(NAME)

$(OBJECTS): $(SRCS)
	@$(CC) $(CFLAGS) -c $(SRCS)

clean:
	$(REM) $(OBJECTS)

fclean: clean
	@$(REM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
