/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delay <cpieri@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/02 13:19:19 by delay             #+#    #+#             */
/*   Updated: 2019/01/21 22:19:43 by delay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "Gamebuino-Meta-Sdl.hpp"
#include <iostream>
#include "game_includes/game.hpp"

Map*		maps = new Map();
/*
**	Rip stan lee ??
*/
//World*		earth = new World(/*??*/, maps);

void setup() {
	gb.begin();
	//earth->start_game();
}

void loop() {
	while (!gb.update());
	gb.display.clear();

	/*
	**Events ??
	** if (gb.buttons.pressed(BUTTON_MENU))
	**	[redemarer le jeu]
	** Affichage ??
	*/

	maps->print();
}
