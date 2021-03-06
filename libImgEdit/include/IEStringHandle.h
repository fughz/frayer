#ifndef _IESTRINGHANDLE_H_
#define _IESTRINGHANDLE_H_

#include "LibIEDllHeader.h"

class _EXPORTCPP IEStringHandle
{
public:
	///////////////////////////////////
	/*!
		valの桁数を求める。
	*/
	static int GetDigit(int val);

	///////////////////////////////////
	/*!
		文字列がすべて数字ならtrueを返す。
		@return
	*/
	static bool IsAllDigitStr(const char* str);

};

#endif //_IESTRINGHANDLE_H_