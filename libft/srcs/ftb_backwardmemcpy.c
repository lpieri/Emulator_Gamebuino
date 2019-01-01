/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftb_backwardmemcpy.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmilon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 07:38:02 by tmilon            #+#    #+#             */
/*   Updated: 2017/12/01 07:43:54 by tmilon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ftb_backwardmemcpy(void *dst, const void *src, size_t len)
{
	char	*altsrc;
	char	*altdst;

	altsrc = (char *)src;
	altdst = (char *)dst;
	while (len > 0)
	{
		altdst[len - 1] = altsrc[len - 1];
		len--;
	}
	return (dst);
}
