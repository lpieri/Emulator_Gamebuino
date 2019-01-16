/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   map.cpp                                            :+:      :+:    :+:   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: delay <clement@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/09/21 15:11:34 by delay        #+#   ##    ##    #+#       */
/*   Updated: 2019/01/15 21:56:47 by delay            ###   ########.fr       */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "game_includes/map.hpp"
#include "game_includes/level.hpp"

Image earth_2 = Image("./assets/dirt_gb.png");
Image badImage = Image("./assets/tree_gb.png");
Image DirtI = Image("./assets/earth_gb.png");
Image flagImage = Image("./assets/flag_gb.png");

Map::Map(void) : _starter(0), _pos(0, 0)
{
	this->_map = level1[1];
	this->_bad = level1[0];
	this->_pos.set_value(0, MACOS_HEIGHT - P(S_BLOCK_Y));
}

Map::~Map(void)
{
	return ;
}

int&	Map::getStarterMap(void)
{
	return this->_starter;
}

int		Map::getEarth(int character_pos)
{
	int const	earth = MACOS_HEIGHT - P(S_BLOCK_Y) - (this->_map[character_pos] *
			P(S_BLOCK_Y));

	return (earth);
}

bool	Map::checkBadExist(int character_pos)
{
	if (this->_bad[character_pos] == 1)
		return true;
	return false;
}

bool	Map::checkFlagExist(int character_pos)
{
	if (this->_bad[character_pos] == 2)
		return true;
	return false;
}

void	Map::_print_obj(int i, int x, int y)
{
	(void)x;
	if (this->_bad[i] == 1)
	{
		y = HEIGHT - S_BLOCK_Y - (this->_map[i] * S_BLOCK_Y) - S_BAD;
		gb.display.drawImage(x, y, badImage, P(S_BAD), P(S_BAD));
	}
	else if (this->_bad[i] == 2)
	{
		y = HEIGHT - S_BLOCK_Y - (this->_map[i] * S_BLOCK_Y) - S_FLAG_Y;
		gb.display.drawImage(x, y, flagImage, P(S_FLAG_X), P(S_FLAG_Y));
	}
}

void	Map::print(void)
{
	int		x = 0;
	int		y = this->getEarth(this->_starter);

	for (int i = this->_starter; i < LEN_MAP; i++)
	{
		y = HEIGHT - S_BLOCK_Y - (this->_map[i] * S_BLOCK_Y);
		gb.display.drawImage(x, y, DirtI, P(S_BLOCK_X), P(S_BLOCK_Y));
		this->_print_obj(i, x, y);
		if (this->_map[i] >= 1)
		{
			while (y < HEIGHT)
			{
				y += S_BLOCK_Y;
				gb.display.drawImage(x, y, earth_2, P(S_BLOCK_X), P(S_BLOCK_Y));
			}
		}
		x += S_BLOCK_X;
	}
}
