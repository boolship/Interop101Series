// Interop101Part5_NATClient.cpp : Defines the entry point for the console application.
//

// This is Native project (*not* CLR)

// (1) Client must add DLL lib
// Select Interop101Part5_NATClient, Add Existing Item, chooose \Interop101Series\Release\NativeHelloPart5.lib

// (2) Client preprocess typically defines _MANAGED implicitly
// correct is WIN32;_DEBUG;_CONSOLE;%(PreprocessorDefinitions)

// (3) Execution of Interop101Part5_NATClient.exe depends on NativeHelloPart5.dll *and* HelloWorldPart5.dll
// copy \Interop101Series\Interop101Part5_CLRDLL\bin\Debug\HelloWorldPart5.dll into \Interop101Series\Debug
// ditto for Release
// ditto for EVERY CHANGE to HelloWorldPart5.dll

// (4) Execution of \Interop101Part5_CLRClient\Interop101Part5_CLRClient.exe depends on HelloWorldPart5.dll
// Check \Interop101Part5_CLRDLL\bin\Debug\HelloWorldPart5.dll to \Interop101Part5_CLRClient\bin\Debug\
// Check \Interop101Part5_CLRDLL\bin\Release\HelloWorldPart5.dll to \Interop101Part5_CLRClient\bin\Release\

#include "stdafx.h"
#include "..\Interop101Part5_NATDLL\NativeHello.h"

// Interop 101 - Part 5
// https ://blogs.msdn.com/b/borisj/archive/2007/02/09/interop-101-part-5.aspx
//
// Demonstrate 5 major scenarios.
// (1)(a) Client in C++/CLI calls the native code, and (b) Native client calls Native DLL
// (2) Client in C# calls the native code using its built-in interop functionality (a.k.a. P/Invoke)
// (3) Client in C# calls the native code via a COM interface
// (4) Client in C# calls the native code via a C++/CLI wrapper
// (5)(a) Native client calls the C# code (DLL) via C++/CLI wrapper and (b) CLR Client calls C# code (DLL)

// (5)(a) Native client calls the C# code (DLL) via C++/CLI wrapper
int _tmain(int argc, _TCHAR* argv[])
{
	NativeHello nh;
	nh.Speak();

	return 0;
}

