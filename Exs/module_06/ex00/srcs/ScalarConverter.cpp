/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ScalarConverter.cpp								:+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: jonascim <jonascim@student.42.fr>		  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2023/06/18 10:41:25 by jonascim		  #+#	#+#			 */
/*   Updated: 2023/06/18 10:51:48 by jonascim		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "../includes/ScalarConverter.hpp"

//Method
void ScalarConverter::convert(std::string &literal)
{
	char	c = 0;
	int		i = 0;
	float	f = 0;
	double	d = 0;
	bool	c_conversion = true;
	bool	i_conversion = true;

	if (literal.compare("nanf") == 0 || literal.compare("nan") == 0)
	{
		f = std::numeric_limits<float>::quiet_NaN();
		d =	std::numeric_limits<double>::quiet_NaN();
		c_conversion = false;
		i_conversion = false;
	}
	else if (literal.compare("+inff") == 0 || literal.compare("+inf") == 0)
	{
		f = std::numeric_limits<float>::infinity();
		d =	std::numeric_limits<double>::infinity();
		c_conversion = false;
		i_conversion = false;
	}
	else if (literal.compare("-inff") == 0 || literal.compare("-inf") == 0)
	{
		f = -std::numeric_limits<float>::infinity();
		d =	-std::numeric_limits<double>::infinity();
		c_conversion = false;
		i_conversion = false;
	}
	else if (literal.find('.') != std::string::npos && literal.find('f') != std::string::npos)
	{
		try { f = std::stof(literal); } catch (std::exception &e)
		{
			std::cout << "Invalid possible type float input!" << std::endl;
			return;
		}
		c = static_cast<char>(f);
		i = static_cast<int>(f);
		d =	static_cast<double>(f);
	}
	else if (literal.find('.') != std::string::npos)
	{
		try { d = std::stod(literal); } catch (std::exception &e)
		{
			std::cout << "Invalid possible type double input!" << std::endl;
			return;
		}
		c = static_cast<char>(d);
		i = static_cast<int>(d);
		f =	static_cast<double>(d);
	}
	else if (literal.length() == 1 && literal[0] != '0')
	{
		c = literal.at(0);
		i = static_cast<int>(c);
		f = static_cast<float>(c);
		d =	static_cast<double>(c);
	}
	else
	{
		try { i = std::stoi(literal); } catch (std::exception &e)
		{
			std::cout << "Invalid possible type int input!" << std::endl;
			return;
		}
		c = static_cast<char>(i);
		f =	static_cast<float>(i);
		d = static_cast<double>(i);
	}

	if (!c_conversion)
		std::cout << "char: impossible" << std::endl;
	else if (!std::isprint(c))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: " << c << std::endl;

	if (!i_conversion)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << i << std::endl;

	std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) << d << std::endl;
}
