#pragma once

#include <iostream>
#include <cstdlib>  // Para rand() y srand()
#include <ctime>    // Para time()

template <typename T>
class Array
{
	private:
		T*		array;
		unsigned int	len;

	public:
		Array();
		Array(unsigned int n);
		Array(const Array &copy);
		Array &operator= (const Array &model);
		~Array();

		unsigned int	getLength() const;
		T&		operator[](unsigned int n);
		const T&	operator[](unsigned int n) const;
};

template <typename T>
Array<T>::Array(): array(NULL), len(0)
{

}

template <typename T>
Array<T>::Array(unsigned int n): array(new T[n]), len(n)
{

}

template <typename T>
Array<T>::Array(const Array& other): array(NULL), len(0)
{
	*this = other;
}

template <typename T>
Array<T>	&Array<T>::operator=(const Array<T> &model)
{
	unsigned int	i;

	if (this == &model)
		return (*this);
	delete[] this->array;
	this->len = model.len;
	this->array = new T[this->len];
	i = 0;
	while (i < this->len)
	{
		this->array[i] = model.array[i];
		i++;
	}
	return (*this);
}

template <typename T>
Array<T>::~Array()
{
	delete[] this->array;
}

template <typename T>
unsigned int	Array<T>::getLength() const
{
	return (this->len);
}

template <typename T>
T&		Array<T>::operator[](unsigned int index)
{
	if (index >= this->len)
		throw std::out_of_range("The index passed as parameter must be in the range");
	return (this->array[index]);
}

template <typename T>
const T&	Array<T>::operator[](unsigned int index) const
{
	if (index >= this->len)
		throw std::out_of_range("The index passed as parameter must be in the range");
	return (this->array[index]);
}

