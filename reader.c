/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reader.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gerhard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/21 13:58:35 by gerhard           #+#    #+#             */
/*   Updated: 2017/02/02 13:47:14 by gerhard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/fillit.h"

void	ft_read(char *file)
{
	int		fd;
	int		ret;
	char	*buf;

	if (!(buf = malloc(sizeof(char*) * 548)))
		return ;
	fd = open(file, O_RDONLY);
	if (fd == -1)
		ft_found_error("error\n");
	ret = read(fd, buf, 547);
	if (ret > 546)
		ft_found_error("error\n");
	if (buf[ret - 1] == '\n' && buf[ret - 2] == '\n')
		ft_found_error("error\n");
	buf[ret] = '\0';
	if (close(fd) == -1)
		ft_found_error("error\n");
	primary_function(buf, ret);
}
