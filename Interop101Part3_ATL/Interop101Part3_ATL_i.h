

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0555 */
/* at Sat Mar 03 20:35:39 2012
 */
/* Compiler settings for Interop101Part3_ATL.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 7.00.0555 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __Interop101Part3_ATL_i_h__
#define __Interop101Part3_ATL_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IHelloWorldWrapper_FWD_DEFINED__
#define __IHelloWorldWrapper_FWD_DEFINED__
typedef interface IHelloWorldWrapper IHelloWorldWrapper;
#endif 	/* __IHelloWorldWrapper_FWD_DEFINED__ */


#ifndef __HelloWorldWrapper_FWD_DEFINED__
#define __HelloWorldWrapper_FWD_DEFINED__

#ifdef __cplusplus
typedef class HelloWorldWrapper HelloWorldWrapper;
#else
typedef struct HelloWorldWrapper HelloWorldWrapper;
#endif /* __cplusplus */

#endif 	/* __HelloWorldWrapper_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IHelloWorldWrapper_INTERFACE_DEFINED__
#define __IHelloWorldWrapper_INTERFACE_DEFINED__

/* interface IHelloWorldWrapper */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IHelloWorldWrapper;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("50850CA8-75BE-4C44-8A96-AB0E8FD7E13E")
    IHelloWorldWrapper : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SayThis( 
            /* [in] */ BSTR phrase) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IHelloWorldWrapperVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IHelloWorldWrapper * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IHelloWorldWrapper * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IHelloWorldWrapper * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IHelloWorldWrapper * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IHelloWorldWrapper * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IHelloWorldWrapper * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IHelloWorldWrapper * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SayThis )( 
            IHelloWorldWrapper * This,
            /* [in] */ BSTR phrase);
        
        END_INTERFACE
    } IHelloWorldWrapperVtbl;

    interface IHelloWorldWrapper
    {
        CONST_VTBL struct IHelloWorldWrapperVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IHelloWorldWrapper_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IHelloWorldWrapper_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IHelloWorldWrapper_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IHelloWorldWrapper_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IHelloWorldWrapper_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IHelloWorldWrapper_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IHelloWorldWrapper_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IHelloWorldWrapper_SayThis(This,phrase)	\
    ( (This)->lpVtbl -> SayThis(This,phrase) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IHelloWorldWrapper_INTERFACE_DEFINED__ */



#ifndef __Interop101Part3_ATLLib_LIBRARY_DEFINED__
#define __Interop101Part3_ATLLib_LIBRARY_DEFINED__

/* library Interop101Part3_ATLLib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_Interop101Part3_ATLLib;

EXTERN_C const CLSID CLSID_HelloWorldWrapper;

#ifdef __cplusplus

class DECLSPEC_UUID("FA8BDA6C-622B-4EBD-8AD3-62DAE13CB813")
HelloWorldWrapper;
#endif
#endif /* __Interop101Part3_ATLLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


