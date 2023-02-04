/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max_min.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shammouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 23:38:50 by shammouc          #+#    #+#             */
/*   Updated: 2022/09/10 23:39:05 by shammouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	ft_min(int *stack, int len)
{
	int	min;

	min = 2147483647;
	while (len >= 0)
	{
		if (stack[len] < min)
			min = stack[len];
		len--;
	}
	return (min);
}

int	ft_max(int *stack, int len)
{
	int	min;

	min = -2147483648;
	while (len >= 0)
	{
		if (stack[len] > min)
			min = stack[len];
		len--;
	}
	return (min);
}

int	ft_next_min(int *stack, int len, int tmp)
{
	int	min;

	min = 2147483647;
	while (len >= 0)
	{
		if (stack[len] < min && stack[len] > tmp)
			min = stack[len];
		len--;
	}
	return (min);
}

int	ft_next_max(int *stack, int len, int tmp)
{
	int	min;

	min = -2147483648;
	while (len >= 0)
	{
		if (stack[len] > min && stack[len] < tmp)
			min = stack[len];
		len--;
	}
	return (min);
}

int	ft_nb(int *stack, int len, int nb)
{
	while (len >= 0)
	{
		if (stack[len] == nb)
			return (len);
		len--;
	}
	return (0);
}
