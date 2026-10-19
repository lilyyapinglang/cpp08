#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <cstddef>
# include <exception>

// Assuming T is a container of integers, aka a vector int or a list of int,
// or a set of int,
// this function has to find the first occurrence of the second parameter in the first parameter.
// If no occurrence is found
//-throw an exception
// or return an error value of your choice
template <typename T> typename T::iterator easyfind(T &a, int b)
{
	// iterata and find b ,
	typename T::iterator it;
	for (it = a.begin(); it != a.end(); ++it)
	{
		if (*it == b)
			return (it);
	}
	if (it == a.end())
		throw std::exception();
}
#endif