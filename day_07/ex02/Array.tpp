template <typename T>
Array<T>::Array() {
	std::cout << "Default Constructor" << std::endl;
	arr = NULL;
	_size = 0;
}

template <typename T>
Array<T>::Array(unsigned int n) {
	std::cout << "Parameterized Constructor" << std::endl;
	arr = new T[n];
	_size = n;
	for (int i=0; i < n; i++) {
		arr[i] = T();
	}
}

template <typename T>
Array<T>::~Array() {
	std::cout << "Default Destructor" << std::endl;
	delete [] arr;
}

template <typename T>
Array<T>::Array(const Array& instance) {
	std::cout << "Copy Constructor" << std::endl;
	*this = instance;
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& instance) {
	std::cout << "Copy Assignement operator" << std::endl;
	arr = new T[instance.size()];
	for (int i = 0; i < instance.size() ;i++) {
		arr[i] = instance.arr[i];
	}
	return *this;
}

template <typename T>
int	Array<T>::size() const {
	return (_size);
}

template <typename T>
T Array<T>::operator[] (unsigned int j) {
	for (int i = 0; i < size(); i++)
	{
		if (i == j)
			return (arr[i]);
	}
	throw (MyException());
}

template <typename T>
const char* Array<T>::MyException::what() const throw () {
	return "Index id out of bounds";
}
