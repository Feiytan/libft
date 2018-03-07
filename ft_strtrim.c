/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaumann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 16:56:13 by lbaumann          #+#    #+#             */
/*   Updated: 2017/11/16 21:12:00 by lbaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s)
{
	char *str;
	char *dst;

	str = NULL;
	dst = NULL;
	if (s)
	{
		if (!(dst = ft_strdup(s)))
			return (0);
		while (*dst == ' ' || *dst == '\t' || *dst == '\n')
			dst++;
		ft_strrev(dst);
		while (*dst == ' ' || *dst == '\t' || *dst == '\n')
			dst++;
		ft_strrev(dst);
		if (!(str = (char *)malloc(sizeof(char) * ft_strlen(dst) + 1)))
			return (0);
		ft_strcpy(str, dst);
	}
	return (str);
}
