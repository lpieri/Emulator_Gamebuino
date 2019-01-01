/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftb_trimtodigit.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmilon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 16:40:43 by tmilon            #+#    #+#             */
/*   Updated: 2017/11/30 21:00:51 by tmilon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ftb_trimtodigit(const char *str)
{
	int		i;
	int		i2;

	i = 0;
	i2 = 0;
	while (ft_isdigit(str[i]) == 0 && str[i] != '\0' && str[i] != '-')
		i++;
	if (str[i] == '\0' || (str[i] == '-' && ft_isdigit(str[i + 1] == 0)))
		return (ft_strdup(""));
	while (ft_isdigit(str[i + i2]) != 0)
		i2++;
	return (ft_strsub(str, i, i2));
}
