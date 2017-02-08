/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gerhard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 14:20:38 by gerhard           #+#    #+#             */
/*   Updated: 2017/01/16 13:12:47 by gerhard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char *dest;

	dest = malloc(ft_strlen(str) + 1);
	if (!dest)
		return (NULL);
	ft_strcpy(dest, str);
	return (dest);
}
