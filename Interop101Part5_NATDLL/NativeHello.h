
#pragma once

#ifdef _MANAGED
//#using <HelloWorldPart5.dll>
#using "..\Interop101Part5_CLRDLL\bin\Release\HelloWorldPart5.dll"
#include <gcroot.h>
//#include <vcclr.h>
using namespace Interop101Part5_CLRDLL;
#else
#include <stddef.h>
#endif

class NativeHello
{
private:
#ifdef _MANAGED
	gcroot<HelloWorld^> hw;
#else
	intptr_t hw;
#endif
public:
	_declspec(dllexport) NativeHello();
	_declspec(dllexport) ~NativeHello();
	_declspec(dllexport) void Speak();
};

