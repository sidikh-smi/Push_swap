/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_ss.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 14:18:31 by skhaliff          #+#    #+#             */
/*   Updated: 2022/08/24 18:48:13 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	operation_ss(t_list *a, t_list *b)
{
	operation_sa(a);
	operation_sb(b);
	write(1, "ss\n", 3);
}
