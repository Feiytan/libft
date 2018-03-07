/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swapchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaumann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/17 15:18:58 by lbaumann          #+#    #+#             */
/*   Updated: 2018/01/17 15:20:37 by lbaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swapchar(char *a, char *b)
{
	char temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
