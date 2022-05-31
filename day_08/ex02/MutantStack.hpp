# ifndef MUTATED_ABOMINATION
#define MUTATED_ABOMINATION

#include <iostream>
#include <stack>
#include <algorithm>

/*


	typedef __deque_base<value_type, allocator_type> __base;

	typedef typename __base::__alloc_traits        __alloc_traits;
	typedef typename __base::reference             reference;
	typedef typename __base::const_reference       const_reference;
	typedef typename __base::iterator              iterator;

*/


template <typename T>
class MutantStack : public std::stack<T > {
	public:
		// Orthodox Canonical form
		MutantStack();
		~MutantStack();
		MutantStack(const MutantStack& instance);
		MutantStack& operator=(const MutantStack& instance);

		// member fct
		typedef std::stack<T >	stack;

		typedef typename stack::container_type::iterator 	iterator;

		typedef typename stack::container_type::const_iterator 	const_iterator;

		iterator begin() { return this->c.begin(); }

		const_iterator begin() const { return this->c.begin(); }

		iterator end() { return this->c.end(); }

		const_iterator end() const { return this->c.end(); }	
};

#include "MutantStack.tpp"

#endif
