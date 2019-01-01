/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmilon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 15:27:21 by tmilon            #+#    #+#             */
/*   Updated: 2017/11/30 21:02:00 by tmilon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	if (n == 0)
		return (0);
	i = 0;
	if (*s1 == '\0' || *s2 == '\0')
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	while (i < (int)n && s1[i] != '\0')
	{
		if (s2[i] == '\0')
			return (1);
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	if (i == (int)n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
