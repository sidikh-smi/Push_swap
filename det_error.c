/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   det_error.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 14:25:39 by skhaliff          #+#    #+#             */
/*   Updated: 2022/08/26 02:15:04 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	det_error(t_list *a)
{
	t_list	*tmp;
	t_list	*q;

	tmp = a;
	while (tmp)
	{
		q = tmp->next;
		while (q)
		{
			if (tmp->content == q->content)
				ft_error("ERROR\n");
			q = q->next;
		}
		(tmp) = (tmp)->next;
	}
}
