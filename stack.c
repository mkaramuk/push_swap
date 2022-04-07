/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaramuk <mkaramuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 19:40:49 by mkaramuk          #+#    #+#             */
/*   Updated: 2022/03/22 10:23:53 by mkaramuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_printf.h"
#include "stack.h"
#include "arrutils.h"

t_stack	*create_stack(int size)
{
	t_stack	*ret;

	ret = malloc(sizeof(t_stack));
	if (!ret)
		return (NULL);
	ret->a = create_int_list(size);
	ret->b = create_int_list(size);
	if (!ret->a || !ret->b)
	{
		free(ret->a);
		free(ret->b);
		free(ret);
		return (NULL);
	}
	ret->a_len = 0;
	ret->b_len = 0;
	return (ret);
}

int	top_a(t_stack *stack)
{
	return (stack->a[stack->a_len - 1]);
}

int	top_b(t_stack *stack)
{
	return (stack->b[stack->b_len - 1]);
}

void	print_stack(t_stack *stack)
{
	int	i;

	if (stack->b_len > stack->a_len)
		i = stack->b_len;
	else
		i = stack->a_len;
	while (i--)
	{
		if (i < stack->a_len)
			ft_putnbr(stack->a[i]);
		else
			ft_putchar(' ');
		ft_puts("\t\t");
		if (i < stack->b_len)
			ft_putnbr(stack->b[i]);
		else
			ft_putchar(' ');
		ft_putchar('\n');
	}
	ft_puts("_\t\t_\na\t\tb\n");
}
