/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   character_utils.cpp                                :+:      :+:    :+:   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: delay <clement@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/24 16:51:56 by delay        #+#   ##    ##    #+#       */
/*   Updated: 2019/01/15 21:53:20 by delay            ###   ########.fr       */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "game_includes/character.hpp"
#include <iostream>

int&	Character::getLife(void)
{
	return this->_life;
}

double	Character::get_posY(void)
{
	return this->_pos.get_y();
}

double	Character::get_posX(void)
{
	return this->_pos.get_x();
}

int		Character::getFoot(void)
{
	return this->_pos.get_y() + this->_size.get_y();
}

double		Character::getWorldPosX(void)
{
	return this->_world_pos.get_x();
}

double		Character::getWorldPosY(void)
{
	return this->_world_pos.get_y();
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
	this->_world_pos.set_value(x, this->_world_pos.get_y());
	return ;
}

void	Character::setPosX(int x)
{
	this->_pos.set_value(x, this->_pos.get_y());
	std::cout << this->_pos.get_x() << std::endl;
	return ;
}

void	Character::setPosY(int y)
{
	this->_pos.set_value(this->_pos.get_x(), y);
	return ;
}
