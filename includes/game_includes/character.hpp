/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delay <cpieri@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 23:13:19 by delay             #+#    #+#             */
/*   Updated: 2019/01/22 13:37:33 by cpieri      ###    #+. /#+    ###.fr     */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CHARACTER_HPP__
# define __CHARACTER_HPP__

# include "Gamebuino-Meta-Sdl.hpp"
# include "vector.hpp"
# include "desktop_macro.hpp"

class Character
{
	protected:
		Vector		_pos;
		Vector		_size;
		Vector	 	_world_pos;
		int			_life;
		int const	_damages;
		int const	_speed;
		bool		_is_run;
		bool		_is_move_back;
		bool		_is_fall;

	public:
		Character(int sizeX, int sizeY);
		~Character(void);

		virtual void	attack(void);
		virtual void	run(int& map_starter);
		virtual void	moveBack(int& map_starter);
		virtual void	jump(void);
		virtual void	sayHello(void) const;
		virtual void	print(void);

		int				getFoot(void);
		int				getWorldPosX(void);
		int				getWorldPosY(void);
		int&			get_posX(void);
		int&			getLife(void);
		int&			get_posY(void);
		bool&			getIsFall(void);
		bool&			getIsRun(void);
		bool&			getIsMoveBack(void);

		void			setWorldPosX(int x);
};

#endif
