/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_p_ops.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaramuk <mkaramuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 10:17:42 by mkaramuk          #+#    #+#             */
/*   Updated: 2022/03/05 10:17:54 by mkaramuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "stack.h"

int	pb(t_stack *stack)
{
	if (stack->a_len > 0)
	{
		stack->b[stack->b_len++] = stack->a[--stack->a_len];
		ft_printf("pb\n");
		return (1);
	}
	return (0);
}

int	pa(t_stack *stack)
{
	if (stack->b_len > 0)
	{
		stack->a[stack->a_len++] = stack->b[--stack->b_len];
		ft_printf("pa\n");
		return (1);
	}
	return (0);
}
