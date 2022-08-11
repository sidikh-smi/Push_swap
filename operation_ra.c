/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_ra.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 23:21:33 by skhaliff          #+#    #+#             */
/*   Updated: 2022/08/10 23:57:50 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	operation_ra(t_list *a)
{
	int	tmp;

	tmp = a->content;
	a->content = a->next->content;
	a->next->content = a->next->next->content;
	a->next->next->content = tmp;
}

int	main()
{
	t_list	*a;

	a = ft_lstnew(15);
	ft_lstadd_front(&a, ft_lstnew(12));
	ft_lstadd_front(&a, ft_lstnew(20));
	operation_ra(a);
	while(a)
	{
		printf("%d\n", a->content);
		a = a->next;
	}
}