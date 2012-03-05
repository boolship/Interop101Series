// --------------------------------------------------------------------------------------------------------------------
// <copyright file="HelloWorld.cs" company="boolship">
//   Copyright (c) boolship 2012 boolship@gmail.com
// </copyright>
// <summary>
//   Defines the Program type.
// </summary>
// --------------------------------------------------------------------------------------------------------------------

namespace Interop101Part4_CLRClient
{
	using Interop101Part4_CPPCLI;

	// This is CLR project (*not* Native)

	// (1) copy \Interop101Series\Debug\HelloWorldPart4.dll into \Interop101Series\Interop101Part4_Client\bin\Debug
	// (2) ditto for Release
	// (3) ditto for EVERY CHANGE to HelloWorldPart4.dll

	/// <summary>
	/// The CLR HelloWorld class
	/// </summary>
	public class HelloWorld
	{
		// Interop 101 - Part 4
		// https ://blogs.msdn.com/b/borisj/archive/2006/09/28/769708.aspx
		//
		// Demonstrate 5 major scenarios.
		// (1)(a) Client in C++/CLI calls the native code, and (b) Native client calls Native DLL
		// (2) Client in C# calls the native code using its built-in interop functionality (a.k.a. P/Invoke)
		// (3) Client in C# calls the native code via a COM interface
		// (4) Client in C# calls the native code via a C++/CLI wrapper
		// (5)(a) Native client calls the C# code (DLL) via C++/CLI wrapper and (b) CLR Client calls C# code (DLL)

		/// <summary>
		/// (4) Client in C# calls the native code via a C++/CLI wrapper
		/// </summary>
		private static void Main()
		{
			var mhw = new ManagedHelloWorld();
			mhw.SayThis("I'm a C# application calling native code via C++ interop!");
		}
	}
}
