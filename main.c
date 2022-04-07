/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaramuk <mkaramuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 11:55:08 by mkaramuk          #+#    #+#             */
/*   Updated: 2022/03/22 10:56:28 by mkaramuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "ft_printf.h"
#include "libft.h"
#include "myutils.h"
#include "stack.h"
#include "checkers.h"
#include "arrutils.h"
#include "sorters.h"
#include "memman.h"
#include "argparser.h"

void	error(void)
{
	ft_puts("Error\n");
}

t_stack	*load_stack(char **args, int len)
{
	t_stack	*ret;
	int		i;
	int		err;

	ret = create_stack(len);
	if (!args || !ret)
	{
		free_stack(ret);
		return (NULL);
	}
	i = 0;
	while (i < len)
	{
		ret->a[ret->a_len++] = myatoi(args[i++], &err);
		if (err)
		{
			free_stack(ret);
			return (NULL);
		}
	}
	return (ret);
}

void	sort_stack(t_stack *stack)
{
	if (!is_sorted_reverse(stack->a, stack->a_len))
	{
		if (stack->a_len == 2)
			sort_two(stack);
		else if (stack->a_len == 3)
			sort_three(stack);
		else if (stack->a_len <= 160)
			sort_middle(stack);
		else
			sort_bigger(stack);
	}
}

void	error_exit(t_stack *stack, char **args)
{
	error();
	if (args)
		free_split(args);
	if (stack)
		free_stack(stack);
	exit(1);
}

int	main(int argc, char **argv)
{
	char	**args;
	t_stack	*stack;
	int		len;

	if (argc > 1)
	{
		if (!check_args(argc, argv))
			error_exit(NULL, NULL);
		len = count_arg_numbers(argc, argv);
		args = parse_args(argc, argv);
		stack = load_stack(args, len);
		if (stack && args && check_dup(stack->a, stack->a_len))
			sort_stack(stack);
		else
			error_exit(stack, args);
		free_stack(stack);
		free_split(args);
		return (0);
	}
	else if (argc == 1)
		return (0);
	error();
	return (1);
}
