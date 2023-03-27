/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 13:32:01 by jonascim          #+#    #+#             */
/*   Updated: 2023/03/24 15:25:30 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Point.hpp"

static Fixed abs(Fixed point)
{
	if (point < 0)
		return point * -1;
	return point;
}

static Fixed	area(Point const a, Point const b, Point const c)
{
	Fixed area;

	area = ((a.getX()*(b.getY() - c.getY())) + (b.getX()*(c.getY() - a.getY())) + (c.getX()*(a.getY() - b.getY())))/2;
	return (area);
}

bool bsp( Point const a, Point const b, Point const c, Point const point )
{
	Fixed	area1, area2, area3, total_area;

	area1 = abs(area(point, a, b));
	area2 = abs(area(point, b, c));
	area3 = abs(area(point, a, c));
	total_area = abs(area(a, b, c));
	return (total_area == area1 + area2 + area3);
}
