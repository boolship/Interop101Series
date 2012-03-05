// --------------------------------------------------------------------------------------------------------------------
// <copyright file="HelloWorld.cs" company="boolship">
//   Copyright (c) boolship 2012 boolship@gmail.com
// </copyright>
// <summary>
//   The C# HelloWorld class
// </summary>
// --------------------------------------------------------------------------------------------------------------------

namespace Interop101Part3_CLRClient
{
	using Interop101Part3_ATLLib;

	// This is CLR project (*not* Native)

	/// <summary>
	/// The C# HelloWorld class
	/// </summary>
	public class HelloWorld
	{
		// Interop 101 - Part 3
		// https ://blogs.msdn.com/b/borisj/archive/2006/09/02/737144.aspx
		//
		// Demonstrate 5 major scenarios.
		// (1)(a) Client in C++/CLI calls the native code, and (b) Native client calls Native DLL
		// (2) Client in C# calls the native code using its built-in interop functionality (a.k.a. P/Invoke)
		// (3) Client in C# calls the native code via a COM interface
		// (4) Client in C# calls the native code via a C++/CLI wrapper
		// (5)(a) Native client calls the C# code (DLL) via C++/CLI wrapper and (b) CLR Client calls C# code (DLL)

		/// <summary>
		/// (3) Client in C# calls the native code via a COM interface
		/// </summary>
		private static void Main()
		{
			// HelloWorldWrapper is the COM wrapper object
			IHelloWorldWrapper ihw = new HelloWorldWrapper();
			ihw.SayThis("I'm a C# application calling native code via COM interop!");
		}
	}
}
