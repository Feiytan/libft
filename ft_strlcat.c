/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaumann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 17:18:57 by lbaumann          #+#    #+#             */
/*   Updated: 2017/11/18 13:10:32 by lbaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t tdst;
	size_t tsrc;

	tdst = ft_strlen(dst);
	tsrc = ft_strlen(src);
	i = 0;
	if (size < tdst)
		return (tsrc + size);
	if (size == 0)
		return (0);
	while (tdst + i < size - 1 && src[i])
	{
		dst[tdst + i] = src[i];
		i++;
	}
	dst[tdst + i] = '\0';
	return (tdst + tsrc);
}
