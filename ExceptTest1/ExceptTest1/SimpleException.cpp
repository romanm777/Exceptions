#include "stdafx.h"
#include "SimpleException.h"

namespace custom_exceptions
{
	SimpleException::~SimpleException()
	{
	}

	char const* SimpleException::what() const
	{
		return "Simple exception message";
	}
}