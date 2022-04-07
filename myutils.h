/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   myutils.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaramuk <mkaramuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 20:00:57 by mkaramuk          #+#    #+#             */
/*   Updated: 2022/03/22 10:42:06 by mkaramuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MYUTILS_H
# define MYUTILS_H
# include "stack.h"

int		get_bit(int num, int index);
int		get_bit_count(int num);
void	convert_sorted_index(int *lst, int len);
int		myatoi(const char *str, int *err);
void	error(void);
int		is_space(char c);
#endif