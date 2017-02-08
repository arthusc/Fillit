/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_coord.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gerhard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/02 10:20:12 by gerhard           #+#    #+#             */
/*   Updated: 2017/02/08 14:30:50 by achambon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/fillit.h"
#include <stdio.h>

int		get_top(t_fill *l_tetri)
{
	int x;
	int y;

	y = 0;
	while (y <= 3)
	{
		x = 0;
		while (l_tetri->tetri[y][x] != '\0')
		{
			if (l_tetri->tetri[y][x] == '#')
				return (y);
			x++;
		}
		y++;
	}
	return (y);
}

int		get_left(t_fill *l_tetri)
{
	int x;
	int y;

	x = 0;
	y = 0;
	while (l_tetri->tetri[y][x] != '\0')
	{
		while (y < 4)
		{
			if (l_tetri->tetri[y][x] == '#')
				return (x);
			y++;
		}
		y = 0;
		x++;
	}
	return (x);
}

int		get_bottom(t_fill *l_tetri)
{
	int x;
	int y;

	y = 3;
	while (y >= 0)
	{
		x = 3;
		while (x >= 0)
		{
			if (l_tetri->tetri[y][x] == '#')
				return (y);
			x--;
		}
		y--;
	}
	return (y);
}

int		get_right(t_fill *l_tetri)
{
	int x;
	int y;

	x = 3;
	while (x >= 0)
	{
		y = 0;
		while (y <= 3)
		{
			if (l_tetri->tetri[y][x] == '#')
				return (x);
			y++;
		}
		x--;
	}
	return (x);
}

void	hauteurlongueur(t_fill *tetri)
{
	while (tetri)
	{
		tetri->height = get_bottom(tetri) - get_top(tetri) + 1;
		tetri->length = get_right(tetri) - get_left(tetri) + 1;
		tetri = tetri->next;
	}
}
