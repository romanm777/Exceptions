#pragma once

/**
* @brief namespace intended to contain different exception test functions
*/
namespace exception_test
{
	/** Terminate handler callback definition */
	void my_terminate_handler( );
	
	/** Unexpected handler callback definition */
	void my_unexpected_handler( );

	/** Test usage of custom_exceptions::SimpleException class */
	void simple_exception_test( );
	
	/** Test usage of std::exception class */
	void exception_test( );
	
	/** Test usage of exeption handler callbacks*/
	void handlers_test( );

	/** */
	void bad_alloc_test( );

	/** */
	void bad_typeid_test( );
}
