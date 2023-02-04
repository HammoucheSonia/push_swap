/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shammouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 23:55:22 by shammouc          #+#    #+#             */
/*   Updated: 2022/09/11 00:06:54 by shammouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include <stdlib.h>

# define INT_MIN -2147483648
# define INT_MAX 2147483647
# define BUFFSIZE 5

typedef struct s_stack
{
	int		*stack_a;
	int		len_a;
	int		*stack_b;
	int		len_b;
	int		pivot;
	int		max;
	int		max_n;
	int		count;
	char	str[BUFFSIZE];
}t_stack;

void		ft_putchar(char c);
void		ft_putstr(char *str);
long int	ft_atoi(const char *str);
void		ft_parcing(char **list);
void		ft_bzero(void *s, size_t n);
void		*ft_memcpy(void *dest, const void *src, size_t n);
void		ft_memdel(void **ap);
void		ft_algo(t_stack *list);
int			ft_sens_pivot(t_stack *list);
void		ft_pivot(t_stack *list);
int			ft_sens(t_stack *list, int max);
int			ft_sens_fin(t_stack *list);
int			ft_next_max(int *stack, int len, int tmp);
int			ft_next_min(int *stack, int len, int tmp);
int			ft_max(int *stack, int len);
int			ft_min(int *stack, int len);
int			ft_nb(int *stack, int len, int nb);
int			ft_issort(t_stack *list);
int			sort_realistack_a(t_stack *list);
int			sort_stack_a(t_stack *list);
void		swap_a(t_stack *list);
void		swap_b(t_stack *list);
void		swap_ab(t_stack *list);
void		push_a(t_stack *list);
void		push_b(t_stack *list);
void		rotate_a(t_stack *list);
void		rotate_b(t_stack *list);
void		rotate_ab(t_stack *list);
void		rev_rotate_a(t_stack *list);
void		rev_rotate_b(t_stack *list);
void		rev_rotate_ab(t_stack *list);
void		ft_putbuff(t_stack *list, char *str, char len);
void		ft_error(t_stack *list);
void		ft_free(t_stack *list);

#endif
