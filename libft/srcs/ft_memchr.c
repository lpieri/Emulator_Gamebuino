/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmilon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 16:11:31 by tmilon            #+#    #+#             */
/*   Updated: 2017/11/21 09:26:59 by tmilon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*alts;

	alts = (unsigned char *)s;
	while (n--)
	{
		if (*alts == (unsigned char)c)
			return (alts);
		alts++;
	}
	return (NULL);
}
