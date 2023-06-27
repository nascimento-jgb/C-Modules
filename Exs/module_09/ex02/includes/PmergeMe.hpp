#ifndef PMERGEME_H
# define PMERGEME_H

#include <iostream>
#include <sstream>
#include <vector>
#include <deque>
#include <ctime>

//Vector Algorithm Solution
void	vectorInsertionSort(std::vector<int> &arr, int low, int high);
void	vectorMerge(std::vector<int> &arr, int low, int mid, int high);
void	vectorMergeInsertionSort(std::vector<int> &arr, int low, int high);

//Deque Algorithm Solution
void	dequeInsertionSort(std::deque<int> &arr, int low, int high);
void	dequeMerge(std::deque<int> &arr, int low, int mid, int high);
void	dequeMergeInsertionSort(std::deque<int> &arr, int low, int high);

//Auxiliar Functions
std::vector<int>	ConvertStringToIntVector(const std::string &expression);
std::deque<int>		ConvertStringToIntDeque(const std::string &expression);
void				PrintVectorArray(std::vector<int> &arr);
void				PrintDequeArray(std::deque<int> &arr);
int					elementCount(const std::string &expression);
#endif
