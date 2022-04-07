/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   myutils.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaramuk <mkaramuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 19:34:50 by mkaramuk          #+#    #+#             */
/*   Updated: 2022/03/22 10:45:56 by mkaramuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "myutils.h"
#include "arrutils.h"

int	is_space(char c)
{
	return (c == ' ');
}

int	get_bit(int num, int index)
{
	return ((num >> index) & 1);
}

int	get_bit_count(int num)
{
	int	ret;

	ret = 0;
	while (num != 0)
	{
		num /= 2;
		ret++;
	}
	return (ret);
}

void	convert_sorted_index(int *lst, int len)
{
	int	i;
	int	*ret;
	int	*srt;

	ret = malloc(sizeof(int) * len);
	srt = sorted(lst, len);
	i = 0;
	while (i < len)
	{
		ret[i] = get_index(srt, len, lst[i]);
		i++;
	}
	i = 0;
	while (i < len)
	{
		lst[i] = ret[i];
		i++;
	}
	free(ret);
	free(srt);
}

int	myatoi(const char *str, int *err)
{
	long			ret;
	int				sign;

	ret = 0;
	sign = 1;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str && (*str >= '0' && *str <= '9'))
	{
		ret = ret * 10 + ((*str) - '0') * sign;
		if (ret > 2147483647 || ret < -2147483648)
			return (*err = 1);
		str++;
	}
	if (*str && !(*str >= '0' && *str <= '9'))
	{
		*err = 1;
		return (-1);
	}
	*err = 0;
	return (ret);
}
