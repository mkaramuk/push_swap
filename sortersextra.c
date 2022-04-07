/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortersextra.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaramuk <mkaramuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 15:15:14 by mkaramuk          #+#    #+#             */
/*   Updated: 2022/03/06 18:23:14 by mkaramuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sorters.h"
#include "stack.h"
#include "stackoperations.h"
#include "arrutils.h"
#include "myutils.h"
#include "stackutils.h"
#include <stdlib.h>

int	*greaters(int *lst, int len, int num, int *outlen)
{
	int	*ret;
	int	j;
	int	i;

	i = 0;
	j = 0;
	while (i < len)
	{
		if (lst[i] > num)
			j++;
		i++;
	}
	ret = create_int_list(j);
	i = 0;
	j = 0;
	while (i < len)
	{
		if (lst[i] > num)
			ret[j++] = lst[i];
		i++;
	}
	*outlen = j;
	return (ret);
}

int	get_min_above(int *lst, int len, int pivot)
{
	int	*great;
	int	ret;
	int	ol;

	great = greaters(lst, len, pivot, &ol);
	ret = get_index(lst, len, get_min(great, ol));
	free(great);
	return (ret);
}

void	sort_five(t_stack *stack)
{
	sort_middle(stack);
}
