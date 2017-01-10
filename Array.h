#ifndef ARRAY_H
#define ARRAY_H
template <typename T> class Array
{
public:
	Array();
	Array(int length, int start_index = 0); // sets the start index to zero
	Array(const Array & copy); //Copy Ctor 
	~Array();
	Array& operator=(const Array &rhs); // overloading the = assignment operator
	T & operator[](int index); //overloads the template [] operator 
	int GetStartIndex(); //returns the starting index of the array
	void SetStartIndex(int start_index); // sets the starting index of the array
	int GetLength(); //gets the Length of the array
	void SetLength(int Length);// sets the length of the array

private:
	T * m_array; 
	int m_length;
	int m_start_index;
};
#endif
