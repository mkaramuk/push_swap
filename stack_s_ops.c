/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_s_ops.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaramuk <mkaramuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 10:14:45 by mkaramuk          #+#    #+#             */
/*   Updated: 2022/03/05 10:36:21 by mkaramuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"
#include "arrutils.h"
#include "ft_printf.h"

int	s_helper(int *lst, int len)
{
	if (len >= 2)
	{
		swap(lst + len - 1, lst + len - 2);
		return (1);
	}
	return (0);
}

int	sb(t_stack *stack)
{
	if (s_helper(stack->b, stack->b_len))
		return (ft_puts("sb\n"));
	return (0);
}

int	sa(t_stack *stack)
{
	if (s_helper(stack->a, stack->a_len))
		return (ft_puts("sa\n"));
	return (0);
}

int	ss(t_stack *stack)
{
	if (s_helper(stack->b, stack->b_len) && \
		s_helper(stack->a, stack->a_len))
		return (ft_puts("ss\n"));
	return (0);
}
