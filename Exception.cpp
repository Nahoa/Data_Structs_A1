#include "Exception.h"

Exception::Exception()
{

}

Exception::Exception(char * copy)
{
	m_msg = copy; // assigns the characters entered to the data member
}

Exception::Exception(const Exception & copy)
{
	m_msg = copy.m_msg;
}


Exception & Exception::operator=(const Exception & rhs)
{
	// TODO: insert return statement here
}

Exception::~Exception()
{
}

const char * Exception::GetMessage()
{
	return m_msg;
}

void Exception::SetMessage(char * msg)
{
	m_msg = msg;
}

ostream & operator<<(ostream & stream, const Exception & except)
{
	// TODO: insert return statement here
	stream << except.GetMessage;
	return stream;
}
