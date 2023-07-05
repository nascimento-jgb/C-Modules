#include "../includes/BitcoinExchange.hpp"

//Input Methods
bool	BitcoinExchange::isValidDate(const std::string &dateString)
{
	if (dateString.length() != 11)
		return false;

	int	year, month, day;
	if (std::sscanf(dateString.c_str(), "%d-%d-%d ", &year, &month, &day) != 3)
		return false;

	if (year <= 0 || month <= 0 || month > 12 || day <= 0 || day > 31)
		return false;

	if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
		return false;

	if (month == 2)
	{
		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		{
			if (day > 29)
				return false;
		}
		else
		{
			if (day > 28)
				return false;
		}
	}
	return true;
}

void	BitcoinExchange::dataParser(void)
{
	std::ifstream dataFile("data.csv");

	try
	{
		if (!dataFile)
			throw BitcoinExchange::MyException("Not able to open the file");
		if (!std::getline(dataFile, line))
			throw BitcoinExchange::MyException("File is empty or badly formatted.");
		while (std::getline(dataFile, line))
		{
			std::istringstream	iss(line);
			std::string			dateString;
			std::string			valueString;

			if (std::getline(iss, dateString, ',') && std::getline(iss, valueString))
			{
				float value = std::stof(valueString);
				dataMap.insert(std::pair<std::string, float>(dateString, value));
			}
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
	dataFile.close();
	return ;
}

void	BitcoinExchange::inputParser(char *argv)
{
	std::ifstream inputFile(argv);

	try
	{
		if (!inputFile)
			throw BitcoinExchange::MyException("Not able to open the file");
		if (std::getline(inputFile, line))
		{
			if (line != "date | value")
				throw BitcoinExchange::MyException("Invalid header format");
		}
		else
			throw BitcoinExchange::MyException("File is empty or badly formatted.");
		while (std::getline(inputFile, line))
		{
			std::istringstream	iss(line);
			std::string			dateString;
			std::string			valueString;

			if (std::getline(iss, dateString, '|') && std::getline(iss, valueString))
			{
				float value = std::stof(valueString);
				if (!isValidDate(dateString))
					std::cerr << "Error: Invalid date input!" << std::endl;
				else if (value >= 0 && value <= 1000)
					inputMap.insert(std::pair<std::string, float>(dateString, value));
				else
					std::cerr << "Error: Invalid value input!" << std::endl;
			}
			else
				std::cerr << "Error: Invalid reading input!" << std::endl;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
	inputFile.close();
	return ;
}

void	BitcoinExchange::printMap(void)
{
	for (std::map<std::string, float>::iterator it = inputMap.begin(); it != inputMap.end(); it++)
	{
		std::map<std::string, float>::iterator datait = dataMap.begin();
		while (datait->first < it->first)
			++datait;
		std::cout << "Date: " << it->first << ", Value: " << it->second << " = " << it->second * (--datait)->second << std::endl;
	}
}

void	BitcoinExchange::Exchange(char *argv)
{
	try
	{
		if (strcmp(argv , "input.txt"))
			throw BitcoinExchange::MyException("Invalid file name!");
		else
		{
			inputParser(argv);
			dataParser();
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

//Exceptions
const char *BitcoinExchange::MyException::what(void) const throw() { return (m_message); }


