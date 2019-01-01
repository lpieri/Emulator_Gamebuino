/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmilon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 18:59:31 by tmilon            #+#    #+#             */
/*   Updated: 2017/11/29 17:22:29 by tmilon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_atoi(const char *str)
{
	unsigned int	n;
	int				loopamount;
	int				neg;

	n = 0;
	loopamount = 0;
	while (ftb_isspace(*str) == 1 && *str != '\0' && *str != '-' &&
				*str != '\e')
		str++;
	str += (*str == '+' && ft_isdigit(*(str + 1)) == 1 ? 1 : 0);
	if (*str == '-')
		neg = *(str++);
	else
		neg = 10;
	while (ft_isdigit(*str) != 0)
	{
		if (n * 10 < n && loopamount < 2)
			loopamount += (neg != 10 ? 2 : 1);
		else if (n * 10 < n)
			return (neg != 10 ? 0 : -1);
		n *= 10;
		n += (*str - 48);
		str++;
	}
	return (neg != 10 ? -n : n);
}
