/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   world.hpp                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: delay <clement@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/09/29 12:45:53 by delay        #+#   ##    ##    #+#       */
/*   Updated: 2019/01/14 06:20:05 by cpieri      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef __WORLD_HPP__
# define __WORLD_HPP__

# include "map.hpp"
# include "character.hpp"
# include "Gamebuino-Meta-Sdl.hpp"

class World
{
	private:
		int const	_gravity;
		Character *	_character;
		Map * 		_maps;

		void		_set_gravity(void);
		void		_check_colision(void);
		void		_the_end(char const * text);

	public:
		World(Character* character, Map* maps);
		~World(void);

		void	print_sky(void) const;
		void	add_physical(void);
		void	restart_game(void);
		void	check_end(void);
		void	start_game(void);
};

#endif
