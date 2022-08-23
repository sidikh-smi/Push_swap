/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 00:12:27 by skhaliff          #+#    #+#             */
/*   Updated: 2022/08/21 01:06:29 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	index_list(t_list **a)
{
	int		*tab;
	int		i;
	t_list	*tmp;

	tmp = *a;
	tab = add_tab(*a);
	bubble_sort(tab, ft_lstsize(*a) - 1);
	while (tmp)
	{
		i = 0;
		while (i < ft_lstsize(*a))
		{
			if (tab[i] == tmp->content)
				tmp->index = i;
			i++;
		}
		tmp = tmp->next;
	}
}
