/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delay <cpieri@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/02 13:19:19 by delay             #+#    #+#             */
/*   Updated: 2019/01/09 15:54:03 by cpieri      ###    #+. /#+    ###.fr     */
/*                                                                            */
/* ************************************************************************** */

#include "emulate.hpp"
#include <iostream>

void	setup() {
}

void	loop() {
	while (!gb.update());
	gb.display.clear(BLUE);

	if (gb.buttons.pressed(BUTTON_LEFT))
		std::cout << "Button pressed is left or a" << std::endl;
	if (gb.buttons.pressed(BUTTON_RIGHT))
		std::cout << "Button pressed is right or d" << std::endl;
}
