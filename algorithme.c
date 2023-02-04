/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithme.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shammouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 22:45:43 by shammouc          #+#    #+#             */
/*   Updated: 2022/09/10 23:00:34 by shammouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

static void	swap_final(t_stack *list)
{
	if (list->len_a > 0 && list->len_b > 0
		&& list->stack_a[list->len_a] > list->stack_a[list->len_a - 1]
		&& list->stack_b[list->len_b] < list->stack_b[list->len_b - 1])
		swap_ab(list);
	if (list->len_a > 0
		&& list->stack_a[list->len_a] > list->stack_a[list->len_a - 1])
		swap_a(list);
}

static void	split_stack(t_stack *list, char sens)
{
	ft_pivot(list);
	sens = ft_sens_pivot(list);
	while (!sort_realistack_a(list) && list->len_a != 0)
	{
		if (list->stack_a[list->len_a] <= list->pivot)
		{
			push_b(list);
			ft_pivot(list);
			sens = ft_sens_pivot(list);
		}
		else if (sens == 0 && list->len_a < 10 && list->len_b > 0
			&& list->stack_b[list->len_b] < list->stack_b[0])
			rev_rotate_ab(list);
		else if (sens == 0 && list->len_a < 10)
			rev_rotate_a(list);
		else if (list->len_b > 0
			&& list->stack_b[list->len_b]
			< list->stack_b[list->len_b - 1])
			rotate_ab(list);
		else
			rotate_a(list);
	}
}

static void	rotate_final(t_stack *list, char sens)
{
	if (sens == 1 && list->len_a > 0
		&& list->stack_a[list->len_a] == list->max_n)
		rotate_ab(list);
	else if (sens == 1)
		rotate_b(list);
	else if (sens == 0 && list->len_a > 0
		&& list->stack_a[0] < list->stack_a[list->len_a])
		rev_rotate_ab(list);
	else
		rev_rotate_b(list);
}

static void	push_final(t_stack *list, char sens)
{
	while (list->len_b != -1)
	{
		if (list->len_b == 0 || list->stack_b[list->len_b] >= list->max_n)
		{
			push_a(list);
			if (list->stack_a[list->len_a] != list->max)
				sens = ft_sens(list, list->max);
			else
			{
				list->max = ft_max(list->stack_b, list->len_b);
				list->max_n
					= ft_next_max(list->stack_b, list->len_b, list->max);
				sens = ft_sens_fin(list);
				if (sens == 0 && list->len_a > 0
					&& list->stack_a[0] < list->stack_a[list->len_a])
					rev_rotate_ab(list);
				else if (list->len_a > 0
					&& list->stack_a[0] < list->stack_a[list->len_a])
					rev_rotate_a(list);
			}
		}
		else
			rotate_final(list, sens);
		swap_final(list);
	}
}

void	ft_algo(t_stack *list)
{
	if (!ft_issort(list))
	{
		if (list->len_a == 1)
			swap_a(list);
		else if (list->len_a == 2)
		{
			swap_final(list);
			if (list->stack_a[0] < list->stack_a[2]
				|| list->stack_a[0] < list->stack_a[1])
				rev_rotate_a(list);
			swap_final(list);
		}
		else
		{
			split_stack(list, 0);
			list->max = ft_max(list->stack_b, list->len_b);
			list->max_n = ft_next_max(list->stack_b, list->len_b, list->max);
			push_final(list, ft_sens_fin(list));
		}
		write(1, list->str, list->count);
	}
}
