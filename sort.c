/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shammouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 23:45:49 by shammouc          #+#    #+#             */
/*   Updated: 2022/09/10 23:51:05 by shammouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	ft_issort(t_stack *list)
{
	int	count;

	count = list->len_a;
	if (list->len_b != -1)
		return (0);
	while (count > 0)
	{
		if (!(list->stack_a[count] < list->stack_a[count - 1]))
			return (0);
		count--;
	}
	return (1);
}

int	sort_stack_a(t_stack *list)
{
	int	len;

	len = list->len_a;
	while (len > 0)
	{
		if (list->stack_a[len] > list->stack_a[len - 1])
			return (0);
		len--;
	}
	return (1);
}

int	sort_realistack_a(t_stack *list)
{
	if ((ft_min(list->stack_a, list->len_a)
			> ft_max(list->stack_b, list->len_b))
		&& sort_stack_a(list))
		return (1);
	return (0);
}
