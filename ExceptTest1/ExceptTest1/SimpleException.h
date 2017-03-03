#pragma once

#include <exception>

namespace custom_exceptions 
{
	class SimpleException : public std::exception 
	{
	public:
		virtual ~SimpleException();
		virtual char const* what() const;
	};
}