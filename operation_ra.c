/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_ra.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 23:21:33 by skhaliff          #+#    #+#             */
/*   Updated: 2022/08/23 23:45:38 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	operation_ra(t_list **a)
{
	t_list	*tmp;
	t_list	*head;

	tmp = *a;
	head = (*a)->next;
	if (!*a)
		return ;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = *a;
	(*a)->next = NULL;
	*a = head;
	write(1, "ra\n", 3);
}
