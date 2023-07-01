/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 11:13:51 by jonascim          #+#    #+#             */
/*   Updated: 2023/07/01 13:56:32 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScalarConverter.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Correct usage: ./converter <literal_value>" << std::endl;
		return (1);
	}
	std::string literal(argv[1]);
	ScalarConverter::convert(literal);
	return (0);
}
