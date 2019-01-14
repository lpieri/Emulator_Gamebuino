/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   unicorn.hpp                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: delay <clement@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/09/21 12:37:59 by delay        #+#   ##    ##    #+#       */
/*   Updated: 2019/01/14 05:20:18 by cpieri      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef __UNICORN_HPP__
# define __UNICORN_HPP__

# include "character.hpp"
# include "macro.hpp"
//# include "img.hpp"

class Unicorn : public Character
{
	private:
		int const		_speed;

	public:
		Unicorn(void);
		~Unicorn(void);

		void	sayHello(void) const;
		void	print(void);
		void	run(int& map_starter);
		void	moveBack(int& map_starter);
};

#endif
