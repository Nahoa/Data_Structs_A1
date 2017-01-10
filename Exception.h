#ifndef EXCEPTION_H
#define EXCEPTION_H

#include <iostream>
using std::ostream;

class Exception
{
public:
	Exception();
	Exception(char * copy); // ctor with a char * parameter
	Exception(const Exception & copy); // copy ctor
	Exception& operator=(const Exception & rhs);
	~Exception();
	const char * GetMessage();
	void SetMessage(char * msg);
private:
	char * m_msg;
};
//output operator cannot be in the class because it has to be a data memeber this was the overloaded operator is free
ostream& operator<<(ostream& stream, const Exception& except);
#endif
