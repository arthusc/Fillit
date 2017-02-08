/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achambon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/08 14:43:29 by achambon          #+#    #+#             */
/*   Updated: 2017/02/08 14:43:32 by achambon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/fillit.h"
#include <stdio.h>

void	ft_found_error(char *fail)
{
	ft_putstr(fail);
	exit(0);
}

void	primary_function(char *buf, int ret)
{
	t_fill	*begin_fill;
	t_map	*map;

	begin_fill = NULL;
	if (ft_verif(buf) == 1)
	{
		begin_fill = prem_map(buf, ret);
		hauteurlongueur(begin_fill);
		coupertetri(begin_fill);
		map = resolution(begin_fill);
		ftfinale(map);
	}
	else
		ft_putstr("error\n");
	free(buf);
}

int		main(int argc, char **argv)
{
	if (argc != 2)
		ft_putstr_fd("usage : fillit target_file\n", 2);
	else
		ft_read(argv[1]);
	return (0);
}
