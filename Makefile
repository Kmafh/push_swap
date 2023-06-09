# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kama <kama@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 0023/01/26 09:51:15 by ama               #+#    #+#              #
#    Updated: 2023/03/17 11:10:57 by kama             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PS_NAME		=	push_swap
# C_NAME		=	checker

CC			=	clang

LIB_DIR		=	libft/
LIB			=	libft.a

DIR			=	srcs/
OBJ_DIR		=	obj/
SUB_DIR		=	obj/ps_srcs obj/c_srcs

FLAG		=	-c			\
				-Wall		\
				-Wextra		\
				-Werror

INCLUDE		=	-I include/					\
				-I $(LIB_DIR)

RM			=	/bin/rm -f

PS_FILES	=	main.c			\
				list.c			\
				list_sort.c		\
				list_u1.c		\
				list_u2.c		\
				check.c			\
				init.c			\
				case.c			\
				algo_short.c	\
				algo_bigger.c	\
				norm.c			\
				get.c			\
				op_p.c			\
				op_r.c			\
				op_s.c


PS_SRCS		=	$(addprefix $(DIR), $(PS_FILES))
PS_OBJ		=	$(PS_SRCS:$(DIR)%.c=$(OBJ_DIR)%.o)

all			:	$(PS_NAME)	


obj/%.o		:	srcs/%.c
				@mkdir -p $(OBJ_DIR) $(SUB_DIR)
				$(CC) -g $(FLAG) $(INCLUDE) $< -o $@

$(LIB)		:	
				@$(MAKE) -C $(LIB_DIR)
				/bin/mv $(LIB_DIR)$(LIB) .

$(PS_NAME)	:	$(PS_OBJ) $(LIB)
				$(CC) -fsanitize=address -o $@ $^

# $(C_NAME)	:	$(C_OBJ) $(LIB)
				# $(CC) -fsanitize=address -o $@ $^

clean		:	
				for dir in $(MODULES); do			\
					@$(MAKE) clean -C $$dir;		\
				done
				@/bin/rm -rf $(OBJ_DIR)

fclean		:	clean
				@$(MAKE) fclean -C $(LIB_DIR)
				@$(RM) $(LIB)
				@$(RM) $(PS_NAME)
				# @$(RM) $(C_NAME)

re			:	fclean all

.PHONY		:	all clean fclean re