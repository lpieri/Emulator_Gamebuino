/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmilon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 21:45:56 by tmilon            #+#    #+#             */
/*   Updated: 2017/11/29 19:26:27 by tmilon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len;
	char	*ret;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	if ((ret = malloc(sizeof(char) * (len + 1))) == 0)
		return (NULL);
	ret[ft_strlen(s1)] = '\0';
	ret[len] = '\0';
	ft_memcpy(ret, s1, ft_strlen(s1));
	ft_strcat(ret, s2);
	return (ret);
}
