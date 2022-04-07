/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_rr_ops.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaramuk <mkaramuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 10:16:42 by mkaramuk          #+#    #+#             */
/*   Updated: 2022/03/05 10:36:15 by mkaramuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"
#include "ft_printf.h"
#include "arrutils.h"

static int	rr_helper(int *lst, int len)
{
	int	i;

	if (len < 1)
		return (0);
	i = 1;
	while (i < len)
	{
		swap(lst + i, lst + (i - 1));
		i++;
	}
	return (1);
}

int	rra(t_stack *stack)
{
	if (rr_helper(stack->a, stack->a_len))
		return (ft_puts("rra\n"));
	return (0);
}

int	rrb(t_stack *stack)
{
	if (rr_helper(stack->b, stack->b_len))
		return (ft_puts("rrb\n"));
	return (0);
}

int	rrr(t_stack *stack)
{
	if (rr_helper(stack->b, stack->b_len) && \
		rr_helper(stack->a, stack->a_len))
		ft_puts("rrr\n");
	return (0);
}
