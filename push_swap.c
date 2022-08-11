/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 13:04:57 by skhaliff          #+#    #+#             */
/*   Updated: 2022/08/11 00:42:21 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int	*a;
	int	*b;
	int		i;

	i = 0;
	b = NULL;
	a = NULL;
	if (argc < 1)
	{
		write(2, "ERROR!!", 7);
		exit(1);
	}
	else if (argc > 1)
	{
		printf("here\n");
		while (argv[i])
		{
			a[i] = ft_atoi(argv[i]);
			i++;
		}
		i = 0;
		operation_sa(a, b);
		while (a)
		{
			printf("%d\n", a[i]);
			i++;
		}
	}
}
