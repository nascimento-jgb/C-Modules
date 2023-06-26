#include "../includes/BitcoinExchange.hpp"

int main(int argc, char **argv)
{
	BitcoinExchange btc;

	if (argc != 2)
		throw std::exception();
	else
	{
		btc.Exchange(argv[1]);
		btc.printMap();
	}
	return 0;
};
