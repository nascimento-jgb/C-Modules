/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 08:52:57 by jonascim          #+#    #+#             */
/*   Updated: 2023/03/24 14:04:18 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"
#include <cmath>

//Canonical Form
Fixed::Fixed(void) : _fixedPointValue(0)
{
	// std::cout << "Default contructor called" << std::endl;
	return ;
}

Fixed::Fixed(const int nbr) : _fixedPointValue(nbr << _fractionalBits)
{
	// std::cout << "Int constructor called" << std::endl;
	return ;
}

Fixed::Fixed(const float nbr) : _fixedPointValue(std::roundf(nbr * (1 << _fractionalBits)))
{
	// std::cout << "Float constructor called" << std::endl;
	return ;
}

Fixed::Fixed(Fixed const &cpy)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = cpy;
	return ;
}

Fixed	&Fixed::operator=(Fixed const &rhs)
{
	// std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->_fixedPointValue = rhs.getRawBits();
	return *this;
}

Fixed::~Fixed(void)
{
	// std::cout << "Destructor called" << std::endl;
	return;
}

std::ostream	&operator<<(std::ostream &out, Fixed const &i)
{
	out << i.toFloat();
	return out;
}

//Logical/Comparison Operators
bool	Fixed::operator>(Fixed const &rhs) const
{
	return (this->getRawBits() > rhs.getRawBits());
}

bool	Fixed::operator<(Fixed const &rhs) const
{
	return (this->getRawBits() < rhs.getRawBits());
}

bool	Fixed::operator>=(Fixed const &rhs) const
{
	return (this->getRawBits() >= rhs.getRawBits());
}

bool	Fixed::operator<=(Fixed const &rhs) const
{
	return (this->getRawBits() <= rhs.getRawBits());
}

bool	Fixed::operator==(Fixed const &rhs) const
{
	return (this->getRawBits() == rhs.getRawBits());
}

bool	Fixed::operator!=(Fixed const &rhs) const
{
	return (this->getRawBits() != rhs.getRawBits());
}


//Arithmetic Operators
Fixed	Fixed::operator+(const Fixed &rhs) const
{
	return (this->toFloat() + rhs.toFloat());
}

Fixed	Fixed::operator-(const Fixed &rhs) const
{
	return (this->toFloat() - rhs.toFloat());
}

Fixed	Fixed::operator*(const Fixed &rhs) const
{
	return (this->toFloat() * rhs.toFloat());
}

Fixed	Fixed::operator/(const Fixed &rhs) const
{
	return (this->toFloat() / rhs.toFloat());
}

//Increment and Decrement
Fixed	&Fixed::operator++(void)
{
	++this->_fixedPointValue;
	return *this;
}

Fixed	&Fixed::operator--(void)
{
	--this->_fixedPointValue;
	return *this;
}

Fixed	Fixed::operator++(int)
{
	Fixed temp(*this);

	temp._fixedPointValue = this->_fixedPointValue++;
	return temp;
}

Fixed	Fixed::operator--(int)
{
	Fixed temp(*this);

	temp._fixedPointValue = this->_fixedPointValue--;
	return temp;
}

//Max and Min overload
Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return a;
	return b;
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return a;
	return b;
}

const Fixed	&Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return a;
	return b;
}

const Fixed	&Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return a;
	return b;
}

//Conversions
float	Fixed::toFloat(void) const
{
	return (static_cast<float>(this->getRawBits()) / (1 << _fractionalBits));
}

int	Fixed::toInt(void) const
{
	return (this->_fixedPointValue >> _fractionalBits);
}

//Getter and Setter
int	Fixed::getRawBits(void) const
{
	// std::cout << "Get rawbits member function called" << std::endl;
	return (this->_fixedPointValue);
}

void	Fixed::setRawBits(int const raw)
{
	this->_fixedPointValue = raw;
	return ;
}
