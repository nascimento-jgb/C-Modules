/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 16:04:36 by jonascim          #+#    #+#             */
/*   Updated: 2023/03/22 17:31:40 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

int main(int argc, char **argv)
{
	Harl	test;
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i = 0;

	if (argc == 2)
	{
		for (i = 0; i < 4; i++)
			if (levels[i] == argv[1])
				break;
		switch (i)
		{
		case 0:
			test.complain("DEBUG");
			test.complain("INFO");
			test.complain("WARNING");
			test.complain("ERROR");
			break;
		case 1:
			test.complain("INFO");
			test.complain("WARNING");
			test.complain("ERROR");
			break;
		case 2:
			test.complain("WARNING");
			test.complain("ERROR");
			break;
		case 3:
			test.complain("ERROR");
			break;
		default:
			std::cout << "Daaaamn you are giving wrong levels to Harl!" << std::endl;
			break;
		}
	}
	return (0);
}
