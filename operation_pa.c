/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_pa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 14:18:51 by skhaliff          #+#    #+#             */
/*   Updated: 2022/08/16 14:28:04 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	operation_pa(t_list **a, t_list **b)
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
}
