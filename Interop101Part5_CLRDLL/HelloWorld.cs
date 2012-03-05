// --------------------------------------------------------------------------------------------------------------------
// <copyright file="HelloWorld.cs" company="boolship">
//   Copyright (c) boolship 2012 boolship@gmail.com
// </copyright>
// <summary>
//   Defines the HelloWorld type.
// </summary>
// --------------------------------------------------------------------------------------------------------------------

namespace Interop101Part5_CLRDLL
{
	using System.Windows.Forms;

	/// <summary>
	/// The CLR HelloWorld class
	/// </summary>
	public class HelloWorld
	{
		/// <summary>
		/// Simple counter.
		/// </summary>
		private static int counter;

		/// <summary>
		/// The Speak method wraps MessageBox
		/// </summary>
		public void Speak()
		{
			MessageBox.Show("Hello World #" + counter++);
		}
	}
}
