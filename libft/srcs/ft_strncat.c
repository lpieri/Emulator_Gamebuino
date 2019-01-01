/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmilon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 20:44:45 by tmilon            #+#    #+#             */
/*   Updated: 2017/11/30 20:57:56 by tmilon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	int	i;
	int	lim;
	int	lim2;

	lim = ft_strlen(s1);
	i = 0;
	lim2 = ft_strlen(s2);
	while (i < lim2 && i < (int)n)
	{
		s1[i + lim] = s2[i];
		i++;
	}
	s1[i + lim] = '\0';
	return (s1);
}
