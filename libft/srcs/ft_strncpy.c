/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmilon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 17:34:43 by tmilon            #+#    #+#             */
/*   Updated: 2017/12/02 18:43:23 by tmilon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	int		i;
	int		i2;

	i = 0;
	i2 = 0;
	while (i < (int)len)
		if (src[i2] == '\0')
			dst[i++] = '\0';
		else
			dst[i++] = src[i2++];
	return (dst);
}
