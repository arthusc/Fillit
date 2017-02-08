/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gerhard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 14:58:54 by gerhard           #+#    #+#             */
/*   Updated: 2017/01/16 13:12:48 by gerhard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define S1 s1[i]
#define S2 s2[i]

int		ft_strequ(char const *s1, char const *s2)
{
	int i;

	i = 0;
	if (!s1 || !s2)
		return (0);
	while (S1 && S2)
	{
		if (S1 != S2)
			return (0);
		i++;
	}
	if (S1 == '\0' && S2 == S1)
		return (1);
	return (0);
}
