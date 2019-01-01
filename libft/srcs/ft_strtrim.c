/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmilon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 14:44:42 by tmilon            #+#    #+#             */
/*   Updated: 2017/11/30 21:02:21 by tmilon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		be;
	int		end;
	char	*ret;

	if (!s)
		return (NULL);
	if (ft_strcmp(s, "") == 0)
		return (ft_strdup(""));
	be = 0;
	while (s[be] == ' ' || s[be] == '\t' || s[be] == '\n')
		be++;
	end = ft_strlen(s) - 1;
	while (end > 0 && (s[end] == ' ' || s[end] == '\t' || s[end] == '\n'))
		end--;
	if (end == 0)
		return (be == (int)ft_strlen(s) ? ft_strdup("") : ft_strdup((char *)s));
	if ((ret = malloc(sizeof(char) * (end - be + 2))) == 0)
		return (NULL);
	ret[end - be + 1] = '\0';
	i = 0;
	while (be <= end)
		ret[i++] = s[be++];
	return (ret);
}
