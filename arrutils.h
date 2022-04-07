/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arrutils.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaramuk <mkaramuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 19:37:25 by mkaramuk          #+#    #+#             */
/*   Updated: 2022/03/05 10:35:16 by mkaramuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRUTILS_H
# define ARRUTILS_H

int		*copy(int *lst, int len);
int		get_index(int *lst, int len, int num);
int		*sorted(int *lst, int len);
void	print_list(int *lst, int len);
int		get_first_min(int *lst, int len, int pivot);
void	swap(int *a, int *b);
int		is_sorted_reverse(int *lst, int len);
int		average(int *lst, int len);
int		get_min(int *lst, int len);
int		*create_int_list(int size);
int		get_max(int *lst, int len);

#endif