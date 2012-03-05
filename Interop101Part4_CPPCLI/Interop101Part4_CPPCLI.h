// Interop101Part4_CPPCLI.h

#pragma once
#include "..\Interop101Part4_DLL\HelloWorld.h"

using namespace System;

namespace Interop101Part4_CPPCLI {

	/*
	// Original native wrapper, CLR problem not solved
	class ManagedHelloWorld
	{
	private:
		HelloWorld hw;
	public:
		ManagedHelloWorld();
		~ManagedHelloWorld();

		void SayThis(wchar_t *phrase);
	};
	*/
	
	// (1) added: ref class, pointer *hw, SayThis variant
	// (2) The handle or "hat" (or "accent circonflexe" even) is part of the C++/CLI language. It represents a pointer to a managed object.
	// (3) C++ needs to differentiate between the stack, the native heap and the managed heap and it does so using * and ^.
	// (4) SayThis(System::String^ phrase) - We need to convert a managed String into a native pointer to wchar_t. 
	// (5) marshal.h - We create a library of static template functions, which thus remain stateless and help maintain a certain level of consistency.
	public ref class ManagedHelloWorld
	{
	private:
		HelloWorld *hw;
	public:
		ManagedHelloWorld();
		~ManagedHelloWorld();

		void SayThis(System::String^ phrase);
	};
}
