// --------------------------------------------------------------------------------------------------------------------
// <copyright file="HelloWorld.cs" company="boolship">
//   Copyright (c) boolship 2012 boolship@gmail.com
// </copyright>
// <summary>
//   Defines the HelloWorld type.
// </summary>
// --------------------------------------------------------------------------------------------------------------------

namespace Interop101Part2_CLRClient
{
	using System;
	using System.Runtime.InteropServices;

	// This is CLR project (*not* Native)

	// (1) copy HelloWorldPart2.dll from ..\Interop101Series\Debug to \Interop101Series\Interop101Part2_Client\bin\Debug
	// (2) ditto for Release
	// (3) ditto after EVERY CHANGE to HelloWorldPart2.dll
	// (4) Select Menu, Debug, Exceptions, Managed Debugging Assistants: Unset PInfokeStackImbalance

	/// <summary>
	/// The CLR HelloWorld class
	/// </summary>
	public class HelloWorld
	{
		////                                                ??0CHelloWorld@@QAE@XZ
		////[DllImport("HelloWorldPart2.dll", EntryPoint = "??0CHelloWorld@@QAE@XZ")]

		/// <summary>
		/// pinvoke version of CHelloWorld_New
		/// </summary>
		/// <returns>
		/// instance of CHelloWorld
		/// </returns>
		[DllImport("HelloWorldPart2.dll", EntryPoint = "HelloWorld_New")]
		public static extern IntPtr NewHelloWorld();

		////                                                ??1HelloWorld@@QAE@XZ
		////[DllImport("HelloWorldPart2.dll", EntryPoint = "??1HelloWorld@@QAE@XZ")]
 
		/// <summary>
		/// pinvoke version of CHelloWorld_Delete
		/// </summary>
		/// <param name="hw">
		/// The hw instance.
		/// </param>
		[DllImport("HelloWorldPart2.dll", EntryPoint = "HelloWorld_Delete")]
		public static extern void DeleteHelloWorld(IntPtr hw);

		/// <summary>
		/// Example MarshalAs use to avoid: #pragma warning(disable:4273)
		/// </summary>
		/// <param name="m">
		/// The m string.
		/// </param>
		/// <returns>
		/// Marshalled int value
		/// </returns>
		[DllImport("msvcrt.dll", EntryPoint = "puts")]
		[return: MarshalAs(UnmanagedType.I4)]
		public static extern int Puts(
			[MarshalAs(UnmanagedType.LPStr)]
			string m);

		////                                                ?SayThis@HelloWorld@@QAEXPA_W@Z
		////[DllImport("HelloWorldPart2.dll", EntryPoint = "?SayThis@HelloWorld@@QAEXPA_W@Z", CharSet = CharSet.Unicode, CallingConvention = CallingConvention.ThisCall)]
		
		/// <summary>
		/// pinvoke version of SayThis
		/// </summary>
		/// <param name="thisptr">
		/// The thisptr.
		/// </param>
		/// <param name="phrase">
		/// The phrase.
		/// </param>
		[DllImport("HelloWorldPart2.dll", EntryPoint = "?SayThis@HelloWorld@@QAEXPA_W@Z", CharSet = CharSet.Unicode,
			CallingConvention = CallingConvention.ThisCall)]
		public static extern void SayThis(IntPtr thisptr, string phrase);

		// Interop 101 - Part 2
		// https ://blogs.msdn.com/b/borisj/archive/2006/08/21/711530.aspx
		//
		// Demonstrate 5 major scenarios.
		// (1)(a) Client in C++/CLI calls the native code, and (b) Native client calls Native DLL
		// (2) Client in C# calls the native code using its built-in interop functionality (a.k.a. P/Invoke)
		// (3) Client in C# calls the native code via a COM interface
		// (4) Client in C# calls the native code via a C++/CLI wrapper
		// (5)(a) Native client calls the C# code (DLL) via C++/CLI wrapper and (b) CLR Client calls C# code (DLL)

		/// <summary>
		/// (2) Client in C# calls the native code using its built-in interop functionality (a.k.a. P/Invoke)
		/// </summary>
		private static void Main()
		{
			IntPtr hw = NewHelloWorld();
			SayThis(hw, "I'm a C# application using DllImport!");
			DeleteHelloWorld(hw);
		}
	}
}
