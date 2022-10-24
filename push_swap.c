/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 13:04:57 by skhaliff          #+#    #+#             */
/*   Updated: 2022/08/29 14:07:53 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
		if (!ft_isdigit(s[i]) || s[i] == '"')
			ft_error("ERROR\n");
		i++;
	}
}

int	main(int argc, char **argv)
{
	t_list	*a;
	t_list	*b;
	int		i;

	i = 1;
	a = NULL;
	b = NULL;
	if (argc > 1)
	{
		while (argv[i])
		{
			ft_lstadd_back(&a, ft_lstnew(ft_atoi(argv[i])));
			argument_ch(argv[i]);
			i++;
		}
		det_error(a);
		if (ft_a_sort(a))
			exit(0);
		index_list(&a);
		if (argc <= 6)
			short_sort(&a, &b, argc);
		else
			big_sort(a, b);
	}
}
