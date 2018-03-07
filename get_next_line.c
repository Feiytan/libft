/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaumann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/03 05:49:47 by lbaumann          #+#    #+#             */
/*   Updated: 2018/03/03 05:53:06 by lbaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdlib.h"
#include "unistd.h"
#include "limits.h"
#define BUFF_SIZE 256

static char *befor_n(char *str)
{
	int i;

	i = 0;
	while (str != '\0' && str[i] != '\n')
		i++;
	str = ft_strsub(str, 0, i);
	return (str);
}


static char *after_n(char *str)
{
	int i;
	char *s;

	i = 0;
	while (str != '\0' && str[i] != '\n')
		i++;
	s = ft_strsub(str, i + 1, ft_strlen(str));
	free(str);
	return (s);

}


static char *join_free(char *str, char *buff)
{
	char *tmp;

	tmp = ft_strjoin(str, buff);
	free(str);
	return (tmp);
}


int get_next_line(int const fd, char **line)
{
	int ret;
	char buff[BUFF_SIZE + 1];
	static char *str[OPEN_MAX];

	if (fd < 0 || fd > OPEN_MAX || !line)
		return (-1);
	if (str[fd] == NULL)
		str[fd] = ft_strnew(BUFF_SIZE);
	while (!ft_strchr(str[fd], '\n') && (ret = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[ret] = '\0';
		str[fd] = join_free(str[fd], buff);
	}
	if (ret == -1)
		return (-1);
	*line = (ft_strchr(str[fd], '\n') ? befor_n(str[fd]) : ft_strdup(str[fd]));
	if (ft_strchr((str[fd]), '\n'))
		str[fd] = after_n(str[fd]);
	else
		ft_strdel(&str[fd]);
	if (str[fd] == NULL && ft_strlen(*line) == 0)
		return (0);
	return (1);
}
