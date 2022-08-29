/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_rrb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 19:10:43 by skhaliff          #+#    #+#             */
/*   Updated: 2022/08/29 11:19:57 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	operation_rrb(t_list **b)
{
	t_list	*tmp;

	tmp = *b;
	while (tmp->next->next)
		tmp = tmp->next;
	tmp->next->next = *b;
	*b = tmp->next;
	tmp->next = NULL;
	write(1, "rrb\n", 4);
}
