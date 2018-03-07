/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaumann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 14:04:52 by lbaumann          #+#    #+#             */
/*   Updated: 2017/11/17 21:32:33 by lbaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	str = NULL;
	if (s && f)
	{
		if (!(str = ft_strdup(s)))
			return (0);
		i = 0;
		while (str[i])
		{
			str[i] = (*f)(i, str[i]);
			i++;
		}
	}
	return (str);
}
