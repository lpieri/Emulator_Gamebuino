/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmilon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 14:44:30 by tmilon            #+#    #+#             */
/*   Updated: 2017/11/30 16:44:34 by tmilon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	sepamount(char const *s, char c)
{
	int	i;
	int	count;

	if (!s)
		return (0);
	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			while (s[i + 1] != c && s[i + 1] != '\0')
				i++;
			count++;
		}
		i++;
	}
	return (count);
}

char		**ft_strsplit(char const *s, char c)
{
	int		i;
	int		i2;
	int		count;
	char	**tab;

	i = 0;
	i2 = 0;
	count = sepamount(s, c);
	if (!s || (tab = malloc(sizeof(tab) * (count + 1))) == 0)
		return (NULL);
	tab[count] = NULL;
	while (s[i] != '\0')
	{
		count = 0;
		while (s[i] == c)
			if (s[i++] == '\0')
				return (tab);
		while (s[i + count] != c && s[i + count] != '\0')
			count++;
		if (s[i + count] != '\0' || s[i + count - 1] != c)
			tab[i2++] = ft_strsub(s, i, count);
		i += count;
	}
	return (tab);
}
