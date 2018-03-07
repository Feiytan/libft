/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaumann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 16:52:49 by lbaumann          #+#    #+#             */
/*   Updated: 2017/11/16 16:54:41 by lbaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*str;

	str = NULL;
	if (s)
	{
		i = 0;
		if (!(str = (char *)malloc(sizeof(char) * len + 1)))
			return (0);
		while (len-- > 0)
			str[i++] = s[start++];
		str[i] = '\0';
	}
	return (str);
}
