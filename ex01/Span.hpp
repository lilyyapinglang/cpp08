#ifndef SPAN_HPP
# define SPAN_HPP
# include <vector>
class Span
{
  private:
	std::vector<int> *p;
	unsigned int max_number;

  public:
	// N is max number
	Span(unsigned int N);
	void addNumber(int a); // throw error when exceding N
	int shortestSpan();
	int longestSpan();
	// Implement a member function
	// to add multiple numbers to your Span in a single call.
	void Span::addMultiNumber(std::vector<int>::iterator start,
		std::vector<int>::iterator end);
	// sp.addNumber(myNumbers.begin(), myNumbers.end());
};
#endif