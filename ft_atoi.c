/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaumann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 16:56:12 by lbaumann          #+#    #+#             */
/*   Updated: 2017/11/18 20:42:08 by lbaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long somme;
	long i;

	i = 1;
	somme = 0;
	while (ft_isspace(*str))
		str++;
	if (*str == '-')
	{
		str++;
		i = -1;
	}
	else if (*str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		somme += (*str++ - 48);
		if (*str >= '0' && *str <= '9')
			somme *= 10;
	}
	return ((int)somme * (int)i);
}
