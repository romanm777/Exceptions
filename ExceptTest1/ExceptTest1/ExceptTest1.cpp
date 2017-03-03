// ExceptTest1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "ExceptionTest.h"

int main()
{
	/** Simple derived exception using */
	exception_test::simple_exception_test( );
	
	/** */
	exception_test::exception_test( );

	/** */
	exception_test::handlers_test( );

	/** */
	exception_test::bad_alloc_test( );

	/** */
	exception_test::bad_typeid_test( );


    return 0;
}

