/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gerhard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/26 16:31:00 by gerhard           #+#    #+#             */
/*   Updated: 2017/01/16 13:13:10 by gerhard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_nb_words(const char *s, char c)
{
	int		nword;
	int		i;

	i = 0;
	nword = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			nword++;
		i++;
	}
	return (nword);
}

static int		ft_sword(const char *s, char c)
{
	int		len;

	len = 0;
	while (*s != c)
	{
		len++;
		s++;
	}
	return (len);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**res;
	int		nword;
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	nword = ft_nb_words(s, c);
	res = (char **)malloc(sizeof(char*) * (nword + 1));
	if (res == NULL)
		return (NULL);
	while (nword--)
	{
		while (*s == c && *s)
			s++;
		res[i] = ft_strsub((const char *)s, 0, ft_sword(s, c));
		if (res[i] == NULL)
			return (NULL);
		s = s + ft_sword(s, c);
		i++;
	}
	res[i] = NULL;
	return (res);
}
