#include "stdafx.h"

#include "IEStringHandle.h"

#ifdef _DEBUG
#define new new(_NORMAL_BLOCK, __FILE__, __LINE__)
#endif


///////////////////////////////////
/*!
	valの桁数を求める。
*/
int IEStringHandle::GetDigit(int val)
{
	int i=0;
	int dig = abs(val);
	for(i=0; dig!=0; i++){
		dig /= 10;
	}

	if(dig <0){
		i++;
	}

	return i;
}

///////////////////////////////////
/*!
	文字列がすべて数字ならtrueを返す。
	@return
*/
bool IEStringHandle::IsAllDigitStr(const char* str){
	int i;
	for(i=0; str[i] != '\0'; i++){
		if(!isdigit(str[i])){
			return false;
		}
	}
	return true;
}
