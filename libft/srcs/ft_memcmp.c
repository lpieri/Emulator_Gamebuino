/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmilon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 17:05:39 by tmilon            #+#    #+#             */
/*   Updated: 2017/11/15 12:14:47 by tmilon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*alts1;
	char	*alts2;

	alts1 = (char *)s1;
	alts2 = (char *)s2;
	while (n--)
	{
		if (*alts1 != *alts2)
			return ((unsigned char)*alts1 - (unsigned char)*alts2);
		alts1++;
		alts2++;
	}
	return (0);
}
