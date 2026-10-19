#include "easyfind.hpp"
#include <deque>
#include <iostream>
#include <list>
#include <string>
#include <vector>

// test only sequence containers, which is
// array, vector, deque, forward_list, list, basic_string,
//	inplace_vector
// std::basic_string
// std::string: Often treated or categorized as a sequence container specialized for characters.
int	main(void)
{
	int a[] = {1, 2, 3, 5, 6, 7, 9, 9, 9, 9};
	std::vector<int> test_int(a, a + sizeof(a) / sizeof(int));

	float b[] = {0.11001, 0.99541, 0.52054, 0.27715, 0.67520};
	std::list<float> test_float(a, a + sizeof(b) / sizeof(float));
	std::string test_str = "ahjkdhfkjdsahfldsafhlasd";
	std::string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
	// int arr[] = {11, 23, 45, 89};
	easyfind(test_int, 9);
	try
	{
		easyfind(test_float, 0);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		easyfind(test_str, 30);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		// easyfind(arr, 45);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}