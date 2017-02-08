/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gerhard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/15 14:36:26 by gerhard           #+#    #+#             */
/*   Updated: 2017/01/16 13:13:14 by gerhard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_st(const char *s)
{
	int i;

	i = 0;
	while (s[i] == 32 || s[i] == 10 || s[i] == 9)
		i++;
	return (i);
}

static	int	ft_end(const char *s)
{
	int len;

	len = ft_strlen(s) - 1;
	while (s[len] == 32 || s[len] == 9 || s[len] == 10)
		len--;
	return (len + 1);
}

char		*ft_strtrim(const char *s)
{
	char	*res;

	if (!s)
		return (NULL);
	if (ft_end(s) - ft_st(s) < 0)
		return (ft_strnew(0));
	res = ft_strnew(ft_end(s) - ft_st(s));
	if (!res)
		return (NULL);
	res = ft_strncpy(res, s + ft_st(s), ft_end(s) - ft_st(s));
	return (res);
}
