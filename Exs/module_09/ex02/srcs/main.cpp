#include "../includes/PmergeMe.hpp"

int main(int argc, char **argv)
{
	if (argc == 2 && !std::string(argv[1]).empty())
	{
		std::vector<int>	vec_res = ConvertStringToIntVector(argv[1]);
		std::deque<int>		deque_res = ConvertStringToIntDeque(argv[1]);
		int count = elementCount(argv[1]);

		std::cout << "Before: " << argv[1] << std::endl;

		clock_t vstart = clock();
		vectorMergeInsertionSort(vec_res, 0, (int)vec_res.size() - 1);
		clock_t vend = clock();
		double vectorElapsedTime = static_cast<double>(vend - vstart) / CLOCKS_PER_SEC * 1000;

		clock_t dstart = clock();
		dequeMergeInsertionSort(deque_res, 0, (int)deque_res.size() - 1);
		clock_t dend = clock();
		double dequeElapsedTime = static_cast<double>(dend - dstart) / CLOCKS_PER_SEC * 1000;

		std::cout << "After: ";
		PrintVectorArray(vec_res);

		std::cout << "Time to process a range of " << count << " elements with std::vector : " << vectorElapsedTime << " milliseconds" << std::endl;
		std::cout << "Time to process a range of " << count << " elements with std::deque : " << dequeElapsedTime << " milliseconds" << std::endl;
	}
	else
		std::cerr << "Input failed, try again!" << std::endl;
	return 0;
};
