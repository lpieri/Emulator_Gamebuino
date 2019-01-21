/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bad.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delay <cpieri@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 23:03:02 by delay             #+#    #+#             */
/*   Updated: 2019/01/21 23:09:26 by delay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	__BAD_HPP__
# define __BAD_HPP__

# include "macro.hpp"
# include "image.hpp"
# include "vector.hpp"

class Bad
{
	private:
		Vector		_pos;
		Vector		_world_pos;
		int			_life;

	public:
		Bad(void);
		~Bad(void);

		void		print(void);
		void		setWorldPos(int x, int y);
		void		setPos(int x, int y);
		int			getWorldPosX(void);
		int			getWorldPosY(void);
		int			getPosX(void);
		int			getPosY(void);
};

#endif
