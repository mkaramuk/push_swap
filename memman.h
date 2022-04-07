/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memman.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaramuk <mkaramuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 10:05:30 by mkaramuk          #+#    #+#             */
/*   Updated: 2022/03/05 10:06:49 by mkaramuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MEMMAN_H
# define MEMMAN_H
# include "stack.h"

void	free_split(char **str);
void	free_stack(t_stack *stack);

#endif
