/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arrutils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaramuk <mkaramuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 19:35:24 by mkaramuk          #+#    #+#             */
/*   Updated: 2022/03/05 10:31:32 by mkaramuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "arrutils.h"
#include "ft_printf.h"
#include "myutils.h"

int	*copy(int *lst, int len)
{
	int	i;
	int	*ret;

	i = 0;
	ret = malloc(sizeof(int) * len);
	while (i < len)
	{
		ret[i] = lst[i];
		i++;
	}
	return (ret);
}

int	get_index(int *lst, int len, int num)
{
	int	i;

	i = 0;
	while (i < len)
	{
		if (lst[i] == num)
			return (i);
		i++;
	}
	return (-1);
}

int	*sorted(int *lst, int len)
{
	int	i;
	int	j;
	int	*ret;

	ret = copy(lst, len);
	i = 0;
	while (i < len)
	{
		j = i + 1;
		while (j < len)
		{
			if (ret[j] < ret[i])
				swap(ret + (i), ret + j);
			j++;
		}
		i++;
	}
	return (ret);
}

int	average(int *lst, int len)
{
	int	ret;
	int	i;

	i = 0;
	ret = 0;
	while (i < len)
		ret += lst[i++];
	return (ret / len);
}

int	*create_int_list(int size)
{
	int	*ret;

	ret = malloc(sizeof(int) * size);
	if (!ret)
		return (NULL);
	return (ret);
}
