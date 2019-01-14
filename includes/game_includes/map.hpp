/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   map.hpp                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: delay <clement@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/09/21 14:56:39 by delay        #+#   ##    ##    #+#       */
/*   Updated: 2019/01/14 04:52:59 by cpieri      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef __MAP_HPP__
# define __MAP_HPP__

# include "macro.hpp"
# include "img.hpp"

class Map
{
	private:
		int			_starter;
		Vector2d	_pos;
		int const *	_map;
		int const *	_bad;

	public:
		Map(void);
		~Map(void);

		void	_print_obj(int i, int x, int y);

		void	print(void);
		int&	getStarterMap(void);
		int		getEarth(int character_pos);
		bool	checkBadExist(int character_pos);
		bool	checkFlagExist(int character_pos);
};

#endif
