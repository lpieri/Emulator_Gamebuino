/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delay <cpieri@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 14:07:12 by delay             #+#    #+#             */
/*   Updated: 2019/01/02 01:29:33 by delay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "emulate.hpp"

void	printing(Window * win, Bloc * b)
{
	win->clear_color(0x002833);
	b->print(win);
	win->print();
}

void	event(Window win, Bloc * b)
{
	SDL_Event	event;

	while (win.get_loop())
	{
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
			printing(&win, b);
		}
	}
}

int		main(void)
{
	Window	win;
	Color	c;
	Color	c2;
	Bloc *	b;
	Button * d;

	c.int_to_color(0x078877);
	c2.int_to_color(0xccddaa);
	if (SDL_Init(SDL_INIT_VIDEO) != 0)
		return (-1);
	win.create("emulate", 500, 500);
	b = new Bloc(win.get_size(), Vector4d(90, 5, 5, 2), c, HORIZONTAL_CENTER);
	d = new Button(b->get_position(), c2, Vector4d(10, 90, 1, 5), HORIZONTAL_CENTER);
	b->init_nb_childrens(1);
	b->new_children(d, sizeof(d), BUTTON);
	printing(&win, b);
	event(win, b);
	SDL_Quit();
	return (0);
}
