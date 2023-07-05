#include "../includes/BitcoinExchange.hpp"

int main(int argc, char **argv)
{
	BitcoinExchange btc;

	try
	{
		if (argc != 2)
			throw BitcoinExchange::MyException("Not able to run the program. Try again.");
		else
		{
			btc.Exchange(argv[1]);
			btc.printMap();
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
	return 0;
};
