/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaumann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 13:55:43 by lbaumann          #+#    #+#             */
/*   Updated: 2017/11/23 12:35:52 by lbaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *tmp;

	tmp = (t_list *)malloc(sizeof(t_list));
	if (tmp)
	{
		if (content)
		{
			tmp->content_size = content_size;
			tmp->content = (char *)malloc(sizeof(char) * content_size + 1);
			ft_memcpy(tmp->content, content, content_size);
		}
		else
		{
			tmp->content = NULL;
			tmp->content_size = 0;
		}
		tmp->next = NULL;
		return (tmp);
	}
	return (NULL);
}
