/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   Base.cpp										   :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: jonascim <jonascim@student.42.fr>		  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2023/06/19 10:44:55 by jonascim		  #+#	#+#			 */
/*   Updated: 2023/06/19 10:51:08 by jonascim		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "../includes/Base.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>

Base::~Base(void)
{
	return ;
}

Base	*generate(void)
{
	std::srand(std::time(nullptr));
	int	aux = rand() % 3;
	switch (aux)
	{
		case 0:
			return (new A());
		case 1:
			return (new B());
		case 2:
			return (new C());
		default:
			return (nullptr);
	}
}

void	identify(Base *p)
{
	 if (dynamic_cast<A*>(p) != nullptr)
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p) != nullptr)
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p) != nullptr)
		std::cout << "C" << std::endl;
}

void	identify(Base &p)
{
	 try
	{
		dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		return;
	}
	catch (std::bad_cast&) {}

	try
	{
		dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
		return;
	}
	catch (std::bad_cast&) {}

	try
	{
		dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
		return;
	}
	catch (std::bad_cast&) {}
}
