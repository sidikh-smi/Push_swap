/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_sb.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 14:16:56 by skhaliff          #+#    #+#             */
/*   Updated: 2022/08/09 19:05:56 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	operation_sb(t_list *b)
{
	int	tmp;

	tmp = b->content;
	b->content = b->next->content;
	b->next->content = tmp;
}
