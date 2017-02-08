/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gerhard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 14:31:17 by gerhard           #+#    #+#             */
/*   Updated: 2017/01/16 13:13:13 by gerhard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *str, unsigned int start, size_t len)
{
	size_t	i;
	char	*dest;

	if (str == NULL)
		return (NULL);
	dest = (char*)malloc(sizeof(*dest) * (len + 1));
	if (!dest)
		return (NULL);
	i = 0;
	while (i < len)
	{
		dest[i] = str[start];
		start++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
