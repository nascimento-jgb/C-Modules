/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fstream1.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 13:14:29 by jonascim          #+#    #+#             */
/*   Updated: 2023/03/22 13:25:04 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main()
{
	std::ifstream	ifs("numbers");
	unsigned int	dst;
	unsigned int	dst2;

	ifs >> dst >> dst2;

	std::cout << dst << " " << dst2 << std::endl;
	ifs.close();

	//------------

	std::ofstream	ofs("test.out");

	ofs << "i like ponies a whole damn lot!" << std::endl;
	ofs.close();
}
