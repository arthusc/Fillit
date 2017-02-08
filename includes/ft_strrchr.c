/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gerhard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 13:58:44 by gerhard           #+#    #+#             */
/*   Updated: 2017/01/16 13:13:08 by gerhard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int i;
	int tmp;

	i = 0;
	tmp = -1;
	while (str[i])
	{
		if (str[i] == (char)c)
			tmp = i;
		i++;
	}
	if (tmp >= 0)
		return (char *)(str + tmp);
	if (!c)
		return (char *)(str + i);
	return (NULL);
}
