/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arrutilsextra.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaramuk <mkaramuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 10:31:30 by mkaramuk          #+#    #+#             */
/*   Updated: 2022/03/05 10:36:30 by mkaramuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	get_min(int *lst, int len)
{
	int	i;
	int	num;

	num = lst[len - 1];
	i = len;
	while (i--)
		if (num > lst[i])
			num = lst[i];
	return (num);
}

int	get_max(int *lst, int len)
{
	int	i;
	int	num;

	num = lst[len - 1];
	i = len;
	while (i--)
		if (num < lst[i])
			num = lst[i];
	return (num);
}

int	get_first_min(int *lst, int len, int pivot)
{
	int	i;
	int	num;

	num = lst[len - 1];
	i = len;
	while (i--)
		if (lst[i] < pivot)
			return (i);
	return (-1);
}

int	is_sorted_reverse(int *lst, int len)
{
	int	i;

	i = len - 1;
	while (i--)
		if (lst[i + 1] > lst[i])
			return (0);
	return (1);
}

void	swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
