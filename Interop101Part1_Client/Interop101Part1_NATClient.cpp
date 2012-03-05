// Interop101Part1_NATClient.cpp : Defines the entry point for the console application.
//

// This is Native project (*not* CLR)

// (1) Client must add DLL lib
// Select Interop101Part1_Client, Add Existing Item, choose Interop101Series\Debug\HelloWorld.lib

// (2) Client preprocessor must *NOT* define HELLOWORLD_EXPORTS tag. E.g. 
// correct is WIN32;_DEBUG;_CONSOLE;%(PreprocessorDefinitions)

// (3 Execution of Interop101Part1_Client.exe depends on HelloWorld.dll

#include "stdafx.h"
#include "..\Interop101Part1_DLL\HelloWorld.h"

// Interop 101 - Part 1
// https ://blogs.msdn.com/b/borisj/archive/2006/07/29/683061.aspx
//
// Demonstrate 5 major scenarios.
// (1)(a) Client in C++/CLI calls the native code, and (b) Native client calls Native DLL
// (2) Client in C# calls the native code using its built-in interop functionality (a.k.a. P/Invoke)
// (3) Client in C# calls the native code via a COM interface
// (4) Client in C# calls the native code via a C++/CLI wrapper
// (5)(a) Native client calls the C# code (DLL) via C++/CLI wrapper and (b) CLR Client calls C# code (DLL)

// (1)(b) Native client calls Native DLL
int wmain()
{
	HelloWorld hw;
	hw.SayThis(L"I'm a native client");

	return 0;
}

