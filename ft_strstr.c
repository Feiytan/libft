/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaumann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 22:23:29 by lbaumann          #+#    #+#             */
/*   Updated: 2017/11/17 20:14:24 by lbaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;

	if (!*haystack && !*needle)
		return ((char *)haystack);
	while (*haystack)
	{
		i = 0;
		while (needle[i] == haystack[i] || !(needle[i]))
			if (!(needle[i++]))
				return ((char *)haystack);
		haystack++;
	}
	return (0);
}
