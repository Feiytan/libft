/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaumann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 16:18:03 by lbaumann          #+#    #+#             */
/*   Updated: 2017/12/02 17:34:41 by lbaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoinfree(char *s1, char const *s2)
{
	int		taille;
	char	*tmp;
	char	*str;
	int		i;

	str = NULL;
	i = 0;
	tmp = s1;
	taille = (ft_strlen(s1) + ft_strlen(s2));
	if (!(str = (char *)malloc(sizeof(char) + taille + 1)))
		return (0);
	while (*s1)
		str[i++] = *s1++;
	while (*s2)
		str[i++] = *s2++;
	str[i] = '\0';
	free(tmp);
	return (str);
}
