/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftb_find_closest_offset.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmilon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 11:32:27 by tmilon            #+#    #+#             */
/*   Updated: 2018/01/13 11:33:22 by tmilon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include "libft.h"

int	*find_closest_offset(int x, int y, int tx, int ty)
{
	int	*offset;
	int	xoffset;
	int yoffset;
	int	smallestdir;

	xoffset = -1;
	yoffset = -1;
	offset = malloc(sizeof(int) * 2);
	smallestdir = abs(x + xoffset - tx) + abs(y + yoffset - ty);
	while (yoffset < 2)
	{
		while (xoffset < 2)
		{
			if (abs(x + xoffset - tx) + abs(y + yoffset - ty) <= smallestdir)
			{
				smallestdir = abs(x + xoffset - tx) + abs(y + yoffset - ty);
				offset[0] = xoffset;
				offset[1] = yoffset;
			}
			xoffset++;
		}
		xoffset = -1;
		yoffset++;
	}
	return (offset);
}
