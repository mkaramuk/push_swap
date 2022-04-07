/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memman.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaramuk <mkaramuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 10:06:02 by mkaramuk          #+#    #+#             */
/*   Updated: 2022/03/05 10:11:07 by mkaramuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "stack.h"

void	free_split(char **str)
{
	int	i;

	i = 0;
	while (str && str[i])
		free(str[i++]);
	free(str);
}

void	free_stack(t_stack *stack)
{
	if (stack)
	{
		free(stack->a);
		free(stack->b);
		free(stack);
	}
}
