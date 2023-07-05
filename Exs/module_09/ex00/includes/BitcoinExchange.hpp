#ifndef BITCOINEXCHANGE_H
# define BITCOINEXCHANGE_H

#include <string>
#include <cstring>
#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <exception>

class BitcoinExchange
{
	private:
		std::multimap<std::string, float>	inputMap;
		std::map<std::string, float>	dataMap;
		std::string						line;

	public:
		//Input Methods
			void	Exchange(char *argv);
			void	inputParser(char *argv);
			void	dataParser(void);
			bool	isValidDate(const std::string &dateString);
			void	printMap(void);

		//Exceptions
		class MyException : public std::exception
		{
			public:
				virtual const char	*what() const throw();
				MyException(const char *message) : m_message(message) {}
			private:
				const char	*m_message;
		};
};

#endif
