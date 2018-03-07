/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaumann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 13:37:02 by lbaumann          #+#    #+#             */
/*   Updated: 2017/12/05 17:14:14 by lbaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_itoa(int n)
{
	char	*str;
	int		lenght;
	int		i;

	i = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
		n *= -(++i);
	lenght = ft_nlen(n) + i;
	if (!(str = (char *)malloc(lenght + 1 * sizeof(char))))
		return (0);
	while (n > 9)
	{
		*str++ = n % 10 + 48;
		n /= 10;
	}
	*str++ = n + 48;
	if (i == 1)
		*str++ = '-';
	*str = '\0';
	ft_strrev(str - lenght);
	return (str - lenght);
}
