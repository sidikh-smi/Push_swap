/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_pa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 14:18:51 by skhaliff          #+#    #+#             */
/*   Updated: 2022/08/26 02:34:07 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	operation_pa(t_list **a, t_list **b)
{
	t_list	*tmp;

	if (*a == NULL)
	{
		*a = *b;
		*b = (*b)->next;
		(*a)->next = NULL;
	}
	else
	{
		if ((*b)->next)
		{
			tmp = (*b)->next;
			(*b)->next = *a;
			(*a) = *b;
			*b = tmp;
		}
		else
		{
			(*b)->next = (*a);
			(*a) = (*b);
			(*b) = NULL;
		}
	}
	write(1, "pa\n", 3);
}
