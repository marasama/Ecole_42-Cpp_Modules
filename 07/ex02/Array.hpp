#include <iostream>

template<typename T>
class Array
{
	private:
		unsigned int _size;
		T *_array;
	public:
		Array();
		Array(unsigned int n);
		Array(const Array &copy);
		~Array();
		unsigned int size(void);
		Array &operator=(const Array &other);
		T &operator[](unsigned int index);
		class OutOfBondException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Out of array bonds");
				};
		};
};

template<typename T>
Array<T>::Array()
{
	_size = 0;
	_array = new T();
}

template<typename T>
Array<T>::Array(const Array<T> &copy)
{
	_size = copy._size;
	_array = new T[_size];
	for (unsigned int i = 0; i < _size; i++)
	{
		_array[i] = copy._array[i];
	}
}

template<typename T>
Array<T>::Array(unsigned int n)
{
	_size = n;
	_array = new T[n];
	for (unsigned int i = 0; i < n; i++)
	{
		_array[i] = 0;
	} 
}

template<typename T>
Array<T>::~Array()
{
	delete [] _array;
}

template<typename T>
unsigned int Array<T>::size(void)
{
	return (_size);
}

template<typename T>
Array<T> &Array<T>::operator=(const Array<T> &other)
{
	_size = other._size;
	delete [] _array;

	_array = new T[size];
	for (int i = 0; i < _size; i++)
	{
		_array[i] = other._array[i];
	}

	return (*this);
}

template <typename T>
T &Array<T>::operator[](unsigned int n)
{
	if (n >= _size)
		throw Array<T>::OutOfBondException();
	return (_array[n]);
}