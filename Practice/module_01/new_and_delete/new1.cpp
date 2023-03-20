/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new1.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 15:51:21 by jonascim          #+#    #+#             */
/*   Updated: 2023/03/18 15:58:09 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Student
{
	private:

		std::string _login;

	public:

		Student(std::string login ) : _login(login)
		{
			std::cout << "Student" << this->_login << " is born" << std::endl;
		}

		~Student()
		{
			std::cout << "Student" << this->_login << " died" << std::endl;
		}
};

int main()
{
	Student	bob = Student("bfubar");
	Student *jim = new Student("jfubar");

	delete jim;
	return (0);
}
