/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmilon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 15:26:41 by tmilon            #+#    #+#             */
/*   Updated: 2017/11/30 20:58:30 by tmilon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;
	int	n;

	if (ft_strcmp(needle, "") == 0 || ft_strcmp(haystack, needle) == 0)
		return ((char *)haystack);
	i = 0;
	n = ft_strlen(needle);
	if (n > (int)len)
		return (NULL);
	while (haystack[i] != '\0' && i <= (int)len - n)
	{
		if (ft_strncmp(&haystack[i], needle, n) == 0)
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
