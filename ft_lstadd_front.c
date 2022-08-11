/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 16:00:58 by skhaliff          #+#    #+#             */
/*   Updated: 2022/08/10 22:14:41 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	ft_lstadd_front(t_list **alst, t_list *new)
{
	if (!new)
		return ;
	if (! (*alst))
		*alst = new;
	else
	{
		new -> next = *alst;
		*alst = new;
	}
}
