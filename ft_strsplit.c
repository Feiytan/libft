/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaumann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 22:34:19 by lbaumann          #+#    #+#             */
/*   Updated: 2018/03/03 06:23:22 by lbaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

static char		**ft_split(char const *s, char c, int k)
{
	char	**str;
	int		i;
	int		nbchar;
	int		j;

	j = 0;
	if (!(str = (char**)malloc(sizeof(char*) * k + 1)))
		return (0);
	while (j < k)
	{
		nbchar = 0;
		while (*s == c)
			s++;
		while (s[nbchar] != c && s[nbchar])
			nbchar++;
		if (!(str[j] = (char*)malloc(sizeof(char) * nbchar + 1)))
			return (0);
		i = 0;
		while (i < nbchar)
			str[j][i++] = *s++;
		str[j++][i] = '\0';
	}
	str[j] = NULL;
	return (str);
}

char			**ft_strsplit(char const *s, char c)
{
	if (s && c)
		return (ft_split(s, c, ft_countwords(s, c)));
	return (0);
}
