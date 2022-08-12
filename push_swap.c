/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 13:04:57 by skhaliff          #+#    #+#             */
/*   Updated: 2022/08/12 15:33:21 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*a;
	//int	*b;
	int		i;

	i = 1;
	//b = NULL;
	a = NULL;
	if (argc < 1)
	{
		write(2, "ERROR!!", 7);
		exit(1);
	}
	else if (argc > 1)
	{
		while (argv[i])
		{
			ft_lstadd_front(&a, ft_lstnew(ft_atoi(argv[i])));
			i++;
		}
		operation_sa(a);
		while (a)
		{
			printf("%d\n", a->content);
			a = a->next;
		}
	}
}
