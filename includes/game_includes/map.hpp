/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   map.hpp                                            :+:      :+:    :+:   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: delay <clement@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/09/21 14:56:39 by delay        #+#   ##    ##    #+#       */
/*   Updated: 2019/01/22 13:37:52 by cpieri      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef __MAP_HPP__
# define __MAP_HPP__

# include "vector.hpp"
# include "desktop_macro.hpp"
# include "image.hpp"
# include "Gamebuino-Meta-Sdl.hpp"

class Map
{
	private:
		int			_starter;
		Vector	_pos;
		int const *	_map;
		int const *	_bad;

	public:
		Map(void);
		~Map(void);

		void	_print_obj(int i, int x, int y);

		void	print(void);
		int&	getStart(void);
		int		getEarth(int character_pos);
		bool	checkBadExist(int character_pos);
		bool	checkFlagExist(int character_pos);
};

#endif
