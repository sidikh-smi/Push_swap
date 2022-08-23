/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_tab.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 17:16:32 by skhaliff          #+#    #+#             */
/*   Updated: 2022/08/20 23:25:28 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*add_tab(t_list *a)
{
	int		*tab;
	int		i;
	t_list	*tmp;

	tmp = a;
	i = 0;
	tab = malloc(sizeof(int) * ft_lstsize(a));
	if (!tab)
		return (NULL);
	while (tmp)
	{
		tab[i] = tmp->content;
		tmp = tmp->next;
		i++;
	}
	return (tab);
}
