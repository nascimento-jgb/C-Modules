/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new2.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 15:58:45 by jonascim          #+#    #+#             */
/*   Updated: 2023/03/18 16:02:06 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Student
{
	private:

		std::string _login;

	public:

		Student() : _login("default")
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
	Student *students = new Student[42];

	delete []students;
	return (0);
}
