/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaumann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 22:23:29 by lbaumann          #+#    #+#             */
/*   Updated: 2017/11/18 17:43:32 by lbaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	if (!*needle)
		return ((char *)haystack);
	if (haystack == needle)
		return ((char *)haystack);
	while (*haystack && len)
	{
		i = 0;
		while (haystack[i] == needle[i] && needle[i] && len)
		{
			len--;
			i++;
		}
		if (!needle[i])
			return ((char *)haystack);
		len += i - 1;
		haystack++;
	}
	return (0);
}
