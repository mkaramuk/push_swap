/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stackutils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaramuk <mkaramuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 19:36:17 by mkaramuk          #+#    #+#             */
/*   Updated: 2022/03/06 11:22:38 by mkaramuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stackutils.h"
#include "stackoperations.h"

int	moveup_a(t_stack *stack, int index)
{
	int	num;

	num = stack->a[index];
	while (top_a(stack) != num && stack->a_len > 1)
	{
		if (index < stack->a_len / 2)
			rra(stack);
		else
			ra(stack);
	}
	return (0);
}

int	moveup_b(t_stack *stack, int index)
{
	int	num;

	num = stack->b[index];
	while (top_b(stack) != num && stack->b_len > 1)
	{
		if (index < stack->b_len / 2)
			rrb(stack);
		else
			rb(stack);
	}
	return (0);
}
