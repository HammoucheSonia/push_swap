/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shammouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 23:43:59 by shammouc          #+#    #+#             */
/*   Updated: 2022/09/10 23:44:22 by shammouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	rev_rotate_a(t_stack *list)
{
	int	len;

	len = 0;
	if (list->len_a > 0)
	{
		list->stack_a[list->len_a + 1] = list->stack_a[0];
		while (len < (list->len_a + 1))
		{
			list->stack_a[len] = list->stack_a[len + 1];
			len++;
		}
		ft_putbuff(list, "rra\n", 4);
	}
}

void	rev_rotate_b(t_stack *list)
{
	int	len;

	len = 0;
	if (list->len_b > 0)
	{
		list->stack_b[list->len_b + 1] = list->stack_b[0];
		while (len < (list->len_b + 1))
		{
			list->stack_b[len] = list->stack_b[len + 1];
			len++;
		}
		ft_putbuff(list, "rrb\n", 4);
	}
}

void	rev_rotate_ab(t_stack *list)
{
	int	len;

	len = 0;
	if (list->len_b > 0)
	{
		list->stack_b[list->len_b + 1] = list->stack_b[0];
		while (len < (list->len_b + 1))
		{
			list->stack_b[len] = list->stack_b[len + 1];
			len++;
		}
	}
	len = 0;
	if (list->len_a > 0)
	{
		list->stack_a[list->len_a + 1] = list->stack_a[0];
		while (len < (list->len_a + 1))
		{
			list->stack_a[len] = list->stack_a[len + 1];
			len++;
		}
	}
	ft_putbuff(list, "rrr\n", 4);
}
