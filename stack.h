/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaramuk <mkaramuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 19:41:13 by mkaramuk          #+#    #+#             */
/*   Updated: 2022/03/05 10:38:21 by mkaramuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H
# define STACK_H

typedef struct s_stack
{
	int	*a;
	int	*b;
	int	a_len;
	int	b_len;
}	t_stack;

t_stack	*create_stack(int size);
int		top_a(t_stack *stack);
int		top_b(t_stack *stack);
void	print_stack(t_stack *stack);

#endif