/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shammouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 23:51:35 by shammouc          #+#    #+#             */
/*   Updated: 2022/09/10 23:51:42 by shammouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	swap_a(t_stack *list)
{
	int	swap;

	if (list->len_a > 0)
	{
		swap = list->stack_a[list->len_a];
		list->stack_a[list->len_a] = list->stack_a[list->len_a - 1];
		list->stack_a[list->len_a - 1] = swap;
		ft_putbuff(list, "sa\n", 3);
	}
}

void	swap_b(t_stack *list)
{
	int	swap;

	if (list->len_b > 0)
	{
		swap = list->stack_b[list->len_b];
		list->stack_b[list->len_b] = list->stack_b[list->len_b - 1];
		list->stack_b[list->len_b - 1] = swap;
		ft_putbuff(list, "sb\n", 3);
	}
}

void	swap_ab(t_stack *list)
{
	int	swap;

	if (list->len_a > 0 || list->len_b > 0)
	{
		if (list->len_a > 0)
		{
			swap = list->stack_a[list->len_a];
			list->stack_a[list->len_a] = list->stack_a[list->len_a - 1];
			list->stack_a[list->len_a - 1] = swap;
		}
		if (list->len_b > 0)
		{
			swap = list->stack_b[list->len_b];
			list->stack_b[list->len_b] = list->stack_b[list->len_b - 1];
			list->stack_b[list->len_b - 1] = swap;
		}
		ft_putbuff(list, "ss\n", 3);
	}
}
