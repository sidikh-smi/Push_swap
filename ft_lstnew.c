/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 03:30:19 by skhaliff          #+#    #+#             */
/*   Updated: 2022/08/08 20:11:20 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

t_list	*ft_lstnew(int content)
{
	t_list	*rtn;

	rtn = malloc(sizeof(t_list));
	if (!rtn)
		return (rtn = NULL);
	rtn->content = content;
	rtn->next = NULL;
	return (rtn);
}
