/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_r_ops.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaramuk <mkaramuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 10:15:55 by mkaramuk          #+#    #+#             */
/*   Updated: 2022/03/05 10:36:11 by mkaramuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"
#include "arrutils.h"
#include "ft_printf.h"

static int	r_helper(int *lst, int len)
{
	int	i;

	if (len < 1)
		return (0);
	i = len - 1;
	while (i > 0)
	{
		swap(lst + i, lst + (i - 1));
		i--;
	}
	return (1);
}

int	ra(t_stack *stack)
{
	if (r_helper(stack->a, stack->a_len))
		ft_printf("ra\n");
	return (0);
}

int	rb(t_stack *stack)
{
	if (r_helper(stack->b, stack->b_len))
		ft_printf("rb\n");
	return (0);
}

int	rr(t_stack *stack)
{
	if (r_helper(stack->a, stack->a_len) && \
		r_helper(stack->b, stack->b_len))
		ft_puts("rr\n");
	return (0);
}
