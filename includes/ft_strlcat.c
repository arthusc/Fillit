/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gerhard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 12:39:05 by gerhard           #+#    #+#             */
/*   Updated: 2017/01/16 13:12:52 by gerhard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t d_len;
	size_t s_len;

	i = 0;
	d_len = ft_strlen(dst);
	s_len = ft_strlen(src);
	if (size > (d_len + 1))
	{
		while (i < size - d_len - 1)
		{
			dst[d_len + i] = src[i];
			i++;
		}
		dst[d_len + i] = '\0';
	}
	if (size >= d_len)
		return (d_len + s_len);
	return ((d_len + s_len) - (d_len - size));
}
