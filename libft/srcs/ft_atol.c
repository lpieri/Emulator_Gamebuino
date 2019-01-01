/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvautrai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/11 11:40:05 by cvautrai          #+#    #+#             */
/*   Updated: 2018/06/11 14:39:32 by cvautrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_atol(const char *str)
{
	int					i;
	int					negative;
	unsigned long long	print;

	i = 0;
	negative = 1;
	print = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\r'
			|| str[i] == '\v' || str[i] == '\f' || str[i] == ' ')
		i++;
	if (str[i] == '-')
		negative = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		print = print * 10 + str[i] - '0';
		i++;
	}
	if (print >= 9223372036854775807 && negative == 1)
		return (-1);
	if (print >= 9223372036854775807 && negative == -1)
		return (0);
	return ((long)print * negative);
}
