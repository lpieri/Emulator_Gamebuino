/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delay <cpieri@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 14:07:12 by delay             #+#    #+#             */
/*   Updated: 2019/01/15 22:51:37 by delay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "emulate.hpp"
#include <ctime>

GamebuinoSdl	gb;

int		main(void)
{
	double	previous = std::time(0);
	double	current;
	double	elapsed;
	double	lag = 0.0;

	setup();
	gb.display.present();
	while (gb.display.get_loop())
	{
		current = std::time(0);
		elapsed = current - previous;
		previous = current;
		lag += elapsed;
		while (lag >= 0.25)
		{
			loop();
			gb.display.present();
			if (gb.get_event_type() == SDL_QUIT)
				gb.display.set_loop(0);
			lag -= 0.25;
		}
	}
	return (0);
}
