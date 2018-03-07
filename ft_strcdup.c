/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaumann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 13:44:12 by lbaumann          #+#    #+#             */
/*   Updated: 2018/02/02 21:41:21 by lbaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strcdup(const char *s1, const char c)
{
	int		i;
	char	*dest;

	i = 0;
	if (!(dest = (char *)malloc((ft_strclen(s1, c) + 1) * sizeof(*s1))))
		return (0);
	while (s1[i] && s1[i] != c)
	{
		dest[i] = s1[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
