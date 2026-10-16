#ifndef SPAN_HPP
# define SPAN_HPP

class Span
{
  public:
	// N is max number
	Span(unsigned int N);
	void addNumber(int a); // throw error when exceding N
	int shortestSpan();
	int longestSpan();
	// Implement a member function
	// to add multiple numbers to your Span in a single call.
	void addMultiNumber(int rangeOfIters);
	// sp.addNumber(myNumbers.begin(), myNumbers.end());
};
#endif