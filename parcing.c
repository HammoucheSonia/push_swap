/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parcing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shammouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 23:02:08 by shammouc          #+#    #+#             */
/*   Updated: 2022/09/10 23:14:17 by shammouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

static int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

static int	check_double(char **list)
{
	int		i;
	int		j;

	i = 0;
	while (list[i])
	{
		j = i + 1;
		while (list[j])
		{
			if (!ft_strcmp(list[i], list[j]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

static int	check_nbr(char **list)
{
	int		i;
	int		j;

	i = 0;
	while (list[i])
	{
		j = 0;
		if (list[i][j] == '-' || list[i][j] == '+')
			j++;
		while (list[i][j])
		{
			if (!(list[i][j] >= '0' && list[i][j] <= '9'))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

static int	check_max_min(char **list)
{
	int	i;

	i = 0;
	while (list[i])
	{
		if (ft_atoi(list[i]) > INT_MAX
			|| ft_atoi(list[i]) < INT_MIN)
			return (0);
		i++;
	}
	return (1);
}

void	ft_parcing(char **list)
{
	if ((check_double(list) == 0) || (check_max_min(list) == 0)
		|| (check_nbr(list) == 0))
	{
		ft_putstr("Error\n");
		exit(0);
	}
}
