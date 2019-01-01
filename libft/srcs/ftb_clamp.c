/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftb_clamp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmilon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 17:54:13 by tmilon            #+#    #+#             */
/*   Updated: 2018/06/08 11:17:45 by tmilon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

double	ftb_clamp(double toclamp, double min, double max)
{
	if (toclamp > max || toclamp < min)
		return (toclamp > max ? max : min);
	return (toclamp);
}
