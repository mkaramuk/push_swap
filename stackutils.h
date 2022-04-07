/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stackutils.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaramuk <mkaramuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 19:56:14 by mkaramuk          #+#    #+#             */
/*   Updated: 2022/03/03 19:56:44 by mkaramuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACKUTILS_H
# define STACKUTILS_H
# include "stack.h"

int	moveup_a(t_stack *stack, int index);
int	moveup_b(t_stack *stack, int index);

#endif