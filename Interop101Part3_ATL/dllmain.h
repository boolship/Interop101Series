// dllmain.h : Declaration of module class.

class CInterop101Part3_ATLModule : public ATL::CAtlDllModuleT< CInterop101Part3_ATLModule >
{
public :
	DECLARE_LIBID(LIBID_Interop101Part3_ATLLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_INTEROP101PART3_ATL, "{315DBC15-0EBE-4250-BC0F-74CF9987E767}")
};

extern class CInterop101Part3_ATLModule _AtlModule;
