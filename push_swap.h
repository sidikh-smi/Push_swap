/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 13:06:04 by skhaliff          #+#    #+#             */
/*   Updated: 2022/08/28 23:30:52 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <limits.h>

typedef struct t_list
{
	int				index;
	int				content;
	struct t_list	*next;
}t_list;

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
void	ft_error(char *s);
void	det_error(t_list *a);
void	ft_lstadd_back(t_list **alst, t_list *new);
t_list	*ft_lstlast(t_list *lst);
int		ft_lstsize(t_list *lst);
int		*add_tab(t_list *a);
void	bubble_sort(int *tab, int size);
void	index_list(t_list **a);
void	big_sort(t_list *a, t_list *b);
int		ft_a_sort(t_list *a);
void	short_sort(t_list **a, t_list **b, int argc);
void	sort_three(t_list **a, int index);
int		min_pos(t_list **a, int index);
size_t	ft_strlen(const char *s);
#endif