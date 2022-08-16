/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 13:06:04 by skhaliff          #+#    #+#             */
/*   Updated: 2022/08/16 14:52:13 by skhaliff         ###   ########.fr       */
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
void	operation_sa(t_list *a);
void	operation_sb(t_list *b);
void	operation_ra(t_list **a);
void	operation_ss(t_list *a, t_list *b);
void	operation_rra(t_list **a);
void	operation_rrb(t_list **b);
void	operation_pb(t_list **a, t_list **b);
void	operation_pa(t_list **a, t_list **b);

#endif