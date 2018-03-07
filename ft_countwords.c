/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countwords.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaumann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 22:41:37 by lbaumann          #+#    #+#             */
/*   Updated: 2017/11/16 15:14:26 by lbaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_countwords(const char *tab, const char separator)
{
	int i;

	i = 0;
	while (*tab)
	{
		while (*tab == separator)
			tab++;
		if (*tab != separator && *tab)
		{
			i++;
			while (*tab != separator && *tab)
				tab++;
		}
	}
	return (i);
}
