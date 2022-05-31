

template <typename T>
MutantStack<T>::MutantStack() {
	std::cout << "Default Constructor" << std::endl;
}

template <typename T>
MutantStack<T>::~MutantStack() {
	std::cout << "Default Destructor" << std::endl;
}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack& instance) : std::stack<T> (instance) {
	std::cout << "Copy Constructor" << std::endl;
	*this = instance;
}

template <typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack& instance) {
	std::cout << "Copy Assignment operator" << std::endl;
	std::stack<T>::operator=(instance);
	return (*this);
}

