/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 23:33:52 by skhaliff          #+#    #+#             */
/*   Updated: 2022/08/23 00:33:17 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	max_bits(int size)
{
	int	max_bit;
	int	max;

	max = size - 1;
	max_bit = 0;
	while ((max >> max_bit) != 0)
		max_bit++;
	return (max_bit);
}

void	list_sort(t_list **a, t_list **b)
{
	int	size;
	int	max_bit;
	int	i;
	int	j;
	int	num;

	size = ft_lstsize(*a);
	num = (*a)->index;
	i = 0;
	max_bit = max_bits(size);
	while (i < max_bit)
	{
		j = 0;
		while (j < size)
		{
			printf(">> %d\n", num);
			if (((num >> i) & 1) == 1)
				operation_ra(a);
			else
				operation_pb(a, b);
			j++;
		}
		while (b != NULL)
		{
			operation_pa(a, b);
			*b = (*b)->next;
		}
		i++;
	}
}