/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gerhard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/31 12:07:17 by gerhard           #+#    #+#             */
/*   Updated: 2017/02/08 14:32:09 by achambon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/fillit.h"

int		count_tetri(t_fill *begin_fill)
{
	t_fill	*l_fill;

	l_fill = begin_fill->prev;
	return (l_fill->alpha - 64);
}

t_map	*finalmap(int size)
{
	int		i;
	int		j;
	t_map	*map;

	if (!(map = (t_map*)malloc(sizeof(t_map) * size)))
		return (NULL);
	map->size = size;
	if (!(map->megamap = (char**)malloc(sizeof(char*) * size)))
		return (NULL);
	j = 0;
	while (j < size)
	{
		if (map->megamap[j])
			free(map->megamap[j]);
		map->megamap[j] = ft_strnew(size);
		i = 0;
		while (i < size)
		{
			map->megamap[j][i] = '.';
			i++;
		}
		j++;
	}
	return (map);
}

int		size_map(t_fill *lst)
{
	int		a;
	int		size;

	a = 2;
	while ((a * a) < count_tetri(lst) * 4)
		a++;
	size = a;
	return (size);
}

t_map	*resolution(t_fill *begin_fill)
{
	t_map	*map;
	int		size;

	map = NULL;
	size = size_map(begin_fill);
	map = finalmap(size);
	while (recursivite(map, begin_fill) == 0)
	{
		size++;
		map = finalmap(size);
	}
	return (map);
}
