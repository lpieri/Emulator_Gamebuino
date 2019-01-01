/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmilon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 18:35:50 by tmilon            #+#    #+#             */
/*   Updated: 2017/11/30 20:56:43 by tmilon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	int				i;
	unsigned char	*altdst;
	unsigned char	*altsrc;

	i = 0;
	altdst = (unsigned char *)dst;
	altsrc = (unsigned char *)src;
	while (i < (int)n)
	{
		if (altsrc[i] == (unsigned char)c)
		{
			altdst[i] = (unsigned char)c;
			return (&dst[i + 1]);
		}
		altdst[i] = altsrc[i];
		i++;
	}
	return (NULL);
}
