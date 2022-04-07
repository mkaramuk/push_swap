/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorters.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaramuk <mkaramuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 19:50:11 by mkaramuk          #+#    #+#             */
/*   Updated: 2022/03/07 11:13:56 by mkaramuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sorters.h"
#include "stackoperations.h"
#include "arrutils.h"
#include "myutils.h"
#include "stackutils.h"

void	sort_middle_helper(t_stack *stack, int pivot, int limit)
{
	while (get_first_min(stack->a, stack->a_len, pivot) != -1 && \
			stack->a_len > limit)
	{
		if (top_a(stack) <= pivot)
			pb(stack);
		else
			ra(stack);
	}
}

void	sort_three(t_stack *stack)
{
	if (stack->a[1] > stack->a[0] && stack->a[1] > stack->a[2])
	{
		rra(stack);
		if (stack->a[1] < stack->a[2])
			sa(stack);
	}
	else if (stack->a[2] > stack->a[1] && stack->a[2] > stack->a[0])
	{
		ra(stack);
		if (stack->a[1] < stack->a[2])
			sa(stack);
	}
	else if (stack->a[0] > stack->a[1] && stack->a[0] > stack->a[2])
		sa(stack);
}

/* Wheel Sort */
void	sort_middle(t_stack *stack)
{
	convert_sorted_index(stack->a, stack->a_len);
	while (stack->a_len > 2)
		sort_middle_helper(stack, average(stack->a, stack->a_len), 1);
	if (top_a(stack) > stack->a[0])
		sa(stack);
	while (stack->b_len > 0)
	{
		moveup_b(stack, get_index(stack->b, stack->b_len, \
								get_max(stack->b, stack->b_len)));
		pa(stack);
	}
}

/* Radix */
void	sort_bigger(t_stack *stack)
{
	int	maxbit;
	int	nbit;
	int	len;

	convert_sorted_index(stack->a, stack->a_len);
	maxbit = get_bit_count(get_max(stack->a, stack->a_len));
	nbit = 0;
	while (maxbit > 0)
	{
		len = stack->a_len;
		while (len--)
		{
			if (!get_bit(top_a(stack), nbit))
				pb(stack);
			else
				ra(stack);
		}
		nbit++;
		maxbit--;
		while (stack->b_len)
			pa(stack);
	}	
}

void	sort_two(t_stack *stack)
{
	if (stack->a[1] > stack->a[0])
		sa(stack);
}
