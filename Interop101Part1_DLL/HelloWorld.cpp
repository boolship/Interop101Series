// HelloWorld.cpp : Defines the exported functions for the DLL application.
//
// DLL VERSION 1
//
// https ://blogs.msdn.com/b/borisj/archive/2006/07/29/683061.aspx
// Interop 101 - Part 1
// borisj
// 30 Jul 2006 2:42 AM 
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

