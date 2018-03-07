/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaumann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 12:44:58 by lbaumann          #+#    #+#             */
/*   Updated: 2017/11/16 16:33:04 by lbaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	int		i;

	str = NULL;
	if (s && f)
	{
		if (!(str = ft_strdup(s)))
			return (0);
		i = 0;
		while (str[i])
		{
			str[i] = (*f)(str[i]);
			i++;
		}
	}
	return (str);
}
