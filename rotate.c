/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shammouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 23:44:58 by shammouc          #+#    #+#             */
/*   Updated: 2022/09/10 23:45:19 by shammouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	rotate_a(t_stack *list)
{
	int	len;

	len = list->len_a;
	if (list->len_a > 0)
	{
		while (len >= 0)
		{
			list->stack_a[len + 1] = list->stack_a[len];
			len--;
		}
		list->stack_a[0] = list->stack_a[list->len_a + 1];
		ft_putbuff(list, "ra\n", 3);
	}
}

void	rotate_b(t_stack *list)
{
	int	len;

	len = list->len_b;
	if (list->len_b > 0)
	{
		while (len >= 0)
		{
			list->stack_b[len + 1] = list->stack_b[len];
			len--;
		}
		list->stack_b[0] = list->stack_b[list->len_b + 1];
		ft_putbuff(list, "rb\n", 3);
	}
}

void	rotate_ab(t_stack *list)
{
	int	len;

	len = list->len_a;
	if (list->len_a > 0)
	{
		while (len >= 0)
		{
			list->stack_a[len + 1] = list->stack_a[len];
			len--;
		}
		list->stack_a[0] = list->stack_a[list->len_a + 1];
	}
	len = list->len_b;
	if (list->len_b > 0)
	{
		while (len >= 0)
		{
			list->stack_b[len + 1] = list->stack_b[len];
			len--;
		}
		list->stack_b[0] = list->stack_b[list->len_b + 1];
	}
	ft_putbuff(list, "rr\n", 3);
}
