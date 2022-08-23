/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_pb.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 14:19:08 by skhaliff          #+#    #+#             */
/*   Updated: 2022/08/22 17:00:10 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	operation_pb(t_list **a, t_list **b)
{
	t_list	*tmp;

	if (*a == NULL)
		return ;
	if (*b == NULL)
	{
		*b = *a;
		*a = (*a)->next;
		(*b)->next = NULL;
	}
	else
	{
		tmp = (*a)->next;
		(*a)->next = *b;
		(*b) = *a;
		*a = tmp;
	}
	write(1, "pb\n", 3);
}
