/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   vector2d.cpp                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: delay <clement@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/09/21 12:11:04 by delay        #+#   ##    ##    #+#       */
/*   Updated: 2019/01/14 02:46:01 by cpieri      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "game_includes/vector2d.hpp"

Vector2d::Vector2d(int x, int y) : _x(x), _y(y)
{
}

Vector2d::~Vector2d(void)
{
}

void	Vector2d::setVector2d(int x, int y)
{
	this->_x = x;
	this->_y = y;
}

int&	Vector2d::getX(void)
{
	return this->_x;
}

int&	Vector2d::getY(void)
{
	return this->_y;
}
