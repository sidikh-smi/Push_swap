/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 01:01:14 by skhaliff          #+#    #+#             */
/*   Updated: 2022/08/18 23:41:57 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*tmp;

	if (alst == NULL || new == NULL)
		return ;
	if (*alst)
	{
		tmp = ft_lstlast(*alst);
		tmp->next = new;
	}
	else
		*alst = new;
}
