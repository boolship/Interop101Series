// This is the main DLL file.

#include "stdafx.h"
#include "marshal.h"

#include "Interop101Part4_CPPCLI.h"

using namespace Interop101Part4_CPPCLI;

ManagedHelloWorld::ManagedHelloWorld() : hw(new HelloWorld())
{
}

ManagedHelloWorld::~ManagedHelloWorld()
{
	delete hw;
}

void ManagedHelloWorld::SayThis(System::String^ phrase)
{
	hw->SayThis(marshal::to<wchar_t*>(phrase));
}

