/*** Autogenerated by WIDL from mmdeviceapi.idl - Do not edit ***/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include <rpc.h>
#include <rpcndr.h>

#if !defined(COM_NO_WINDOWS_H) && !defined(__WINESRC__)
#include <windows.h>
#include <ole2.h>
#endif

#ifndef __WIDL_MMDEVICEAPI_H
#define __WIDL_MMDEVICEAPI_H

/* Forward declarations */

#ifndef __IMMNotificationClient_FWD_DEFINED__
#define __IMMNotificationClient_FWD_DEFINED__
typedef interface IMMNotificationClient IMMNotificationClient;
#endif

#ifndef __IMMDevice_FWD_DEFINED__
#define __IMMDevice_FWD_DEFINED__
typedef interface IMMDevice IMMDevice;
#endif

#ifndef __IMMDeviceCollection_FWD_DEFINED__
#define __IMMDeviceCollection_FWD_DEFINED__
typedef interface IMMDeviceCollection IMMDeviceCollection;
#endif

#ifndef __IMMEndpoint_FWD_DEFINED__
#define __IMMEndpoint_FWD_DEFINED__
typedef interface IMMEndpoint IMMEndpoint;
#endif

#ifndef __IMMDeviceEnumerator_FWD_DEFINED__
#define __IMMDeviceEnumerator_FWD_DEFINED__
typedef interface IMMDeviceEnumerator IMMDeviceEnumerator;
#endif

#ifndef __IMMDeviceActivator_FWD_DEFINED__
#define __IMMDeviceActivator_FWD_DEFINED__
typedef interface IMMDeviceActivator IMMDeviceActivator;
#endif

#ifndef __MMDeviceEnumerator_FWD_DEFINED__
#define __MMDeviceEnumerator_FWD_DEFINED__
typedef struct MMDeviceEnumerator MMDeviceEnumerator;
#endif /* defined __MMDeviceEnumerator_FWD_DEFINED__ */

/* Headers for imported files */

#include <unknwn.h>
#include <propsys.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef E_NOTFOUND
#define E_NOTFOUND HRESULT_FROM_WIN32(ERROR_NOT_FOUND)
#endif
#ifndef E_UNSUPPORTED_TYPE
#define E_UNSUPPORTED_TYPE HRESULT_FROM_WIN32(ERROR_UNSUPPORTED_TYPE)
#endif
#define DEVICE_STATE_ACTIVE 0x1
#define DEVICE_STATE_DISABLED 0x2
#define DEVICE_STATE_NOTPRESENT 0x4
#define DEVICE_STATE_UNPLUGGED 0x8
#define DEVICE_STATEMASK_ALL 0xf
DEFINE_PROPERTYKEY(PKEY_AudioEndpoint_FormFactor,0x1da5d803,0xd492,0x4edd,0x8c,0x23,0xe0,0xc0,0xff,0xee,0x7f,0x0e,0);
DEFINE_PROPERTYKEY(PKEY_AudioEndpoint_ControlPanelPageProvider,0x1da5d803,0xd492,0x4edd,0x8c,0x23,0xe0,0xc0,0xff,0xee,0x7f,0x0e,1);
DEFINE_PROPERTYKEY(PKEY_AudioEndpoint_Association,0x1da5d803,0xd492,0x4edd,0x8c,0x23,0xe0,0xc0,0xff,0xee,0x7f,0x0e,2);
DEFINE_PROPERTYKEY(PKEY_AudioEndpoint_PhysicalSpeakers,0x1da5d803,0xd492,0x4edd,0x8c,0x23,0xe0,0xc0,0xff,0xee,0x7f,0x0e,3);
DEFINE_PROPERTYKEY(PKEY_AudioEndpoint_GUID,0x1da5d803,0xd492,0x4edd,0x8c,0x23,0xe0,0xc0,0xff,0xee,0x7f,0x0e,4);
DEFINE_PROPERTYKEY(PKEY_AudioEndpoint_Disable_SysFx,0x1da5d803,0xd492,0x4edd,0x8c,0x23,0xe0,0xc0,0xff,0xee,0x7f,0x0e,5);
#define ENDPOINT_SYSFX_ENABLED 0
#define ENDPOINT_SYSFX_DISABLED 1
DEFINE_PROPERTYKEY(PKEY_AudioEndpoint_FullRangeSpeakers,0x1da5d803,0xd492,0x4edd,0x8c,0x23,0xe0,0xc0,0xff,0xee,0x7f,0x0e,6);
DEFINE_PROPERTYKEY(PKEY_AudioEndpoint_Supports_EventDriven_Mode,0x1da5d803,0xd492,0x4edd,0x8c,0x23,0xe0,0xc0,0xff,0xee,0x7f,0x0e,7);
DEFINE_PROPERTYKEY(PKEY_AudioEndpoint_JackSubType,0x1da5d803,0xd492,0x4edd,0x8c,0x23,0xe0,0xc0,0xff,0xee,0x7f,0x0e,8);
DEFINE_PROPERTYKEY(PKEY_AudioEngine_DeviceFormat,0xf19f064d,0x082c,0x4e27,0xbc,0x73,0x68,0x82,0xa1,0xbb,0x8e,0x4c,0);
DEFINE_PROPERTYKEY(PKEY_AudioEngine_OEMFormat,0xe4870e26,0x3cc5,0x4cd2,0xba,0x46,0xca,0x0a,0x9a,0x70,0xed,0x04,3);
typedef struct tagDIRECTX_AUDIO_ACTIVATION_PARAMS {
    DWORD cbDirectXAudioActivationParams;
    GUID guidAudioSession;
    DWORD dwAudioStreamFlags;
} DIRECTX_AUDIO_ACTIVATION_PARAMS;
typedef struct tagDIRECTX_AUDIO_ACTIVATION_PARAMS *PDIRECTX_AUDIO_ACTIVATION_PARAMS;
typedef enum _EDataFlow {
    eRender = 0,
    eCapture = 1,
    eAll = 2,
    EDataFlow_enum_count = 3
} EDataFlow;
typedef enum _ERole {
    eConsole = 0,
    eMultimedia = 1,
    eCommunications = 2,
    ERole_enum_count = 3
} ERole;
typedef enum _EndpointFormFactor {
    RemoteNetworkDevice = 0,
    Speakers = 1,
    LineLevel = 2,
    Headphones = 3,
    Microphone = 4,
    Headset = 5,
    Handset = 6,
    UnknownDigitalPassthrough = 7,
    SPDIF = 8,
    DigitalAudioDisplayDevice = 9,
    UnknownFormFactor = 10,
    EndpointFormFactor_enum_count = 11
} EndpointFormFactor;
#define HDMI DigitalAudioDisplayDevice
/*****************************************************************************
 * IMMNotificationClient interface
 */
#ifndef __IMMNotificationClient_INTERFACE_DEFINED__
#define __IMMNotificationClient_INTERFACE_DEFINED__

DEFINE_GUID(IID_IMMNotificationClient, 0x7991eec9, 0x7e89, 0x4d85, 0x83,0x90, 0x6c,0x70,0x3c,0xec,0x60,0xc0);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("7991eec9-7e89-4d85-8390-6c703cec60c0")
IMMNotificationClient : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE OnDeviceStateChanged(
        LPCWSTR pwstrDeviceId,
        DWORD dwNewState) = 0;

    virtual HRESULT STDMETHODCALLTYPE OnDeviceAdded(
        LPCWSTR pwstrDeviceId) = 0;

    virtual HRESULT STDMETHODCALLTYPE OnDeviceRemoved(
        LPCWSTR pwstrDeviceId) = 0;

    virtual HRESULT STDMETHODCALLTYPE OnDefaultDeviceChanged(
        EDataFlow flow,
        ERole role,
        LPCWSTR pwstrDeviceId) = 0;

    virtual HRESULT STDMETHODCALLTYPE OnPropertyValueChanged(
        LPCWSTR pwstrDeviceId,
        const PROPERTYKEY key) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IMMNotificationClient, 0x7991eec9, 0x7e89, 0x4d85, 0x83,0x90, 0x6c,0x70,0x3c,0xec,0x60,0xc0)
#endif
#else
typedef struct IMMNotificationClientVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMMNotificationClient* This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMMNotificationClient* This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMMNotificationClient* This);

    /*** IMMNotificationClient methods ***/
    HRESULT (STDMETHODCALLTYPE *OnDeviceStateChanged)(
        IMMNotificationClient* This,
        LPCWSTR pwstrDeviceId,
        DWORD dwNewState);

    HRESULT (STDMETHODCALLTYPE *OnDeviceAdded)(
        IMMNotificationClient* This,
        LPCWSTR pwstrDeviceId);

    HRESULT (STDMETHODCALLTYPE *OnDeviceRemoved)(
        IMMNotificationClient* This,
        LPCWSTR pwstrDeviceId);

    HRESULT (STDMETHODCALLTYPE *OnDefaultDeviceChanged)(
        IMMNotificationClient* This,
        EDataFlow flow,
        ERole role,
        LPCWSTR pwstrDeviceId);

    HRESULT (STDMETHODCALLTYPE *OnPropertyValueChanged)(
        IMMNotificationClient* This,
        LPCWSTR pwstrDeviceId,
        const PROPERTYKEY key);

    END_INTERFACE
} IMMNotificationClientVtbl;
interface IMMNotificationClient {
    CONST_VTBL IMMNotificationClientVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMMNotificationClient_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IMMNotificationClient_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IMMNotificationClient_Release(This) (This)->lpVtbl->Release(This)
/*** IMMNotificationClient methods ***/
#define IMMNotificationClient_OnDeviceStateChanged(This,pwstrDeviceId,dwNewState) (This)->lpVtbl->OnDeviceStateChanged(This,pwstrDeviceId,dwNewState)
#define IMMNotificationClient_OnDeviceAdded(This,pwstrDeviceId) (This)->lpVtbl->OnDeviceAdded(This,pwstrDeviceId)
#define IMMNotificationClient_OnDeviceRemoved(This,pwstrDeviceId) (This)->lpVtbl->OnDeviceRemoved(This,pwstrDeviceId)
#define IMMNotificationClient_OnDefaultDeviceChanged(This,flow,role,pwstrDeviceId) (This)->lpVtbl->OnDefaultDeviceChanged(This,flow,role,pwstrDeviceId)
#define IMMNotificationClient_OnPropertyValueChanged(This,pwstrDeviceId,key) (This)->lpVtbl->OnPropertyValueChanged(This,pwstrDeviceId,key)
#endif

#endif

HRESULT STDMETHODCALLTYPE IMMNotificationClient_OnDeviceStateChanged_Proxy(
    IMMNotificationClient* This,
    LPCWSTR pwstrDeviceId,
    DWORD dwNewState);
void __RPC_STUB IMMNotificationClient_OnDeviceStateChanged_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMMNotificationClient_OnDeviceAdded_Proxy(
    IMMNotificationClient* This,
    LPCWSTR pwstrDeviceId);
void __RPC_STUB IMMNotificationClient_OnDeviceAdded_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMMNotificationClient_OnDeviceRemoved_Proxy(
    IMMNotificationClient* This,
    LPCWSTR pwstrDeviceId);
void __RPC_STUB IMMNotificationClient_OnDeviceRemoved_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMMNotificationClient_OnDefaultDeviceChanged_Proxy(
    IMMNotificationClient* This,
    EDataFlow flow,
    ERole role,
    LPCWSTR pwstrDeviceId);
void __RPC_STUB IMMNotificationClient_OnDefaultDeviceChanged_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMMNotificationClient_OnPropertyValueChanged_Proxy(
    IMMNotificationClient* This,
    LPCWSTR pwstrDeviceId,
    const PROPERTYKEY key);
void __RPC_STUB IMMNotificationClient_OnPropertyValueChanged_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);

#endif  /* __IMMNotificationClient_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IMMDevice interface
 */
#ifndef __IMMDevice_INTERFACE_DEFINED__
#define __IMMDevice_INTERFACE_DEFINED__

DEFINE_GUID(IID_IMMDevice, 0xd666063f, 0x1587, 0x4e43, 0x81,0xf1, 0xb9,0x48,0xe8,0x07,0x36,0x3f);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("d666063f-1587-4e43-81f1-b948e807363f")
IMMDevice : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE Activate(
        REFIID iid,
        DWORD dwClsCtx,
        PROPVARIANT *pActivationParams,
        void **ppv) = 0;

    virtual HRESULT STDMETHODCALLTYPE OpenPropertyStore(
        DWORD stgmAccess,
        IPropertyStore **ppProperties) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetId(
        LPWSTR *ppstrId) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetState(
        DWORD *pdwState) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IMMDevice, 0xd666063f, 0x1587, 0x4e43, 0x81,0xf1, 0xb9,0x48,0xe8,0x07,0x36,0x3f)
#endif
#else
typedef struct IMMDeviceVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMMDevice* This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMMDevice* This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMMDevice* This);

    /*** IMMDevice methods ***/
    HRESULT (STDMETHODCALLTYPE *Activate)(
        IMMDevice* This,
        REFIID iid,
        DWORD dwClsCtx,
        PROPVARIANT *pActivationParams,
        void **ppv);

    HRESULT (STDMETHODCALLTYPE *OpenPropertyStore)(
        IMMDevice* This,
        DWORD stgmAccess,
        IPropertyStore **ppProperties);

    HRESULT (STDMETHODCALLTYPE *GetId)(
        IMMDevice* This,
        LPWSTR *ppstrId);

    HRESULT (STDMETHODCALLTYPE *GetState)(
        IMMDevice* This,
        DWORD *pdwState);

    END_INTERFACE
} IMMDeviceVtbl;
interface IMMDevice {
    CONST_VTBL IMMDeviceVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMMDevice_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IMMDevice_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IMMDevice_Release(This) (This)->lpVtbl->Release(This)
/*** IMMDevice methods ***/
#define IMMDevice_Activate(This,iid,dwClsCtx,pActivationParams,ppv) (This)->lpVtbl->Activate(This,iid,dwClsCtx,pActivationParams,ppv)
#define IMMDevice_OpenPropertyStore(This,stgmAccess,ppProperties) (This)->lpVtbl->OpenPropertyStore(This,stgmAccess,ppProperties)
#define IMMDevice_GetId(This,ppstrId) (This)->lpVtbl->GetId(This,ppstrId)
#define IMMDevice_GetState(This,pdwState) (This)->lpVtbl->GetState(This,pdwState)
#endif

#endif

HRESULT STDMETHODCALLTYPE IMMDevice_Activate_Proxy(
    IMMDevice* This,
    REFIID iid,
    DWORD dwClsCtx,
    PROPVARIANT *pActivationParams,
    void **ppv);
void __RPC_STUB IMMDevice_Activate_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMMDevice_OpenPropertyStore_Proxy(
    IMMDevice* This,
    DWORD stgmAccess,
    IPropertyStore **ppProperties);
void __RPC_STUB IMMDevice_OpenPropertyStore_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMMDevice_GetId_Proxy(
    IMMDevice* This,
    LPWSTR *ppstrId);
void __RPC_STUB IMMDevice_GetId_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMMDevice_GetState_Proxy(
    IMMDevice* This,
    DWORD *pdwState);
void __RPC_STUB IMMDevice_GetState_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);

#endif  /* __IMMDevice_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IMMDeviceCollection interface
 */
#ifndef __IMMDeviceCollection_INTERFACE_DEFINED__
#define __IMMDeviceCollection_INTERFACE_DEFINED__

DEFINE_GUID(IID_IMMDeviceCollection, 0x0bd7a1be, 0x7a1a, 0x44db, 0x83,0x97, 0xcc,0x53,0x92,0x38,0x7b,0x5e);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("0bd7a1be-7a1a-44db-8397-cc5392387b5e")
IMMDeviceCollection : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE GetCount(
        UINT *pcDevices) = 0;

    virtual HRESULT STDMETHODCALLTYPE Item(
        UINT nDevice,
        IMMDevice **ppdevice) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IMMDeviceCollection, 0x0bd7a1be, 0x7a1a, 0x44db, 0x83,0x97, 0xcc,0x53,0x92,0x38,0x7b,0x5e)
#endif
#else
typedef struct IMMDeviceCollectionVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMMDeviceCollection* This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMMDeviceCollection* This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMMDeviceCollection* This);

    /*** IMMDeviceCollection methods ***/
    HRESULT (STDMETHODCALLTYPE *GetCount)(
        IMMDeviceCollection* This,
        UINT *pcDevices);

    HRESULT (STDMETHODCALLTYPE *Item)(
        IMMDeviceCollection* This,
        UINT nDevice,
        IMMDevice **ppdevice);

    END_INTERFACE
} IMMDeviceCollectionVtbl;
interface IMMDeviceCollection {
    CONST_VTBL IMMDeviceCollectionVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMMDeviceCollection_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IMMDeviceCollection_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IMMDeviceCollection_Release(This) (This)->lpVtbl->Release(This)
/*** IMMDeviceCollection methods ***/
#define IMMDeviceCollection_GetCount(This,pcDevices) (This)->lpVtbl->GetCount(This,pcDevices)
#define IMMDeviceCollection_Item(This,nDevice,ppdevice) (This)->lpVtbl->Item(This,nDevice,ppdevice)
#endif

#endif

HRESULT STDMETHODCALLTYPE IMMDeviceCollection_GetCount_Proxy(
    IMMDeviceCollection* This,
    UINT *pcDevices);
void __RPC_STUB IMMDeviceCollection_GetCount_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMMDeviceCollection_Item_Proxy(
    IMMDeviceCollection* This,
    UINT nDevice,
    IMMDevice **ppdevice);
void __RPC_STUB IMMDeviceCollection_Item_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);

#endif  /* __IMMDeviceCollection_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IMMEndpoint interface
 */
#ifndef __IMMEndpoint_INTERFACE_DEFINED__
#define __IMMEndpoint_INTERFACE_DEFINED__

DEFINE_GUID(IID_IMMEndpoint, 0x1be09788, 0x6894, 0x4089, 0x85,0x86, 0x9a,0x2a,0x6c,0x26,0x5a,0xc5);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("1be09788-6894-4089-8586-9a2a6c265ac5")
IMMEndpoint : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE GetDataFlow(
        EDataFlow *pDataFlow) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IMMEndpoint, 0x1be09788, 0x6894, 0x4089, 0x85,0x86, 0x9a,0x2a,0x6c,0x26,0x5a,0xc5)
#endif
#else
typedef struct IMMEndpointVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMMEndpoint* This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMMEndpoint* This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMMEndpoint* This);

    /*** IMMEndpoint methods ***/
    HRESULT (STDMETHODCALLTYPE *GetDataFlow)(
        IMMEndpoint* This,
        EDataFlow *pDataFlow);

    END_INTERFACE
} IMMEndpointVtbl;
interface IMMEndpoint {
    CONST_VTBL IMMEndpointVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMMEndpoint_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IMMEndpoint_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IMMEndpoint_Release(This) (This)->lpVtbl->Release(This)
/*** IMMEndpoint methods ***/
#define IMMEndpoint_GetDataFlow(This,pDataFlow) (This)->lpVtbl->GetDataFlow(This,pDataFlow)
#endif

#endif

HRESULT STDMETHODCALLTYPE IMMEndpoint_GetDataFlow_Proxy(
    IMMEndpoint* This,
    EDataFlow *pDataFlow);
void __RPC_STUB IMMEndpoint_GetDataFlow_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);

#endif  /* __IMMEndpoint_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IMMDeviceEnumerator interface
 */
#ifndef __IMMDeviceEnumerator_INTERFACE_DEFINED__
#define __IMMDeviceEnumerator_INTERFACE_DEFINED__

DEFINE_GUID(IID_IMMDeviceEnumerator, 0xa95664d2, 0x9614, 0x4f35, 0xa7,0x46, 0xde,0x8d,0xb6,0x36,0x17,0xe6);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("a95664d2-9614-4f35-a746-de8db63617e6")
IMMDeviceEnumerator : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE EnumAudioEndpoints(
        EDataFlow dataFlow,
        DWORD dwStateMask,
        IMMDeviceCollection **ppDevices) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetDefaultAudioEndpoint(
        EDataFlow dataFlow,
        ERole role,
        IMMDevice **ppEndpoint) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetDevice(
        LPCWSTR pwstrId,
        IMMDevice **ppDevice) = 0;

    virtual HRESULT STDMETHODCALLTYPE RegisterEndpointNotificationCallback(
        IMMNotificationClient *pClient) = 0;

    virtual HRESULT STDMETHODCALLTYPE UnregisterEndpointNotificationCallback(
        IMMNotificationClient *pClient) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IMMDeviceEnumerator, 0xa95664d2, 0x9614, 0x4f35, 0xa7,0x46, 0xde,0x8d,0xb6,0x36,0x17,0xe6)
#endif
#else
typedef struct IMMDeviceEnumeratorVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMMDeviceEnumerator* This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMMDeviceEnumerator* This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMMDeviceEnumerator* This);

    /*** IMMDeviceEnumerator methods ***/
    HRESULT (STDMETHODCALLTYPE *EnumAudioEndpoints)(
        IMMDeviceEnumerator* This,
        EDataFlow dataFlow,
        DWORD dwStateMask,
        IMMDeviceCollection **ppDevices);

    HRESULT (STDMETHODCALLTYPE *GetDefaultAudioEndpoint)(
        IMMDeviceEnumerator* This,
        EDataFlow dataFlow,
        ERole role,
        IMMDevice **ppEndpoint);

    HRESULT (STDMETHODCALLTYPE *GetDevice)(
        IMMDeviceEnumerator* This,
        LPCWSTR pwstrId,
        IMMDevice **ppDevice);

    HRESULT (STDMETHODCALLTYPE *RegisterEndpointNotificationCallback)(
        IMMDeviceEnumerator* This,
        IMMNotificationClient *pClient);

    HRESULT (STDMETHODCALLTYPE *UnregisterEndpointNotificationCallback)(
        IMMDeviceEnumerator* This,
        IMMNotificationClient *pClient);

    END_INTERFACE
} IMMDeviceEnumeratorVtbl;
interface IMMDeviceEnumerator {
    CONST_VTBL IMMDeviceEnumeratorVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMMDeviceEnumerator_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IMMDeviceEnumerator_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IMMDeviceEnumerator_Release(This) (This)->lpVtbl->Release(This)
/*** IMMDeviceEnumerator methods ***/
#define IMMDeviceEnumerator_EnumAudioEndpoints(This,dataFlow,dwStateMask,ppDevices) (This)->lpVtbl->EnumAudioEndpoints(This,dataFlow,dwStateMask,ppDevices)
#define IMMDeviceEnumerator_GetDefaultAudioEndpoint(This,dataFlow,role,ppEndpoint) (This)->lpVtbl->GetDefaultAudioEndpoint(This,dataFlow,role,ppEndpoint)
#define IMMDeviceEnumerator_GetDevice(This,pwstrId,ppDevice) (This)->lpVtbl->GetDevice(This,pwstrId,ppDevice)
#define IMMDeviceEnumerator_RegisterEndpointNotificationCallback(This,pClient) (This)->lpVtbl->RegisterEndpointNotificationCallback(This,pClient)
#define IMMDeviceEnumerator_UnregisterEndpointNotificationCallback(This,pClient) (This)->lpVtbl->UnregisterEndpointNotificationCallback(This,pClient)
#endif

#endif

HRESULT STDMETHODCALLTYPE IMMDeviceEnumerator_EnumAudioEndpoints_Proxy(
    IMMDeviceEnumerator* This,
    EDataFlow dataFlow,
    DWORD dwStateMask,
    IMMDeviceCollection **ppDevices);
void __RPC_STUB IMMDeviceEnumerator_EnumAudioEndpoints_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMMDeviceEnumerator_GetDefaultAudioEndpoint_Proxy(
    IMMDeviceEnumerator* This,
    EDataFlow dataFlow,
    ERole role,
    IMMDevice **ppEndpoint);
void __RPC_STUB IMMDeviceEnumerator_GetDefaultAudioEndpoint_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMMDeviceEnumerator_GetDevice_Proxy(
    IMMDeviceEnumerator* This,
    LPCWSTR pwstrId,
    IMMDevice **ppDevice);
void __RPC_STUB IMMDeviceEnumerator_GetDevice_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMMDeviceEnumerator_RegisterEndpointNotificationCallback_Proxy(
    IMMDeviceEnumerator* This,
    IMMNotificationClient *pClient);
void __RPC_STUB IMMDeviceEnumerator_RegisterEndpointNotificationCallback_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMMDeviceEnumerator_UnregisterEndpointNotificationCallback_Proxy(
    IMMDeviceEnumerator* This,
    IMMNotificationClient *pClient);
void __RPC_STUB IMMDeviceEnumerator_UnregisterEndpointNotificationCallback_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);

#endif  /* __IMMDeviceEnumerator_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IMMDeviceActivator interface
 */
#ifndef __IMMDeviceActivator_INTERFACE_DEFINED__
#define __IMMDeviceActivator_INTERFACE_DEFINED__

DEFINE_GUID(IID_IMMDeviceActivator, 0x3b0d0ea4, 0xd0a9, 0x4b0e, 0x93,0x5b, 0x09,0x51,0x67,0x46,0xfa,0xc0);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("3b0d0ea4-d0a9-4b0e-935b-09516746fac0")
IMMDeviceActivator : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE Activate(
        REFIID iid,
        IMMDevice *pDevice,
        PROPVARIANT *pActivationParams,
        void **ppv) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IMMDeviceActivator, 0x3b0d0ea4, 0xd0a9, 0x4b0e, 0x93,0x5b, 0x09,0x51,0x67,0x46,0xfa,0xc0)
#endif
#else
typedef struct IMMDeviceActivatorVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMMDeviceActivator* This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMMDeviceActivator* This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMMDeviceActivator* This);

    /*** IMMDeviceActivator methods ***/
    HRESULT (STDMETHODCALLTYPE *Activate)(
        IMMDeviceActivator* This,
        REFIID iid,
        IMMDevice *pDevice,
        PROPVARIANT *pActivationParams,
        void **ppv);

    END_INTERFACE
} IMMDeviceActivatorVtbl;
interface IMMDeviceActivator {
    CONST_VTBL IMMDeviceActivatorVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMMDeviceActivator_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IMMDeviceActivator_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IMMDeviceActivator_Release(This) (This)->lpVtbl->Release(This)
/*** IMMDeviceActivator methods ***/
#define IMMDeviceActivator_Activate(This,iid,pDevice,pActivationParams,ppv) (This)->lpVtbl->Activate(This,iid,pDevice,pActivationParams,ppv)
#endif

#endif

HRESULT STDMETHODCALLTYPE IMMDeviceActivator_Activate_Proxy(
    IMMDeviceActivator* This,
    REFIID iid,
    IMMDevice *pDevice,
    PROPVARIANT *pActivationParams,
    void **ppv);
void __RPC_STUB IMMDeviceActivator_Activate_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);

#endif  /* __IMMDeviceActivator_INTERFACE_DEFINED__ */

typedef struct _AudioExtensionParams {
    LPARAM AddPageParam;
    IMMDevice *pEndPoint;
    IMMDevice *pPnpInterface;
    IMMDevice *pPnpDevnode;
} AudioExtensionParams;

DEFINE_GUID(LIBID_MMDeviceAPILib, 0x2fdaafa3, 0x7523, 0x4f66, 0x99,0x57, 0x9d,0x5e,0x7f,0xe6,0x98,0xf6);

/*****************************************************************************
 * MMDeviceEnumerator coclass
 */

DEFINE_GUID(CLSID_MMDeviceEnumerator, 0xbcde0395, 0xe52f, 0x467c, 0x8e,0x3d, 0xc4,0x57,0x92,0x91,0x69,0x2e);

#ifdef __cplusplus
class DECLSPEC_UUID("bcde0395-e52f-467c-8e3d-c4579291692e") MMDeviceEnumerator;
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(MMDeviceEnumerator, 0xbcde0395, 0xe52f, 0x467c, 0x8e,0x3d, 0xc4,0x57,0x92,0x91,0x69,0x2e)
#endif
#endif

/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __WIDL_MMDEVICEAPI_H */
