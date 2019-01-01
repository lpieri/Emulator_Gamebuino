/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmilon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 22:33:30 by tmilon            #+#    #+#             */
/*   Updated: 2017/11/29 19:22:07 by tmilon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*ret;

	if (!s || !f)
		return (NULL);
	i = ft_strlen(s);
	if ((ret = malloc(sizeof(char) * (i + 1))) == 0)
		return (NULL);
	ret[i] = '\0';
	i = 0;
	while (s[i] != '\0')
	{
		ret[i] = f(s[i]);
		i++;
	}
	return (ret);
}
