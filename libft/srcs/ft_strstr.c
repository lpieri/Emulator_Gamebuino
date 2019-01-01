/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmilon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 15:13:04 by tmilon            #+#    #+#             */
/*   Updated: 2017/11/27 20:04:46 by tmilon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int	i;
	int	n;

	if (ft_strcmp(needle, "") == 0 || ft_strcmp(haystack, needle) == 0)
		return ((char *)haystack);
	i = 0;
	n = ft_strlen(needle);
	while (haystack[i] != '\0')
	{
		if (ft_strncmp(&haystack[i], needle, n) == 0)
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
