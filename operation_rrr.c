/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_rrr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 00:26:53 by skhaliff          #+#    #+#             */
/*   Updated: 2022/08/29 00:27:09 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	operation_rr(t_list **a)
{
	operation_rra(a);
	operation_rrb(a);
	write(1, "rrr\n", 5);
}
