/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmilon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 23:06:20 by tmilon            #+#    #+#             */
/*   Updated: 2017/11/29 19:25:29 by tmilon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*ret;

	if (!s)
		return (NULL);
	if ((ret = malloc(sizeof(char) * (len + 1))) == 0)
		return (NULL);
	ret[len] = '\0';
	i = start;
	while (i - start < len)
	{
		ret[i - start] = s[i];
		i++;
	}
	return (ret);
}
