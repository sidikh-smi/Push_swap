/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_sb.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 14:16:56 by skhaliff          #+#    #+#             */
/*   Updated: 2022/08/29 11:20:09 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	operation_sb(t_list *b)
{
	int	tmp;

	tmp = b->content;
	b->content = b->next->content;
	b->next->content = tmp;
	write(1, "sb\n", 3);
}
