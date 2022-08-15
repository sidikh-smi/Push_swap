/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_pb.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 14:19:08 by skhaliff          #+#    #+#             */
/*   Updated: 2022/08/15 15:22:49 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	operation_pb(t_list **a, t_list **b)
{
	t_list	*tmp;

	if (*b == NULL)
	{
		*b = *a;
		*a = (*a)->next;
		(*b)->next = NULL;
	}
	else
	{
		tmp = *a;
		(*a)->next = *b;
		*a = tmp->next;
	}
}
