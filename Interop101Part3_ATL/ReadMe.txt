========================================================================
    ACTIVE TEMPLATE LIBRARY : Interop101Part3_ATL Project Overview
========================================================================

AppWizard has created this Interop101Part3_ATL project for you to use as the starting point for
writing your Dynamic Link Library (DLL).

This file contains a summary of what you will find in each of the files that
make up your project.

Interop101Part3_ATL.vcxproj
    This is the main project file for VC++ projects generated using an Application Wizard.
    It contains information about the version of Visual C++ that generated the file, and
    information about the platforms, configurations, and project features selected with the
    Application Wizard.

Interop101Part3_ATL.vcxproj.filters
    This is the filters file for VC++ projects generated using an Application Wizard. 
    It contains information about the association between the files in your project 
    and the filters. This association is used in the IDE to show grouping of files with
    similar extensions under a specific node (for e.g. ".cpp" files are associated with the
    "Source Files" filter).

Interop101Part3_ATL.idl
    This file contains the IDL definitions of the type library, the interfaces
    and co-classes defined in your project.
    This file will be processed by the MIDL compiler to generate:
        C++ interface definitions and GUID declarations (Interop101Part3_ATL.h)
        GUID definitions                                (Interop101Part3_ATL_i.c)
        A type library                                  (Interop101Part3_ATL.tlb)
        Marshaling code                                 (Interop101Part3_ATL_p.c and dlldata.c)

Interop101Part3_ATL.h
    This file contains the C++ interface definitions and GUID declarations of the
    items defined in Interop101Part3_ATL.idl. It will be regenerated by MIDL during compilation.

Interop101Part3_ATL.cpp
    This file contains the object map and the implementation of your DLL's exports.

Interop101Part3_ATL.rc
    This is a listing of all of the Microsoft Windows resources that the
    program uses.

Interop101Part3_ATL.def
    This module-definition file provides the linker with information about the exports
    required by your DLL. It contains exports for:
        DllGetClassObject
        DllCanUnloadNow
        DllRegisterServer
        DllUnregisterServer
        DllInstall

/////////////////////////////////////////////////////////////////////////////
Other standard files:

StdAfx.h, StdAfx.cpp
    These files are used to build a precompiled header (PCH) file
    named Interop101Part3_ATL.pch and a precompiled types file named StdAfx.obj.

Resource.h
    This is the standard header file that defines resource IDs.

/////////////////////////////////////////////////////////////////////////////
Proxy/stub DLL project and module definition file:

Interop101Part3_ATLps.vcxproj
    This file is the project file for building a proxy/stub DLL if necessary.
	The IDL file in the main project must contain at least one interface and you must
	first compile the IDL file before building the proxy/stub DLL.	This process generates
	dlldata.c, Interop101Part3_ATL_i.c and Interop101Part3_ATL_p.c which are required
	to build the proxy/stub DLL.

Interop101Part3_ATLps.vcxproj.filters
    This is the filters file for the proxy/stub project. It contains information about the 
    association between the files in your project and the filters. This association is 
    used in the IDE to show grouping of files with similar extensions under a specific
    node (for e.g. ".cpp" files are associated with the "Source Files" filter).

Interop101Part3_ATLps.def
    This module definition file provides the linker with information about the exports
    required by the proxy/stub.

/////////////////////////////////////////////////////////////////////////////
