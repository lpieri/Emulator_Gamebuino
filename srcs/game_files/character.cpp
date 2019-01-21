/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpieri <cpieri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/21 11:45:24 by delay             #+#    #+#             */
/*   Updated: 2019/01/21 23:06:02 by delay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game_includes/character.hpp"

Character::Character(int sizeX, int sizeY) : _pos(0, 0), _size(sizeX, sizeY),
	_world_pos(0, 0), _life(ALL_LIFE), _damages(2), _speed(1), _is_run(true),
	_is_move_back(true), _is_fall(true)
{
	return ;
}

Character::~Character(void)
{
	return ;
}

void	Character::sayHello(void) const
{
	gb.display.setColor(YELLOW);
	//gb.display.setFontSize(0.01);
	//gb.display.setCursor(10, 10);
	//gb.display.print("Bonjour je suis lambda!");
}

void	Character::run(int& map_starter)
{
	(void)map_starter;
	return ;
}

void	Character::moveBack(int& map_starter)
{
	(void)map_starter;
	return ;
}

void	Character::jump(void)
{
	if (this->_is_fall == true)
	{
		this->_is_run = true;
		this->_is_move_back = true;
		this->_pos.getY() -= 18;
		this->_is_fall = false;
	}
	return ;
}

void	Character::print(void)
{
	return ;
}

void	Character::attack(void)
{
	return ;
}
