/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   vector2d.hpp                                       :+:      :+:    :+:   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: delay <clement@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/09/21 12:01:26 by delay        #+#   ##    ##    #+#       */
/*   Updated: 2019/01/21 23:02:04 by delay            ###   ########.fr       */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef __VECTOR_HPP__
# define __VECTOR_HPP__

class Vector
{
	private:
		int		_x;
		int		_y;

	public:
		Vector(int x, int y);
		~Vector(void);

		void	setVector2d(int x, int y);
		int&	getX(void);
		int&	getY(void);
};

#endif
