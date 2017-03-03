#include "stdafx.h"
#include "ExceptionTest.h"
#include "CustomException.h"

namespace exception_test
{
	void simple_exception_test()
	{
		// simple derived exception using
		try
		{
			throw custom_exceptions::SimpleException();
		}
		catch (const custom_exceptions::SimpleException& exc)
		{
			std::cout << "custom_exceptions::SimpleException was catched. Message" << exc.what() << std::endl;
		}
	}
}