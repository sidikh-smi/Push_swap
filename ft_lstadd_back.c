/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 01:01:14 by skhaliff          #+#    #+#             */
/*   Updated: 2022/08/27 15:42:59 by skhaliff         ###   ########.fr       */
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
