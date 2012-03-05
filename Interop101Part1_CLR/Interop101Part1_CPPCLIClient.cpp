// Interop101Part1_CPPCLIClient.cpp : main project file.
//

// This is C++/CLI CLR project (*not* Native)

// (1) Project Properties, General
// Common Language Runtime Support (/clr)

#include "stdafx.h"
#include "..\Interop101Part1_DLL\HelloWorld.h"

using namespace System;

// Interop 101 - Part 1
// https ://blogs.msdn.com/b/borisj/archive/2006/07/29/683061.aspx
//
// Demonstrate 5 major scenarios.
// (1)(a) Client in C++/CLI calls the native code, and (b) Native client calls Native DLL
// (2) Client in C# calls the native code using its built-in interop functionality (a.k.a. P/Invoke)
// (3) Client in C# calls the native code via a COM interface
// (4) Client in C# calls the native code via a C++/CLI wrapper
// (5)(a) Native client calls the C# code (DLL) via C++/CLI wrapper and (b) CLR Client calls C# code (DLL)

// (1)(a) Client in C++/CLI calls the native code
int main(array<System::String ^> ^args)
{
	Console::WriteLine(L"Hello World");

	HelloWorld hw;
	hw.SayThis(L"I'm a managed C++ client");

	return 0;
}
