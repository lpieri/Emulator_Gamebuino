/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvautrai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 17:02:13 by cvautrai          #+#    #+#             */
/*   Updated: 2018/06/07 10:16:35 by cvautrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*read_input(const int fd, int *endcode, char *stock)
{
	char		buf[BUFF_SIZE + 1];
	char		*tmp;

	*endcode = read(fd, buf, BUFF_SIZE);
	buf[*endcode] = '\0';
	tmp = stock;
	stock = ft_strjoin(stock, buf);
	ft_strdel(&tmp);
	return (stock);
}

int			get_next_line(const int fd, char **line)
{
	static char	*stock[FD_MAX];
	int			endcode;
	char		*str;

	if (fd < 0 || fd > FD_MAX || !line || read(fd, NULL, 0) == -1)
		return (-1);
	if (!stock[fd])
		stock[fd] = ft_strnew(0);
	endcode = 1;
	while (endcode > 0)
	{
		if ((str = ft_strchr(stock[fd], '\n')))
		{
			*str = '\0';
			*line = ft_strdup(stock[fd]);
			ft_memcpy(stock[fd], str + 1, ft_strlen(str + 1) + 1);
			return (1);
		}
		stock[fd] = read_input(fd, &endcode, stock[fd]);
	}
	*line = ft_strdup(stock[fd]);
	ft_strdel(&stock[fd]);
	if (ft_strlen(*line))
		return (1);
	return (endcode);
}
