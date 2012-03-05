// HelloWorldWrapper.h : Declaration of the CHelloWorldWrapper

#pragma once
#include "resource.h"       // main symbols

#include "Interop101Part3_ATL_i.h"
#include "..\Interop101Part3_DLL\HelloWorld.h"

#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;

// CHelloWorldWrapper

class ATL_NO_VTABLE CHelloWorldWrapper :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CHelloWorldWrapper, &CLSID_HelloWorldWrapper>,
	public IDispatchImpl<IHelloWorldWrapper, &IID_IHelloWorldWrapper, &LIBID_Interop101Part3_ATLLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CHelloWorldWrapper() : hw(new HelloWorld())
	{
	}

	~CHelloWorldWrapper()
	{
		delete hw;
	}

DECLARE_REGISTRY_RESOURCEID(IDR_HELLOWORLDWRAPPER)

BEGIN_COM_MAP(CHelloWorldWrapper)
	COM_INTERFACE_ENTRY(IHelloWorldWrapper)
	COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()

	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		return S_OK;
	}

	void FinalRelease()
	{
	}

private:
	HelloWorld *hw; // The original encapsulated native HelloWorld

public:
	STDMETHOD(SayThis)(BSTR phrase); // The exported method
};

OBJECT_ENTRY_AUTO(__uuidof(HelloWorldWrapper), CHelloWorldWrapper)
