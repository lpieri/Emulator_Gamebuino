/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delay <cpieri@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/02 13:19:19 by delay             #+#    #+#             */
/*   Updated: 2019/01/22 15:31:26 by cpieri      ###    #+. /#+    ###.fr     */
/*                                                                            */
/* ************************************************************************** */

#include "Gamebuino-Meta-Sdl.hpp"
#include "game_includes/game.hpp"

Character *	lou = new Unicorn();
Map *	maps = new Map();
World * earth = new World(lou, maps);

void setup() {

}

void loop() {
	while (!gb.update());
	gb.display.clear();
	if (gb.buttons.repeat(BUTTON_RIGHT, 1))
		lou->run(maps->getStart());
	if (gb.buttons.repeat(BUTTON_LEFT, 1))
		lou->moveBack(maps->getStart());
	if (gb.buttons.pressed(BUTTON_B) || gb.buttons.pressed(BUTTON_UP))
		lou->jump();
	if (gb.buttons.pressed(BUTTON_MENU))
		earth->restart_game();
	earth->print();
	maps->print();
	lou->print();
	earth->add_physics();
}
