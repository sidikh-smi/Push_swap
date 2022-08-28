/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_rb.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 16:07:04 by skhaliff          #+#    #+#             */
/*   Updated: 2022/08/27 17:03:50 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	operation_rb(t_list **b)
{
	t_list	*tmp;
	t_list	*head;

	tmp = *b;
	head = (*b)->next;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = *b;
	(*b)->next = NULL;
	*b = head;
	write(1, "rb\n", 4);
}
