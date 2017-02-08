/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gerhard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/15 13:03:46 by gerhard           #+#    #+#             */
/*   Updated: 2017/01/17 13:43:33 by gerhard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_size(int n)
{
	int i;

	i = 1;
	if (n < 0)
		i++;
	while (n <= -10 || n >= 10)
	{
		i++;
		n = (n - n % 10) / 10;
	}
	return (i);
}

char		*ft_itoa(int n)
{
	char	*res;
	int		len;

	if (n == 0)
		return (ft_strdup("0"));
	else if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = ft_size(n);
	res = ft_strnew(len);
	if (!res)
		return (NULL);
	res[len] = '\0';
	if (n < 0)
	{
		res[0] = '-';
		n = -n;
	}
	while (n >= 10)
	{
		res[len - 1] = (n % 10) + '0';
		n = (n - n % 10) / 10;
		len--;
	}
	res[len - 1] = (n % 10) + '0';
	return (res);
}
