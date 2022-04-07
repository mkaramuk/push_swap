/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stackoperations.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaramuk <mkaramuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 19:58:02 by mkaramuk          #+#    #+#             */
/*   Updated: 2022/03/05 10:07:09 by mkaramuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACKOPERATIONS_H
# define STACKOPERATIONS_H
# include "stack.h"

int	sb(t_stack *stack);
int	rra(t_stack *stack);
int	rrb(t_stack *stack);
int	rrr(t_stack *stack);
int	ra(t_stack *stack);
int	rb(t_stack *stack);
int	rr(t_stack *stack);
int	rr(t_stack *stack);
int	pb(t_stack *stack);
int	pa(t_stack *stack);
int	sa(t_stack *stack);
int	ss(t_stack *stack);

#endif