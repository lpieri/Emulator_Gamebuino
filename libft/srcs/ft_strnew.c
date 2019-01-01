/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmilon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 22:10:05 by tmilon            #+#    #+#             */
/*   Updated: 2017/11/30 21:23:15 by tmilon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*ret;
	int		i;

	if ((ret = (char *)malloc(sizeof(char) * (size + 1))) == 0)
		return (NULL);
	i = 0;
	while (i < (int)size)
		ret[i++] = 0;
	ret[i] = '\0';
	return (ret);
}
