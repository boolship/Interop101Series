// HelloWorld.cpp : Defines the entry point for the console application.
//
// https ://blogs.msdn.com/b/borisj/archive/2006/07/29/683061.aspx
// Interop 101 - Part 1
// borisj
// 30 Jul 2006 2:42 AM 
//

// This is Native project (*not* CLR)

#include <Windows.h>
#include "stdafx.h"
#include "HelloWorld.h"

void HelloWorld::SayThis(wchar_t *phrase)
{

	MessageBox(NULL, phrase, L"Hello World Says", MB_OK);

}

HelloWorld::HelloWorld()
{
	return;
}

HelloWorld::~HelloWorld()
{
	return;
}


int _tmain(int argc, _TCHAR* argv[])
{
	HelloWorld hw;

	hw.SayThis(L"I'm a native client");

	return 0;
}

