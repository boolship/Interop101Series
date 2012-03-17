---------------------
REFERENCE
---------------------

Interop101Series Solution

Referenced Blog Articles

// Interop 101 - Part 1
// https ://blogs.msdn.com/b/borisj/archive/2006/07/29/683061.aspx

// Interop 101 - Part 2
// https ://blogs.msdn.com/b/borisj/archive/2006/08/21/711530.aspx

// Interop 101 - Part 3
// https ://blogs.msdn.com/b/borisj/archive/2006/09/02/737144.aspx

// Interop 101 - Part 4
// https ://blogs.msdn.com/b/borisj/archive/2007/02/09/interop-101-part-5.aspx

// Interop 101 - Part 5
// https ://blogs.msdn.com/b/borisj/archive/2007/02/09/interop-101-part-5.aspx


// Demonstrate 5 major scenarios.
// (1)(a) Client in C++/CLI calls the native code, and (b) Native client calls Native DLL
// (2) Client in C# calls the native code using its built-in interop functionality (a.k.a. P/Invoke)
// (3) Client in C# calls the native code via a COM interface
// (4) Client in C# calls the native code via a C++/CLI wrapper
// (5)(a) Native client calls the C# code (DLL) via C++/CLI wrapper and (b) CLR Client calls C# code (DLL)

---------------------

---------------------
TODO
---------------------

** MANUALLY WIRE-UP COM DLL

Projects: Interop101Part3_ATL & Interop101Part3_ATLPS

Manual workaround for register DLL

*** As Administrator *** Launch Visual Studio Command Prompt (2010) *** As Administrator ***

c:\Program Files (x86)\Microsoft Visual Studio 10.0\VC>

regsvr32 /u "C:\Users\admin\Documents\Visual Studio 2010\Projects\Interop101Series\Release\Interop101Part3_ATL.dll"
regsvr32 "C:\Users\admin\Documents\Visual Studio 2010\Projects\Interop101Series\Release\Interop101Part3_ATL.dll"

---------------------

---------------------
NOTES
---------------------

:: Part 0 Notes

Simple C++ HelloWorld program

---------------------

:: Part 1 Notes

Native client calls native DLL project

C++/CLI CLR client  calls native DLL project

---------------------

:: Part 2 Notes

copy \Interop101Series\Debug\HelloWorldPart2.dll into \Interop101Series\Interop101Part2_Client\bin\Debug
ditto for Release
ditto for EVERY CHANGE to HelloWorldPart2.dll

*** As Administrator *** Launch Visual Studio Command Prompt (2010) *** As Administrator ***

cd C:\Users\admin\Documents\Visual Studio 2010\Projects\Interop101Series\Debug
cd C:\Users\admin\Documents\Visual Studio 2010\Projects\Interop101Series\Debug

dumpbin /exports HelloWorldPart2.dll
dumpbin /exports HelloWorldPart2.dll

C:\Users\admin\Documents\Visual Studio 2010\Projects\Interop101Series\Debug>dumpbin /exports HelloWorldPart2.dll
Microsoft (R) COFF/PE Dumper Version 10.00.40219.01
Copyright (C) Microsoft Corporation.  All rights reserved.


Dump of file HelloWorldPart2.dll

File Type: DLL

  Section contains the following exports for HelloWorldPart2.dll

    00000000 characteristics
    4F63C4F2 time date stamp Fri Mar 16 18:55:46 2012
        0.00 version
           1 ordinal base
           8 number of functions
           8 number of names

    ordinal hint RVA      name

          1    0 0001118B ??0HelloWorld@@QAE@XZ = @ILT+390(??0HelloWorld@@QAE@XZ)
          2    1 0001107D ??1HelloWorld@@QAE@XZ = @ILT+120(??1HelloWorld@@QAE@XZ)
          3    2 00011023 ??4HelloWorld@@QAEAAV0@ABV0@@Z = @ILT+30(??4HelloWorld@@QAEAAV0@ABV0@@Z)
          4    3 000110F0 ?SayThis@HelloWorld@@QAEXPA_W@Z = @ILT+235(?SayThis@HelloWorld@@QAEXPA_W@Z)
          5    4 0001101E ?fnHelloWorld@@YAHXZ = @ILT+25(?fnHelloWorld@@YAHXZ)
          6    5 00017130 ?nHelloWorld@@3HA = ?nHelloWorld@@3HA (int nHelloWorld)
          7    6 0001112C HelloWorld_Delete = @ILT+295(_HelloWorld_Delete)
          8    7 0001100F HelloWorld_New = @ILT+10(_HelloWorld_New)

  Summary

        1000 .data
        1000 .idata
        2000 .rdata
        1000 .reloc
        1000 .rsrc
        4000 .text
       10000 .textbss


---------------------

:: Part 3 Notes

(1) Proxy-Stub (PS) Project properties

Configuration Properties, C/C++, General 

Debug:   Debug Information Format = Program Database (/Zi) {not Program Database and Edit and Continue (/ZI)}
Release: Debug Information Format = Program Database (/Zi)

(2) Attach 

Select Interop101Part3_ATL project in Solution Explorer, Show All Files
Add Existing Item, ..\Interop101Series\Release path, Interop101Part3_DLL.lib

Of course, you need to build the Release lib first.

(3) Skip error with register DLL during build.

Configuration Properties, Linker, General 
Debug:   Register Output = No
Release: Register Output = No

Per-user Redirection = No (does not matter on W7 x64)

(4) Manual workaround for register DLL

Configuration Properties, C/C++, General 

*** As Administrator *** Launch Visual Studio Command Prompt (2010) *** As Administrator ***

c:\Program Files (x86)\Microsoft Visual Studio 10.0\VC>

regsvr32 /u "C:\Users\admin\Documents\Visual Studio 2010\Projects\Interop101Series\Release\Interop101Part3_ATL.dll"
regsvr32 "C:\Users\admin\Documents\Visual Studio 2010\Projects\Interop101Series\Release\Interop101Part3_ATL.dll"


---------------------

:: Part 4 Notes

Interop101Part4_CLRClient project

copy \Interop101Series\Debug\HelloWorldPart4.dll into \Interop101Series\Interop101Part4_Client\bin\Debug
ditto for Release
ditto for EVERY CHANGE to HelloWorldPart4.dll


---------------------

:: Part 5 Notes

copy \Interop101Series\Interop101Part5_CLRDLL\bin\Debug\HelloWorldPart5.dll into \Interop101Series\Debug
ditto for Release
ditto for EVERY CHANGE to HelloWorldPart5.dll


---------------------

---------------------

