/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 13:04:57 by skhaliff          #+#    #+#             */
/*   Updated: 2022/08/23 00:21:35 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void	init(t_list **a)
// {
// 	while (*a)
// 	{
// 		if ((*a)->content < (*a)->next->content)
// 			(*a)->index = 0;
// 		*a = (*a)->next;
// 	}
// }

int	ft_a_sort(t_list *a)
{
	t_list	*tmp;
	t_list	*s;

	tmp = a;
	while (tmp)
	{
		s = tmp->next;
		while (s)
		{
			if (tmp->content > s->content)
				return (0);
			s = s->next;
		}
		tmp = tmp->next;
	}
	return (1);
}

void	argument_ch(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == '-' || s[i] == '+')
			i++;
		if (!ft_isdigit(s[i]))
			ft_error("ARGUMENT!!!\n");
		i++;
	}
}

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
			ft_lstadd_back(&a, ft_lstnew(ft_atoi(argv[i])));
			argument_ch(argv[i]);
			i++;
		}
		det_error(a);
		if (ft_a_sort(a) == 1)
			exit(0);
		// operation_pb(&a, &b);
		index_list(&a);
		list_sort(&a, &b);
		// t_list *tmp = a;
		// while (tmp)
		// {
		// 	printf("i = %d || value = %d\n", tmp->index, tmp->content);
		// 	tmp = tmp->next;
		// }
	}
}
