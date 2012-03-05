
// This is a Native DLL project (*not* CLR)

#pragma once
#pragma warning(disable:4273)

// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the HELLOWORLD_EXPORTS_PART1
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// HELLOWORLD_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef HELLOWORLD_EXPORTS_PART1
#define HELLOWORLD_API __declspec(dllexport)
#else
#define HELLOWORLD_API __declspec(dllimport)
#endif

// This class is exported from the HelloWorld.dll
class HELLOWORLD_API HelloWorld {

public:
	HelloWorld(void);
	~HelloWorld(void);

	void SayThis(wchar_t *phrase);
};

extern HELLOWORLD_API int nHelloWorld;

HELLOWORLD_API int fnHelloWorld(void);

