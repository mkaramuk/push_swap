/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argparserextra.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaramuk <mkaramuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 10:30:40 by mkaramuk          #+#    #+#             */
/*   Updated: 2022/03/22 09:56:41 by mkaramuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "argparser.h"
#include "libft.h"
#include "myutils.h"
#include "ft_printf.h"
#include "strhelpers.h"

int	count_numbers(char *str)
{
	int	nc;

	nc = 0;
	while (*str)
	{
		str = skip_spaces(str);
		if (!*str)
			break ;
		nc++;
		str = skip_numbers(str);
	}
	return (nc);
}

int	is_parse_need(char *str)
{
	while (*str)
		if (is_space(*str++))
			return (1);
	return (0);
}

int	count_arg_numbers(int argc, char **argv)
{
	int	nc;
	int	i;

	i = argc - 1;
	nc = 0;
	while (i > 0)
	{
		if (is_parse_need(argv[i]))
			nc += count_numbers(argv[i]);
		else
			nc++;
		i--;
	}
	return (nc);
}

int	is_valid_arg(char *arg)
{
	while (*arg)
	{
		if (!ft_isdigit(*arg) && *arg != '-' && !is_space(*arg) && *arg != '+')
			return (0);
		arg++;
	}
	return (1);
}
