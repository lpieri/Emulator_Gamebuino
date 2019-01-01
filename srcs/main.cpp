/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delay <cpieri@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 14:07:12 by delay             #+#    #+#             */
/*   Updated: 2019/01/01 21:43:09 by delay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "emulate.hpp"

void	printing(Window * win, Bloc * b)
{
	//(void)b;
	win->clear();
	b->print(win);
	win->print();
}

void	event(Window win, Bloc * b)
{
	SDL_Event	event;

	while (win.get_loop())
	{
		printing(&win, b);
		SDL_WaitEvent(&event);
		if (event.type == SDL_QUIT)
			win.set_loop(0);
		if (event.type == SDL_WINDOWEVENT)
		{
			if (event.window.event == SDL_WINDOWEVENT_RESIZED)
			{
				win.change_size();
				b->recalc_position(win.get_size());
			}
			//printing(win, b);
		}
	}
}

int		main(void)
{
	Window	win;
	Color	c;
	Bloc *	b;

	c.int_to_color(0xffffff);
	if (SDL_Init(SDL_INIT_VIDEO) != 0)
		return (-1);
	win.create("emulate", 500, 500);
	b = new Bloc(win.get_size(), Vector4d(90, 10, 5, 5), c, HORIZONTAL_CENTER);
	printing(&win, b);
	event(win, b);
	SDL_Quit();
	return (0);
}
