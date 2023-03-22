/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 13:25:49 by jonascim          #+#    #+#             */
/*   Updated: 2023/03/22 14:36:51 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	replace(std::string	temp, char **argv)
{
	std::ofstream	outfile;
	int				position;

	outfile.open((std::string(argv[1]) + ".replace").c_str());
	if (outfile.fail())
		return (1);
	for (int i = 0; i < (int)temp.length(); i++)
	{
		position = temp.find(argv[2], i);
		if (position == i)
		{
			outfile << argv[3];
			i += std::string(argv[2]).size() - 1;
		}
		else
			outfile << temp[i];
	}
	outfile.close();
	return (0);
}

int main(int argc, char **argv)
{
	std::ifstream	infile;
	std::string		temp;
	char			c;

	if (argc != 4)
	{
		std::cout << "Format inserted not correct." << std::endl;
		std::cout << "insert: <file to repalce> old_word new_word" << std::endl;
		return (1);
	}
	infile.open(argv[1]);
	if (infile.fail())
	{
		std::cout << "Error opening file or file non existent" << std::endl;
		return (1);
	}
	while(!infile.eof() && infile >> std::noskipws >> c)
		temp += c;
	infile.close();
	replace(temp, argv);
	return (0);
}
