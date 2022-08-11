/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 13:06:04 by skhaliff          #+#    #+#             */
/*   Updated: 2022/08/11 00:32:00 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

typedef struct t_list{
	int				content;
	struct t_list	*next;
}t_list;

void	ft_lstadd_front(t_list **alst, t_list *new);
t_list	*ft_lstnew(int content);
int		ft_atoi(const char *str);
int		ft_isdigit(int c);
void	operation_sa(int *a, int *b);
//void	operation_sb(t_list *b);

#endif