/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   my_function.cpp                                    :+:      :+:    :+:   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: delay <clement@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/25 10:55:56 by delay        #+#   ##    ##    #+#       */
/*   Updated: 2019/01/21 22:54:25 by delay            ###   ########.fr       */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "game_includes/unicorn.hpp"

Image UnicornI = Image("./assets/unicorn_gb.png");
Image heart = Image("./assets/heart_gb.png");

void	Unicorn::print(void)
{
	Box		box;
	int 	i = 0;

	box = this->_init_box();
	gb.display.drawImage(box.position_x, box.position_y, UnicornI, S_CHAR_X, S_CHAR_X);
	while (i <= box.life)
	{
		gb.display.drawImage(box.position_heart_x, 0, heart, S_HEART, S_HEART);
		box.position_heart_x -= S_HEART + 2;
		i++;
	}
}
