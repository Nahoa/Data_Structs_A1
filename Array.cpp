#include "Array.h"
#include "Exception.h"


template<typename T>
Array<T>::Array()
{
	m_length = 0; // sets 0 as the default length 
	m_start_index = 0; // sets starting index to 0
	m_array = new T[m_length]; // creates a templated array with 0 entries in the array
}

template<typename T>
Array<T>::Array(int length, int start_index)
{
	m_length = length;
	m_start_index = start_index;

	m_array = new T[m_length];
	
}

template<typename T>
Array<T>::Array(const Array & copy) //copy Ctor
{
	GetLength = copy.GetLength; // puts 
	GetStartIndex = copy.GetStartIndex;
	//deep copy?
}

template<typename T>
Array<T>::~Array()
{
	// have to restore the defaults of the data memebers 
	if (m_lenth == 0) // checks to see if the array is empty
	{
		delete[] Array; // deletes the empty array 
	}
	else
	{
		for (int i = 0; i < m_length; i++) //goes through the array and deletes each element 
		{
			delete[] Array[i]; // deletes the element at i

		}
		delete [] Array; //when the array is empty this deletes the array
	}

	m_length = 0; // restores the length to a default state
	m_start_index = 0; //restores the length to a default state
}

template<typename T>
Array & Array<T>::operator=(const Array & rhs) // assignment operator
{
	// TODO: insert return statement here
	if (this != &rhs) //checks to see if the left side element is not the same as the right side element
	{
		
	}
	return *this;
}


template<typename T>
T & Array<T>::operator[](int index)
{
	
	// TODO: insert return statement here
	if (index > m_length+m_start_index) //checks to see if the thing being checked is in the length range
	{ 
		//throws exception that the index is above the range
		Exception().SetMessage("Above Range");
	}
	else if (index < m_start_index) //checks to see if the index being accessed is above the start index
	{
		//throws exception that the index is below the range
		Exception().SetMessage("Below Range");
	}
	else
	{
		return Array[index]; 
	}

}

template<typename T>
int Array<T>::GetStartIndex()
{
	return m_start_index;
}

template<typename T>
void Array<T>::SetStartIndex(int start_index)
{
	m_start_index = start_index;
}

template<typename T>
int Array<T>::GetLength()
{
	return m_length;
}

template<typename T>
void Array<T>::SetLength(int Length)
{
	m_length = Length;
}
