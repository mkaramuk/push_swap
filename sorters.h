/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorters.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaramuk <mkaramuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 19:54:25 by mkaramuk          #+#    #+#             */
/*   Updated: 2022/03/06 17:12:31 by mkaramuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORTERS_H
# define SORTERS_H
# include "stack.h"

void	sort_middle_helper(t_stack *stack, int pivot, int limit);
void	sort_three(t_stack *stack);
void	sort_middle(t_stack *stack);
void	sort_five(t_stack *stack);
void	sort_bigger(t_stack *stack);
void	sort_two(t_stack *stack);

#endif