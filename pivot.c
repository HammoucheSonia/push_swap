/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pivot.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shammouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 23:39:46 by shammouc          #+#    #+#             */
/*   Updated: 2022/09/10 23:41:14 by shammouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_sens_fin2(t_stack *list, int pos)
{
	int	position;

	position = pos;
	if (pos > (list->len_b / 2))
		position = list->len_b - pos;
	else
		position++;
	return (position);
}

int	ft_sens_fin(t_stack *list)
{
	int	pos;
	int	pos2;

	pos = ft_nb(list->stack_b, list->len_b, list->max);
	pos2 = ft_nb(list->stack_b, list->len_b, list->max_n);
	if (ft_sens_fin2(list, pos) < ft_sens_fin2(list, pos2))
	{
		if (pos > (list->len_b / 2))
			return (1);
		return (0);
	}
	if (pos2 > (list->len_b / 2))
		return (1);
	return (0);
}

int	ft_sens_pivot(t_stack *list)
{
	int	pos;
	int	pos2;

	pos2 = 0;
	pos = list->len_a;
	while (pos2 <= list->len_a && list->stack_a[pos2] > list->pivot)
		pos2++;
	while (pos >= 0 && list->stack_a[pos] > list->pivot)
		pos--;
	if ((list->len_a - pos) == pos2 + 1)
	{
		if (list->stack_a[pos] < list->stack_a[pos2])
			return (1);
		return (0);
	}
	if ((list->len_a - pos) < pos2 + 1)
		return (1);
	return (0);
}

void	ft_pivot(t_stack *list)
{
	int	val;
	int	min;
	int	i;

	val = 11;
	i = -1;
	if (list->len_a >= 40 && list->len_a <= 300)
		val = (list->len_a / 43) + 4;
	else if (list->len_a < 40)
		val = 4;
	min = ft_min(list->stack_a, list->len_a);
	while (++i < (list->len_a / val))
		min = ft_next_min(list->stack_a, list->len_a, min);
	list->pivot = min;
}

int	ft_sens(t_stack *list, int max)
{
	int	pos;

	pos = ft_nb(list->stack_b, list->len_b, max);
	if (pos > (list->len_b / 2))
		return (1);
	return (0);
}
