/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   short_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 15:57:19 by skhaliff          #+#    #+#             */
/*   Updated: 2022/08/27 16:41:59 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	min_pos(t_list *a)
{
	t_list	*tmp;
	int		position;

	position = 0;
	tmp = a;
	while (tmp)
	{
		if (tmp->index == 0)
			return (position);
		position++;
		tmp = tmp->next;
	}
	return (0);
}

void	middle_pos(t_list *tmp, int i)
{
	if (i == 1)
	{
		if (tmp->content > tmp->next->next->content)
		{
			operation_rra(&tmp);
			operation_rra(&tmp);
		}
		else
			operation_sa(tmp);
	}
}

void	sort_three(t_list *a)
{
	t_list	*tmp;
	int		i;

	i = min_pos(a);
	tmp = a;
	if (i == 0)
	{
		operation_rra(&a);
		operation_sa(a);
	}
	else if (i == 1)
		middle_pos(a, i);
	else if (i == 2)
	{
		if (tmp->content > tmp->next->content)
		{
			operation_sa(a);
			operation_rra(&a);
		}
		else
			operation_rra(&a);
	}
}

// void	short_sort(t_list *a, t_list *b, int argc)
// {
// 	t_list	*tmp;

// 	tmp = a;
// 	while (tmp)
// 	{
// 		if (argc == 3)
// 			sort_three(a);
// 		else
// 			if ()
// }
