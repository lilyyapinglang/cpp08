#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <deque>

template <class T, class Container = std::deque<T>> class MustantStack
{
  protected:
  public:
	MustantStack();
	// copy constructor
	MustantStack(const MustantStack &other);
	// copy assignment constructor
	MustantStack &operator=(const MustantStack &other);
	~MustantStack();

	// access the top element, takes no parameter,
	//	return reference to the last element
	reference top();
	const_reference top() const;
	// check whether the container adaptor is empty
	bool empty() const;
	// returns the number of elements
	size_type size() const;
	// inserts element at the top
	void push(const value_type &value);
	void push(value_type &&value);
	// removes the top element
	void pop();
	// add iterators
	// returns an iterator to the beginning
	iterator begin();
	const_iterator begin() const;
	// returns an iterator to the end
	iterator end();
	const_iterator end() const;
	// returns a reverse iterator to the beginning
	reverse_iterator rbegin();
	const_reverse_iterator rbegin() const;
	// returns a reverse iterator to the end
	reverse_iterator rend();
	const_reverse_iterator rend() const;
};

#endif