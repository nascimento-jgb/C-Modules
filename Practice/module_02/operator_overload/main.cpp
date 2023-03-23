/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 15:53:39 by jonascim          #+#    #+#             */
/*   Updated: 2023/03/23 15:57:04 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Integer.class.hpp"

int main()
{
	Integer	x(30);
	Integer	y(10);
	Integer	z(0);

	std::cout << "Value of X: " << x << std::endl;
	std::cout << "Value of Y: " << y << std::endl;
	y = Integer(12);
	std::cout << "Value of Y: " << y << std::endl;
	std::cout << "Value of Z: " << z << std::endl;
	z = x + y;
	std::cout << "Value of Z: " << z << std::endl;

	return (0);
}
