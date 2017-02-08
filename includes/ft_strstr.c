/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gerhard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 12:45:12 by gerhard           #+#    #+#             */
/*   Updated: 2017/01/16 13:13:11 by gerhard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *src, const char *str)
{
	int i;
	int j;
	int tmp;

	i = 0;
	if (str[0] == '\0')
		return (char *)(src);
	while (src[i])
	{
		j = 0;
		tmp = i;
		while (src[i] == str[j])
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
