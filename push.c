/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shammouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 23:43:07 by shammouc          #+#    #+#             */
/*   Updated: 2022/09/10 23:43:18 by shammouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	push_a(t_stack *list)
{
	if (list->len_b >= 0)
	{
		list->stack_a[++list->len_a] = list->stack_b[list->len_b--];
		ft_putbuff(list, "pa\n", 3);
	}
}

void	push_b(t_stack *list)
{
	if (list->len_a >= 0)
	{
		list->stack_b[++list->len_b] = list->stack_a[list->len_a--];
		ft_putbuff(list, "pb\n", 3);
	}
}
