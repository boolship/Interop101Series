#include "StdAfx.h"
#include "NativeHello.h"

NativeHello::NativeHello()
{
	// initialized managed hello world
	hw = gcnew HelloWorld();
}

NativeHello::~NativeHello(void)
{
	// nothing to do :)
}

void NativeHello::Speak()
{
	hw->Speak();
}

