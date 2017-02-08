/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gerhard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 14:49:29 by gerhard           #+#    #+#             */
/*   Updated: 2017/01/17 18:40:30 by gerhard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define ST str[i]

int		ft_atoi(const char *str)
{
	int i;
	int result;
	int signe;

	i = 0;
	signe = 1;
	result = 0;
	while ((ST >= 9 && ST <= 13) || ST == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signe = -signe;
		i++;
	}
	while (ST)
	{
		if (ft_isdigit(ST) == 1)
			result = result * 10 + (ST - '0');
		else
			i = ft_strlen(str) - 1;
		i++;
	}
	return (signe * result);
}
