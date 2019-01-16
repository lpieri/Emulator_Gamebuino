/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   unicorn.cpp                                        :+:      :+:    :+:   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: delay <clement@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/09/21 12:41:10 by delay        #+#   ##    ##    #+#       */
/*   Updated: 2019/01/15 21:25:38 by delay            ###   ########.fr       */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "game_includes/unicorn.hpp"

Image UnicornI = Image("./assets/unicorn_gb.png");
Image heart = Image("./assets/heart_gb.png");

Unicorn::Unicorn(void) : Character(P(S_CHAR_X), P(S_CHAR_Y)), _speed(1)
{
}

Unicorn::~Unicorn(void)
{
}

void	Unicorn::sayHello(void) const
{
	gb.display.setColor(YELLOW);
	gb.display.setCursor(10, 10);
}

void	Unicorn::print(void)
{
	int		x = Character::_pos.get_x();
	int		y = Character::_pos.get_y();
	int		sizeX = Character::_size.get_x();
	int		sizeY = Character::_size.get_y();
	int		life = Character::_life;
	int		hx = WIDTH - S_HEART;

	gb.display.drawImage(x, y, UnicornI, sizeX, sizeY);
	for (int i = 0; i <= life; i++)
	{
		gb.display.drawImage(hx, 0, heart, P(S_HEART), P(S_HEART));
		hx -= S_HEART + 2;
	}
}

void	Unicorn::run(int& map_starter)
{
	int		posX = (Character::_pos.get_x() + Character::_size.get_x());
	int		x = Character::_pos.get_x();
	int		y = Character::_pos.get_y();

	if (Character::_is_run == true)
	{
		if (posX < (MACOS_WIDTH / 2))
		{
			Character::_pos.set_value(x + this->_speed + S_BLOCK_X, y);
			Character::_world_pos.set_value(x + this->_speed, y);
		}
		else if (map_starter < LEN_MAP && posX >= (MACOS_WIDTH / 2))
		{
			Character::_world_pos.set_value(x + this->_speed, y);
			map_starter += this->_speed;
		}
	}
}

void	Unicorn::moveBack(int& map_starter)
{
	int		x = Character::_pos.get_x();
	int		y = Character::_pos.get_y();

	if (Character::_is_move_back == true && Character::_world_pos.get_x() > map_starter)
	{
		Character::_pos.set_value(x - this->_speed - S_BLOCK_X, y);
		Character::_world_pos.set_value(x - this->_speed, y);
	}
}
