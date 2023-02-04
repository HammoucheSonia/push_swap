/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shammouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 23:33:48 by shammouc          #+#    #+#             */
/*   Updated: 2022/09/10 23:37:38 by shammouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h" 

int	ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57) || (c >= 97 && c <= 122)
		|| (c >= 65 && c <= 90))
		return (1);
	return (0);
}

void	ft_putchar(char c)
{
	write(2, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

long int	ft_atoi(const char *str)
{
	long int	res;
	int			i;
	int			nbmoins;

	res = 0;
	i = 0;
	nbmoins = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			nbmoins++;
		i = i + 1;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	if (nbmoins == 1)
		return (-res);
	return (res);
}

void	ft_putbuff(t_stack *lst, char *str, char len)
{
	if ((lst->count + len) > BUFFSIZE)
	{
		write(1, lst->str, lst->count);
		lst->count = 0;
	}
	ft_memcpy(lst->str + lst->count, str, len);
	lst->count += len;
}
