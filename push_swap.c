/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 13:04:57 by skhaliff          #+#    #+#             */
/*   Updated: 2022/08/16 14:50:00 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*a;
	t_list	*b;
	int		i;

	i = 1;
	b = NULL;
	a = NULL;
	if (argc > 1)
	{
		while (argv[i])
		{
			ft_lstadd_front(&a, ft_lstnew(ft_atoi(argv[i])));
			i++;
		}
		operation_pb(a, b);
		while (a)
		{
			printf("%d\n", (a)->content);
			a = (a)->next;
		}
	}
}
