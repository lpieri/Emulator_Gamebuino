/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   character_utils.cpp                                :+:      :+:    :+:   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: delay <clement@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/24 16:51:56 by delay        #+#   ##    ##    #+#       */
/*   Updated: 2019/01/22 13:22:21 by cpieri      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "game_includes/character.hpp"

int&	Character::getLife(void)
{
	return this->_life;
}

int&	Character::get_posY(void)
{
	return this->_pos.getY();
}

int&	Character::get_posX(void)
{
	return this->_pos.getX();
}

int		Character::getFoot(void)
{
	return this->_pos.getY() + this->_size.getY();
}

int		Character::getWorldPosX(void)
{
	return this->_world_pos.getX();
}

int		Character::getWorldPosY(void)
{
	return this->_world_pos.getY();
}

bool&	Character::getIsRun(void)
{
	return this->_is_run;
}

bool&	Character::getIsMoveBack(void)
{
	return this->_is_move_back;
}

bool&	Character::getIsFall(void)
{
	return this->_is_fall;
}

void	Character::setWorldPosX(int x)
{
	(void)x;
	this->_world_pos.getX() = 0;
	return ;
}
