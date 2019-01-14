/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delay <cpieri@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/02 13:19:19 by delay             #+#    #+#             */
/*   Updated: 2019/01/14 04:44:03 by cpieri      ###    #+. /#+    ###.fr     */
/*                                                                            */
/* ************************************************************************** */

//#include "Gamebuino-Meta-Sdl.hpp"
#include <iostream>

/*
Image ok = Image("./lol.jpg");

void	setup() {
}

void	loop() {
	while (!gb.update());
	gb.display.clear(BLUE);

	if (gb.buttons.pressed(BUTTON_LEFT))
		std::cout << "Button pressed is left or a" << std::endl;
	if (gb.buttons.pressed(BUTTON_RIGHT))
		std::cout << "Button pressed is right or d" << std::endl;
	gb.display.drawImage(10, 10, ok, 150, 150);
}*/

#include "game_includes/game.hpp"

Map*		maps = new Map();
Character*	pedro = new Unicorn();
World*		earth = new World(pedro, maps);

void setup() {
	earth->start_game();
}

void loop() {
	while (!gb.update());
	gb.display.clear();

	if (gb.buttons.repeat(BUTTON_RIGHT, 1))
		pedro->run(maps->getStarterMap());
	if (gb.buttons.repeat(BUTTON_LEFT, 1))
		pedro->moveBack(maps->getStarterMap());
	if (gb.buttons.pressed(BUTTON_A))
		pedro->jump();
	if (gb.buttons.pressed(BUTTON_MENU))
		earth->restart_game();
	earth->print_sky();
	maps->print();
	pedro->print();
	earth->add_physical();
	earth->check_end();
}
