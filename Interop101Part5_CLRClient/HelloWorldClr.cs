// --------------------------------------------------------------------------------------------------------------------
// <copyright file="HelloWorldClr.cs" company="boolship">
//   Copyright (c) boolship 2012 boolship@gmail.com
// </copyright>
// <summary>
//   Defines the Program type.
// </summary>
// --------------------------------------------------------------------------------------------------------------------

namespace Interop101Part5_CLRClient
{
	using Interop101Part5_CLRDLL;

	// This is CLR project (*not* Native)

	// Execution of \Interop101Part5_CLRClient\Interop101Part5_CLRClient.exe depends on HelloWorldPart5.dll
	// Check \Interop101Part5_CLRDLL\bin\Debug\HelloWorldPart5.dll in \Interop101Part5_CLRClient\bin\Debug\
	// Check \Interop101Part5_CLRDLL\bin\Release\HelloWorldPart5.dll in \Interop101Part5_CLRClient\bin\Release\

	/// <summary>
	/// The HelloWorld CLR class
	/// </summary>
	public class HelloWorldClr
	{
		// Interop 101 - Part 5
		// https ://blogs.msdn.com/b/borisj/archive/2007/02/09/interop-101-part-5.aspx
		//
		// Demonstrate 5 major scenarios.
		// (1)(a) Client in C++/CLI calls the native code, and (b) Native client calls Native DLL
		// (2) Client in C# calls the native code using its built-in interop functionality (a.k.a. P/Invoke)
		// (3) Client in C# calls the native code via a COM interface
		// (4) Client in C# calls the native code via a C++/CLI wrapper
		// (5)(a) Native client calls the C# code (DLL) via C++/CLI wrapper and (b) CLR Client calls C# code (DLL)

		/// <summary>
		/// (5)(b) CLR Client calls C# code (DLL)
		/// </summary>
		private static void Main()
		{
			var hw = new HelloWorld();
			hw.Speak();
		}
	}
}
