/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmilon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 16:12:01 by tmilon            #+#    #+#             */
/*   Updated: 2017/12/01 07:08:22 by tmilon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int	i;
	int	src_len;
	int	dst_len;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	i = 0;
	if (!src || !*src)
		return (dst_len + src_len);
	if (size <= 0)
		return (src_len);
	while (dst_len + i + 1 < (int)size && src[i])
	{
		dst[i + dst_len] = src[i];
		i++;
	}
	if (dst_len + i < (int)size)
		dst[i + dst_len] = '\0';
	return ((dst_len + i < (int)size ? dst_len : size) + src_len);
}
