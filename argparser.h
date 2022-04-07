/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argparser.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaramuk <mkaramuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 10:00:34 by mkaramuk          #+#    #+#             */
/*   Updated: 2022/03/05 10:35:33 by mkaramuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARGPARSER_H
# define ARGPARSER_H

char	**parse_args(int argc, char **argv);
int		is_valid_arg(char *arg);
int		count_arg_numbers(int argc, char **argv);
int		is_parse_need(char *str);
int		count_numbers(char *str);

#endif