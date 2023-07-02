/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   main.cpp										   :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: jonascim <jonascim@student.42.fr>		  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2023/06/19 10:16:15 by jonascim		  #+#	#+#			 */
/*   Updated: 2023/06/19 12:46:11 by jonascim		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "../includes/Array.hpp"
#include <iostream>

#define MAX 500

int main()
{
	Array<int> numbers(MAX);
	int* mirror = new int[MAX];
	srand(time(NULL));
	for (int i = 0; i < MAX; i++)
	{
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
	}

	// Deep copy test
	{
		Array<int> tmp = numbers;
		Array<int> test(numbers);
	}

	// Basic functionality test
	for (int i = 0; i < MAX; i++)
	{
		if (mirror[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}

	// Exception tests
	try
	{
		numbers[-2] = 0;
	}
	catch(const std::exception &e)
	{
		std::cerr << "Failed to access numbers[-2]: " << e.what() << '\n';
	}
	try
	{
		numbers[MAX] = 0;
	}
	catch(const std::exception &e)
	{
		std::cerr << "Failed to access numbers[MAX]: " << e.what() << '\n';
	}

	// Indexing test
	for (int i = 0; i < MAX; i++)
		numbers[i] = rand();

	// Empty array test
	Array<float> empty;
	try
	{
		empty[0] = 42;
	}
	catch(const std::exception &e)
	{
		std::cerr << "Failed to access empty[0]: " << e.what() << '\n';
	}

	// Reading/writing test
	std::cout << "numbers[0]: " << numbers[0] << std::endl;
	numbers[0] = 42;
	std::cout << "numbers[0]: " << numbers[0] << std::endl;

	delete[] mirror;
	return (0);
}
