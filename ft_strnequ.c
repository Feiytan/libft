/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaumann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 14:43:12 by lbaumann          #+#    #+#             */
/*   Updated: 2017/11/18 13:14:59 by lbaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t i;

	i = 0;
	if (s1 && s2)
	{
		while ((s1[i] == s2[i]) && s1[i] && s2[i] && (i < n))
			i++;
		if (i == n)
			i--;
		if (s1[i] == s2[i])
			return (1);
	}
	return (0);
}
