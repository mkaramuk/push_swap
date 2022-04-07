/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strhelpers.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaramuk <mkaramuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 10:03:04 by mkaramuk          #+#    #+#             */
/*   Updated: 2022/03/05 10:04:14 by mkaramuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRHELPERS_H
# define STRHELPERS_H

void	ft_strappend(char **data, char *buffer);
char	*skip_spaces(char *str);
char	*skip_numbers(char *str);
#endif