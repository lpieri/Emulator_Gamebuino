/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   world.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delay <cpieri@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 23:00:14 by delay             #+#    #+#             */
/*   Updated: 2019/01/22 13:29:21 by cpieri      ###    #+. /#+    ###.fr     */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WORLD_HPP__
# define __WORLD_HPP__

# include "map.hpp"
# include "character.hpp"
# include "image.hpp"
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

		void	print(void) const;
		void	add_physics(void);
		void	restart_game(void);
		void	check_end(void);
		void	start_game(void);
};

#endif
