/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gerhard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 13:13:22 by gerhard           #+#    #+#             */
/*   Updated: 2017/01/16 13:12:20 by gerhard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	*ft_mrcpy(void *dst, const void *src, size_t n)
{
	unsigned char *s;
	unsigned char *d;

	s = (unsigned char *)src + n - 1;
	d = (unsigned char *)dst + n - 1;
	while (n)
	{
		*d = *s;
		--d;
		--s;
		--n;
	}
	return (dst);
}

void			*ft_memmove(void *s1, void *s2, size_t n)
{
	if (s1 > s2 && s1 <= s2 + n)
		return (ft_mrcpy(s1, s2, n));
	return (ft_memcpy(s1, s2, n));
}
