/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 10:37:21 by jonascim          #+#    #+#             */
/*   Updated: 2023/03/20 11:33:38 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie *zombieHorde(int n, std::string name);

int main()
{
	int size;
	int i;

	size = 10;
	Zombie *horde = zombieHorde(size, "NOBRAINER");
	for (i = 0; i < size; i++)
		horde[i].announce();
	delete [] horde;
	return (0);
}
