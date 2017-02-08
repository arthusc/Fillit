/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gerhard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 10:44:25 by gerhard           #+#    #+#             */
/*   Updated: 2017/01/16 13:12:02 by gerhard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	i;
	char	*s1;
	char	*s2;

	i = 0;
	s1 = (char*)src;
	s2 = (char*)dest;
	while (i < n)
	{
		s2[i] = s1[i];
		if (s1[i] == (char)c)
		{
			return (&s2[i + 1]);
		}
		i++;
	}
	return (NULL);
}
