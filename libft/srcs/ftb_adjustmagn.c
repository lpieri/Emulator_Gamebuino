/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftb_adjustmagn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmilon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 17:22:07 by tmilon            #+#    #+#             */
/*   Updated: 2017/11/30 18:54:49 by tmilon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ftb_adjustmagn(unsigned int toadjust, unsigned int goal)
{
	int	lenadj;
	int	lengoal;

	lenadj = ftb_intlen(toadjust);
	lengoal = ftb_intlen(goal);
	if (lenadj > lengoal)
		toadjust /= ftb_pow(10, lenadj - lengoal);
	else if (lengoal > lenadj)
		toadjust *= ftb_pow(10, lengoal - lenadj);
	return (toadjust);
}
