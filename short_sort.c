/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   short_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 15:57:19 by skhaliff          #+#    #+#             */
/*   Updated: 2022/08/28 23:32:11 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	short_sort(t_list **a, t_list **b, int argc)
{
	int	i;

	i = 0;
	if (argc == 3)
		operation_sa(*a);
	else if (argc == 4)
		sort_three(a, 0);
	else
	{
		while (i < (argc - 4))
		{
			while (i != (*a)->index)
				operation_ra(a);
			operation_pb(a, b);
			i++;
		}
		sort_three(a, (argc - 4));
		operation_pa(a, b);
		if (*b != NULL)
			operation_pa(a, b);
	}
}
