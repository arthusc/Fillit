/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gerhard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 12:08:36 by gerhard           #+#    #+#             */
/*   Updated: 2017/01/17 16:52:24 by gerhard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define S1 str1[i]
#define S2 str2[i]

int		ft_strncmp(const char *s1, const char *s2, int n)
{
	int					i;
	unsigned	char	*str1;
	unsigned	char	*str2;

	str1 = (unsigned char*)s1;
	str2 = (unsigned char*)s2;
	i = 0;
	if (n == 0)
		return (n);
	while (S1 && S2 && i < n)
	{
		if (S1 != S2)
			return (S1 - S2);
		i++;
	}
	if (S1 && S2 == '\0')
		return (S1);
	if (S2 && S1 == '\0')
		return (-S2);
	if (S2 && S1 && S2 == S1)
		return (0);
	return (0);
}
