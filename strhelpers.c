/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strhelpers.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaramuk <mkaramuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 10:02:55 by mkaramuk          #+#    #+#             */
/*   Updated: 2022/03/22 10:21:11 by mkaramuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strhelpers.h"
#include "libft.h"
#include "ft_printf.h"
#include "myutils.h"

char	*skip_numbers(char *str)
{
	while (ft_isdigit(*str) || *str == '-' || *str == '+')
		str++;
	return (str);
}

char	*skip_spaces(char *str)
{
	while (is_space(*str))
		str++;
	return (str);
}

static size_t	ft_strappend_helper_len(char *s1)
{
	size_t	len;

	len = 0;
	while (s1 && s1[len])
		len++;
	return (len);
}

static char	*ft_strappend_helper(char *s1, char *s2)
{
	char	*ret;
	size_t	s1len;
	size_t	s2len;
	size_t	i;

	s1len = ft_strappend_helper_len(s1);
	s2len = ft_strappend_helper_len(s2);
	i = 0;
	ret = (char *)malloc(sizeof(char) * (s1len + s2len + 1));
	if (!ret)
		return (NULL);
	while (s1 && *s1)
		ret[i++] = *s1++;
	while (s2 && *s2)
		ret[i++] = *s2++;
	ret[i] = 0;
	return (ret);
}

void	ft_strappend(char **data, char *buffer)
{
	char	*old;

	old = *data;
	*data = ft_strappend_helper(old, buffer);
	if (old)
		free(old);
}
