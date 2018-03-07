/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaumann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 19:38:51 by lbaumann          #+#    #+#             */
/*   Updated: 2017/11/16 15:37:09 by lbaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*result;
	const unsigned char	*str;

	result = (unsigned char *)dst;
	str = (unsigned char *)src;
	if (dst < src)
		return (ft_memcpy(dst, src, len));
	while (len >= 1)
	{
		*(result + len - 1) = *(str + len - 1);
		len--;
	}
	return (result);
}
