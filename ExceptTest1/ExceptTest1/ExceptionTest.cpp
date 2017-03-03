#include "stdafx.h"
#include "ExceptionTest.h"
#include "SimpleException.h"

namespace exception_test
{
	void my_terminate_handler( )
	{
		std::cout << "My terminate handler has launched." << std::endl;
	}

	void my_unexpected_handler( )
	{
		std::cout << "My unexpected handler has launched." << std::endl;
	}

	void simple_exception_test( )
	{
		// simple derived exception using
		try
		{
			throw custom_exceptions::SimpleException( );
		}
		catch ( const custom_exceptions::SimpleException& exc )
		{
			std::cout << "simple_exception_test( ). custom_exceptions::SimpleException was catched. Message: " << exc.what( ) << std::endl;
		}
	}

	void make_exception( )
	{
		std::set_terminate( my_terminate_handler );
		std::set_unexpected( my_unexpected_handler );

		throw std::exception( );
	}

	void exception_test( )
	{
		try
		{
			make_exception( );
		}
		catch ( const std::exception& exc )
		{
			std::cout << "exception_test( ). std::exception has catched. Message: " << exc.what( ) << std::endl;
		}
	}

	void handlers_test( )
	{
		try 
		{
			make_exception( );
		}
		catch ( std::bad_alloc& ba )
		{
			std::cout << "handlers_test( ). bad_alloc exception has catched. Message: " << ba.what() << std::endl;
		}
		catch ( ... )
		{
			std::cout << "Unexpected exception has catched." << std::endl;
		}
	}

	void bad_alloc_test( )
	{
		try
		{
			new int[1000000000ul];
		}
		catch ( const std::bad_alloc& bal )
		{
			std::cout << "bad_alloc_test( ). Bad alloc exception has catched. Message: " << bal.what() << std::endl;
		}
	}

	void bad_typeid_test( )
	{
		try
		{
			std::exception* exc = nullptr;
			std::cout << typeid(*exc).name( ) << std::endl;
		}
		catch ( const std::bad_typeid& tid )
		{
			std::cout << "bad_typeid_test( ). Bad alloc exception has catched. Message: " <<  tid.what( ) << std::endl;
		}
	}
}