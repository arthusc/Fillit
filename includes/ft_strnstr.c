/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gerhard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 13:23:45 by gerhard           #+#    #+#             */
/*   Updated: 2017/01/16 13:13:06 by gerhard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *src, const char *str, size_t n)
{
	size_t i;
	size_t j;
	size_t tmp;

	i = 0;
	if (str[0] == '\0')
		return (char *)(src);
	while (src[i] && i < n)
	{
		j = 0;
		tmp = i;
		while (src[i] == str[j] && i < n)
		{
			i++;
			j++;
			if (!str[j])
				return (char *)(src + i - j);
		}
		i = tmp;
		i++;
	}
	return (NULL);
}
