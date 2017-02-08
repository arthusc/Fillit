/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gerhard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 14:04:30 by gerhard           #+#    #+#             */
/*   Updated: 2017/01/16 13:12:56 by gerhard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *str, char (*f)(char))
{
	char	*ret;
	int		i;

	i = 0;
	if (str == NULL || f == NULL)
		return (NULL);
	ret = (char*)malloc(sizeof(*ret) * (ft_strlen(str) + 1));
	if (!ret)
		return (NULL);
	while (str[i])
	{
		ret[i] = f(str[i]);
		i++;
	}
	ret[i] = '\0';
	return (ret);
}
