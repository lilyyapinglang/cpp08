#include "Span.hpp"
#include <algorithm>
#include <exception>
#include <vector>

Span::Span(unsigned int N) : p(new std::vector<int>()), max_number(N)
{
}
// TODO: copy contructor

// TODO: copy assignement constructor
Span::~Span()
{
	delete	p;
}

void Span::addNumber(int num)
{
	if (p->size() <= max_number)
		p->push_back(num);
	else
		throw std::exception();
}

// ? need to check !!
int Span::shortestSpan()
{
	int	min_span;
	int	span;

	min_span = 0;
	sort(p->begin(), p->end());
	//{1,2,3,5,7,9}
	for (int i = 0; i < p->size(); i++)
	{
		for (int j = i + 1; j < p->size(); j++)
		{
			span = (*p)[j] - (*p)[i];
			if (span <= min_span)
				min_span = span;
		}
	}
	return (min_span);
}

int Span::longestSpan()
{
	//? find the biggest one
	std::vector<int>::iterator max = max_element(p->begin(), p->end());
	// find the smallest one
	std::vector<int>::iterator min = min_element(p->begin(), p->end());
	return (max - min);
}

//
void Span::addMultiNumber(std::vector<int>::iterator start,
	std::vector<int>::iterator end)
{
	std::vector<int>::iterator it;
	int size_added = (end - start) / sizeof(int);
	if (p->size() + size_added <= max_number)
	{
		for (it = start; it != end; ++it)
		{
			p->push_back(*it);
		}
	}
	else
		throw std::exception();
}