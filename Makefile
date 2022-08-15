# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/04 12:50:29 by skhaliff          #+#    #+#              #
#    Updated: 2022/08/15 15:26:36 by skhaliff         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
SRCS_PUSH_SWAP = push_swap.c ft_lstadd_front.c ft_lstnew.c operation_sa.c operation_pa.c operation_sb.c\
				operation_ss.c operation_pb.c ft_atoi.c ft_isdigit.c operation_ra.c operation_rra.c 

CC		= cc
RM		= rm -f
CFLAGS = -Wall -Wextra -Werror -fsanitize=address

all: $(NAME)

$(NAME): $(SRCS_PUSH_SWAP)
		$(CC) $(CFLAGS) $(SRCS_PUSH_SWAP) -lmlx -framework OpenGL -framework AppKit -o $(NAME)

clean:
		$(RM) $(NAME)

fclean:	clean

re:		fclean all