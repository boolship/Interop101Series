// HelloWorld.cpp
//
// DLL VERSION 3
//

// This is a Native DLL project (*not* CLR)

//#include <Windows.h>
#include "stdafx.h"
#include "HelloWorld.h"


// This is an example of an exported variable
int nHelloWorld=0;

// This is an example of an exported function.
int fnHelloWorld(void)
{
	return 42;
}

void HelloWorld::SayThis(wchar_t *phrase)
{
	MessageBox(NULL, phrase, L"Hello World Says", MB_OK);
}

// This is the constructor of a class that has been exported.
// see HelloWorld.h for the class definition
HelloWorld::HelloWorld(void)
{
	return;
}

HelloWorld::~HelloWorld(void)
{
	return;
}

