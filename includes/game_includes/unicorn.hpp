/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   unicorn.hpp                                        :+:      :+:    :+:   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: delay <clement@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/09/21 12:37:59 by delay        #+#   ##    ##    #+#       */
/*   Updated: 2019/01/22 13:37:23 by cpieri      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef __UNICORN_HPP__
# define __UNICORN_HPP__

# include "character.hpp"
# include "desktop_macro.hpp"
# include "image.hpp"
# include "workshop.hpp"

class Unicorn : public Character
{
	private:
		int const		_damages;
		int const		_speed;

		Box		_init_box(void);

	public:
		Unicorn(void);
		~Unicorn(void);

		void	sayHello(void) const;
		void	run(int& map_starter);
		void	moveBack(int& map_starter);
		void	print(void);
};

#endif
