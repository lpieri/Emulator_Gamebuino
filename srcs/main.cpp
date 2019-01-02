/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delay <cpieri@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 14:07:12 by delay             #+#    #+#             */
/*   Updated: 2019/01/02 13:54:06 by delay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "emulate.hpp"

void	printing(Window * win)
{
	win->clear_color(0x002833);
	win->print();
}

void	event(Window win)
{
	SDL_Event	event;

	while (win.get_loop())
	{
		while(!SDL_WaitEvent(&event));
		if (event.type == SDL_QUIT)
			win.set_loop(0);
		if (event.type == SDL_WINDOWEVENT)
		{
			if (event.window.event == SDL_WINDOWEVENT_RESIZED)
				win.change_size();
			printing(&win);
		}
		loop();
	}
}

int		main(void)
{
	Window	win;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)
		return (-1);
	win.create("emulate", WIDTH, HEIGHT);
	printing(&win);
	setup();
	event(win);
	SDL_Quit();
	return (0);
}
