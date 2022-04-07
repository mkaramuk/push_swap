/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argparser.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaramuk <mkaramuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 10:16:03 by mkaramuk          #+#    #+#             */
/*   Updated: 2022/03/22 10:53:16 by mkaramuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "argparser.h"
#include "myutils.h"
#include "strhelpers.h"
#include "memman.h"
#include "ft_printf.h"
#include "libft.h"

static void	parse_args_helper(char **str, char *arg)
{
	char	**split;
	int		len;

	if (is_parse_need(arg))
	{
		split = ft_split(arg, ' ');
		len = 0;
		while (split[len])
			len++;
		while (len-- > 0)
		{
			ft_strappend(str, " ");
			ft_strappend(str, split[len]);
		}
		free_split(split);
	}
	else
	{
		ft_strappend(str, " ");
		ft_strappend(str, arg);
	}
}

char	**parse_args(int argc, char **argv)
{
	char	*str;
	char	**ret;
	int		i;

	i = argc - 1;
	str = NULL;
	while (i > 0)
	{
		if (!is_valid_arg(argv[i]))
		{
			free(str);
			return (NULL);
		}
		parse_args_helper(&str, argv[i--]);
	}
	ret = ft_split(str, ' ');
	free(str);
	return (ret);
}
