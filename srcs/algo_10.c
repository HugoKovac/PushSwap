/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_10.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkovac <hkovac@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 12:39:49 by hkovac            #+#    #+#             */
/*   Updated: 2022/01/11 11:53:23 by hkovac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include.h"

int	ft_sort_simple(t_nb **lst, int size)
{
	int		i;
	t_nb	*tmp;

	if (lst_size(lst) != size)
		return (0);
	i = 0;
	tmp = *lst;
	while (tmp->next != NULL)
	{
		if (tmp->value > tmp->next->value)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

void	ft_case(t_nb **lst)
{
	t_nb	*tmp;

	index_list(lst);
	tmp = ft_min_value(lst);
	if (tmp->index == 1 && (*lst)->value < tmp->next->value)
		swap(lst, "sa\n");
	else if (tmp->index == 0 && (*lst)->value > (*lst)->next->value)
	{
		swap(lst, "sa\n");
		r_rotate(lst, "rra\n");
	}
	else if (tmp->index == 1 && (*lst)->value > tmp->next->value)
		rotate(lst, "ra\n");
	else if (tmp->index == 2 && tmp->next->value > tmp->next->next->value)
	{
		swap(lst, "sa\n");
		rotate(lst, "ra\n");
	}
	else
		r_rotate(lst, "rra\n");
}

void	algo_10(t_nb **lst_a, t_nb **lst_b)
{
	t_nb	*tmp;

	while (lst_size(lst_a) != 3)
	{
		index_list(lst_a);
		tmp = ft_min_value(lst_a);
		if (tmp->value == (*lst_a)->value)
			push(lst_a, lst_b, "pb\n");
		else
			to_top_a(lst_a, tmp->index);
	}
	ft_case(lst_a);
	while (lst_size(lst_b) != 0)
		push(lst_b, lst_a, "pa\n");
}
