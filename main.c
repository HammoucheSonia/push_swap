/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shammouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 23:21:32 by shammouc          #+#    #+#             */
/*   Updated: 2022/09/10 23:27:53 by shammouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

static	t_stack	*struct_init(int argc, char **argv)
{
	t_stack	*list;
	int		i;

	i = 0;
	list = NULL;
	list = malloc(sizeof(t_stack));
	if (!list)
		ft_free(list);
	ft_bzero(list, sizeof(t_stack));
	list->len_a = argc - 2;
	list->len_b = -1;
	list->stack_a = malloc(sizeof(int) * argc);
	if (!list->stack_a)
		ft_free(list);
	list->stack_b = malloc(sizeof(int) * argc);
	if (!list->stack_b)
		ft_free(list);
	while (--argc > 0)
		list->stack_a[i++] = ft_atoi(argv[argc]);
	return (list);
}

int	main(int argc, char **argv)
{
	t_stack	*pile;

	if (argc == 1)
		return (0);
	ft_parcing(&argv[1]);
	pile = struct_init(argc, argv);
	ft_algo(pile);
	ft_free(pile);
	return (0);
}
