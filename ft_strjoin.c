/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaumann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 16:18:03 by lbaumann          #+#    #+#             */
/*   Updated: 2017/11/16 21:10:50 by lbaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		taille;
	char	*str;
	int		i;

	str = NULL;
	if (s1 && s2)
	{
		i = 0;
		taille = (ft_strlen(s1) + ft_strlen(s2));
		if (!(str = (char *)malloc(sizeof(char) + taille + 1)))
			return (0);
		while (*s1)
			str[i++] = *s1++;
		while (*s2)
			str[i++] = *s2++;
		str[i] = '\0';
	}
	return (str);
}
