/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftb_rand.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmilon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 17:08:31 by tmilon            #+#    #+#             */
/*   Updated: 2017/11/30 20:37:23 by tmilon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ftb_rand(unsigned int min, unsigned int max, unsigned int seed)
{
	char	*gen;
	int		rand;

	if (max < min)
		return (0);
	rand = (int)&gen;
	rand = ftb_adjustmagn(rand, (min + max) / 2);
	while ((seed /= 10) > 0)
	{
		if (rand % 10 == 2)
			rand += max / 8;
		else if (rand % 10 == 7)
			rand -= max / 9;
		else if (rand % 10 == 1)
			rand++;
		rand += seed % 10;
	}
	return (ftb_clamp(rand, min, max));
}
