/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmilon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 14:42:43 by tmilon            #+#    #+#             */
/*   Updated: 2017/11/23 13:08:07 by tmilon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int	i;
	int	lim1;
	int	lim2;

	lim1 = ft_strlen(s1);
	lim2 = ft_strlen(s2);
	i = 0;
	while (i + lim1 < lim1 + lim2)
	{
		s1[i + lim1] = s2[i];
		i++;
	}
	s1[i + lim1] = '\0';
	return (s1);
}
