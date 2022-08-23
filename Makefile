# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/04 12:50:29 by skhaliff          #+#    #+#              #
#    Updated: 2022/08/23 15:55:37 by skhaliff         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
SRCS_PUSH_SWAP = push_swap.c ft_lstadd_back.c ft_lstnew.c operation_sa.c operation_pa.c operation_sb.c\
				operation_ss.c operation_pb.c ft_atoi.c ft_isdigit.c operation_ra.c operation_rra.c ft_error.c\
				det_error.c ft_lstlast.c ft_lstsize.c add_tab.c bubble_sort.c index_list.c big_sort.c

CC		= cc
RM		= rm -f
CFLAGS = -Wall -Wextra -Werror -fsanitize=address

all: $(NAME)

$(NAME): $(SRCS_PUSH_SWAP)
		$(CC) $(CFLAGS) $(SRCS_PUSH_SWAP) -o $(NAME)

clean:
		$(RM) $(NAME)

fclean:	clean

re:		fclean all