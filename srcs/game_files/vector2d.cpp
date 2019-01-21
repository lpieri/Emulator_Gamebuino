/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector2d.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delay <cpieri@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 22:54:58 by delay             #+#    #+#             */
/*   Updated: 2019/01/21 23:06:50 by delay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game_includes/vector2d.hpp"

Vector::Vector(int x, int y) : _x(x), _y(y)
{
}

Vector::~Vector(void)
{
}

void	Vector::setVector2d(int x, int y)
{
	this->_x = x;
	this->_y = y;
}

int&	Vector::getX(void)
{
	return this->_x;
}

int&	Vector::getY(void)
{
	return this->_y;
}
