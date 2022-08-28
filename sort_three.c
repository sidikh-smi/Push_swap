/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 19:11:48 by skhaliff          #+#    #+#             */
/*   Updated: 2022/08/28 23:36:51 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	min_pos(t_list **a, int index)
{
	t_list	*tmp;
	int		position;

	position = 0;
	tmp = *a;
	while (tmp)
	{
		if (tmp->index == index)
			return (position);
		position++;
		tmp = tmp->next;
	}
	return (0);
}

void	middle_pos(t_list **a)
{
	if ((*a)->content > (*a)->next->next->content)
	{
		operation_rra(a);
		operation_rra(a);
	}
	else
		operation_sa(*a);
}

void	last_pos(t_list **a)
{
	if ((*a)->content > (*a)->next->content)
	{
		operation_sa(*a);
		operation_rra(a);
	}
	else
		operation_rra(a);
}

void	sort_three(t_list **a, int index)
{
	int		i;

	i = min_pos(a, index);
	if (i == 0)
	{
		operation_rra(a);
		operation_sa(*a);
	}
	else if (i == 1)
		middle_pos(a);
	else if (i == 2)
		last_pos(a);
}
