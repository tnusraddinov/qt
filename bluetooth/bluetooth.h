#pragma once

#ifndef GO_QTBLUETOOTH_H
#define GO_QTBLUETOOTH_H

#ifdef __cplusplus
extern "C" {
#endif

void* QBluetoothAddress_NewQBluetoothAddress();
void* QBluetoothAddress_NewQBluetoothAddress4(void* other);
void* QBluetoothAddress_NewQBluetoothAddress3(char* address);
void QBluetoothAddress_Clear(void* ptr);
int QBluetoothAddress_IsNull(void* ptr);
char* QBluetoothAddress_ToString(void* ptr);
void QBluetoothAddress_DestroyQBluetoothAddress(void* ptr);
void QBluetoothDeviceDiscoveryAgent_ConnectCanceled(void* ptr);
void QBluetoothDeviceDiscoveryAgent_DisconnectCanceled(void* ptr);
void QBluetoothDeviceDiscoveryAgent_Canceled(void* ptr);
void QBluetoothDeviceDiscoveryAgent_ConnectDeviceDiscovered(void* ptr);
void QBluetoothDeviceDiscoveryAgent_DisconnectDeviceDiscovered(void* ptr);
void QBluetoothDeviceDiscoveryAgent_DeviceDiscovered(void* ptr, void* info);
void QBluetoothDeviceDiscoveryAgent_ConnectError2(void* ptr);
void QBluetoothDeviceDiscoveryAgent_DisconnectError2(void* ptr);
void QBluetoothDeviceDiscoveryAgent_Error2(void* ptr, int error);
void QBluetoothDeviceDiscoveryAgent_ConnectFinished(void* ptr);
void QBluetoothDeviceDiscoveryAgent_DisconnectFinished(void* ptr);
void QBluetoothDeviceDiscoveryAgent_Finished(void* ptr);
void* QBluetoothDeviceDiscoveryAgent_NewQBluetoothDeviceDiscoveryAgent(void* parent);
void* QBluetoothDeviceDiscoveryAgent_NewQBluetoothDeviceDiscoveryAgent2(void* deviceAdapter, void* parent);
int QBluetoothDeviceDiscoveryAgent_Error(void* ptr);
char* QBluetoothDeviceDiscoveryAgent_ErrorString(void* ptr);
int QBluetoothDeviceDiscoveryAgent_InquiryType(void* ptr);
int QBluetoothDeviceDiscoveryAgent_IsActive(void* ptr);
void QBluetoothDeviceDiscoveryAgent_SetInquiryType(void* ptr, int ty);
void QBluetoothDeviceDiscoveryAgent_Start(void* ptr);
void QBluetoothDeviceDiscoveryAgent_Stop(void* ptr);
void QBluetoothDeviceDiscoveryAgent_DestroyQBluetoothDeviceDiscoveryAgent(void* ptr);
void QBluetoothDeviceDiscoveryAgent_TimerEvent(void* ptr, void* event);
void QBluetoothDeviceDiscoveryAgent_TimerEventDefault(void* ptr, void* event);
void QBluetoothDeviceDiscoveryAgent_ChildEvent(void* ptr, void* event);
void QBluetoothDeviceDiscoveryAgent_ChildEventDefault(void* ptr, void* event);
void QBluetoothDeviceDiscoveryAgent_ConnectNotify(void* ptr, void* sign);
void QBluetoothDeviceDiscoveryAgent_ConnectNotifyDefault(void* ptr, void* sign);
void QBluetoothDeviceDiscoveryAgent_CustomEvent(void* ptr, void* event);
void QBluetoothDeviceDiscoveryAgent_CustomEventDefault(void* ptr, void* event);
void QBluetoothDeviceDiscoveryAgent_DeleteLater(void* ptr);
void QBluetoothDeviceDiscoveryAgent_DeleteLaterDefault(void* ptr);
void QBluetoothDeviceDiscoveryAgent_DisconnectNotify(void* ptr, void* sign);
void QBluetoothDeviceDiscoveryAgent_DisconnectNotifyDefault(void* ptr, void* sign);
int QBluetoothDeviceDiscoveryAgent_Event(void* ptr, void* e);
int QBluetoothDeviceDiscoveryAgent_EventDefault(void* ptr, void* e);
int QBluetoothDeviceDiscoveryAgent_EventFilter(void* ptr, void* watched, void* event);
int QBluetoothDeviceDiscoveryAgent_EventFilterDefault(void* ptr, void* watched, void* event);
void* QBluetoothDeviceDiscoveryAgent_MetaObject(void* ptr);
void* QBluetoothDeviceDiscoveryAgent_MetaObjectDefault(void* ptr);
void* QBluetoothDeviceInfo_NewQBluetoothDeviceInfo();
void* QBluetoothDeviceInfo_NewQBluetoothDeviceInfo4(void* other);
void* QBluetoothDeviceInfo_Address(void* ptr);
int QBluetoothDeviceInfo_CoreConfigurations(void* ptr);
void* QBluetoothDeviceInfo_DeviceUuid(void* ptr);
int QBluetoothDeviceInfo_IsCached(void* ptr);
int QBluetoothDeviceInfo_IsValid(void* ptr);
int QBluetoothDeviceInfo_MajorDeviceClass(void* ptr);
char* QBluetoothDeviceInfo_Name(void* ptr);
int QBluetoothDeviceInfo_ServiceClasses(void* ptr);
int QBluetoothDeviceInfo_ServiceUuidsCompleteness(void* ptr);
void QBluetoothDeviceInfo_SetCached(void* ptr, int cached);
void QBluetoothDeviceInfo_SetCoreConfigurations(void* ptr, int coreConfigs);
void QBluetoothDeviceInfo_SetDeviceUuid(void* ptr, void* uuid);
void QBluetoothDeviceInfo_DestroyQBluetoothDeviceInfo(void* ptr);
void* QBluetoothHostInfo_NewQBluetoothHostInfo();
void* QBluetoothHostInfo_NewQBluetoothHostInfo2(void* other);
void* QBluetoothHostInfo_Address(void* ptr);
char* QBluetoothHostInfo_Name(void* ptr);
void QBluetoothHostInfo_SetAddress(void* ptr, void* address);
void QBluetoothHostInfo_SetName(void* ptr, char* name);
void QBluetoothHostInfo_DestroyQBluetoothHostInfo(void* ptr);
void QBluetoothLocalDevice_ConnectDeviceConnected(void* ptr);
void QBluetoothLocalDevice_DisconnectDeviceConnected(void* ptr);
void QBluetoothLocalDevice_DeviceConnected(void* ptr, void* address);
void QBluetoothLocalDevice_ConnectDeviceDisconnected(void* ptr);
void QBluetoothLocalDevice_DisconnectDeviceDisconnected(void* ptr);
void QBluetoothLocalDevice_DeviceDisconnected(void* ptr, void* address);
void QBluetoothLocalDevice_ConnectError(void* ptr);
void QBluetoothLocalDevice_DisconnectError(void* ptr);
void QBluetoothLocalDevice_Error(void* ptr, int error);
void QBluetoothLocalDevice_ConnectHostModeStateChanged(void* ptr);
void QBluetoothLocalDevice_DisconnectHostModeStateChanged(void* ptr);
void QBluetoothLocalDevice_HostModeStateChanged(void* ptr, int state);
void QBluetoothLocalDevice_ConnectPairingDisplayConfirmation(void* ptr);
void QBluetoothLocalDevice_DisconnectPairingDisplayConfirmation(void* ptr);
void QBluetoothLocalDevice_PairingDisplayConfirmation(void* ptr, void* address, char* pin);
void QBluetoothLocalDevice_ConnectPairingDisplayPinCode(void* ptr);
void QBluetoothLocalDevice_DisconnectPairingDisplayPinCode(void* ptr);
void QBluetoothLocalDevice_PairingDisplayPinCode(void* ptr, void* address, char* pin);
void QBluetoothLocalDevice_ConnectPairingFinished(void* ptr);
void QBluetoothLocalDevice_DisconnectPairingFinished(void* ptr);
void QBluetoothLocalDevice_PairingFinished(void* ptr, void* address, int pairing);
int QBluetoothLocalDevice_IsValid(void* ptr);
void QBluetoothLocalDevice_DestroyQBluetoothLocalDevice(void* ptr);
void* QBluetoothLocalDevice_NewQBluetoothLocalDevice(void* parent);
void* QBluetoothLocalDevice_NewQBluetoothLocalDevice2(void* address, void* parent);
void* QBluetoothLocalDevice_Address(void* ptr);
int QBluetoothLocalDevice_HostMode(void* ptr);
char* QBluetoothLocalDevice_Name(void* ptr);
void QBluetoothLocalDevice_PairingConfirmation(void* ptr, int accept);
int QBluetoothLocalDevice_PairingStatus(void* ptr, void* address);
void QBluetoothLocalDevice_PowerOn(void* ptr);
void QBluetoothLocalDevice_RequestPairing(void* ptr, void* address, int pairing);
void QBluetoothLocalDevice_SetHostMode(void* ptr, int mode);
void QBluetoothLocalDevice_TimerEvent(void* ptr, void* event);
void QBluetoothLocalDevice_TimerEventDefault(void* ptr, void* event);
void QBluetoothLocalDevice_ChildEvent(void* ptr, void* event);
void QBluetoothLocalDevice_ChildEventDefault(void* ptr, void* event);
void QBluetoothLocalDevice_ConnectNotify(void* ptr, void* sign);
void QBluetoothLocalDevice_ConnectNotifyDefault(void* ptr, void* sign);
void QBluetoothLocalDevice_CustomEvent(void* ptr, void* event);
void QBluetoothLocalDevice_CustomEventDefault(void* ptr, void* event);
void QBluetoothLocalDevice_DeleteLater(void* ptr);
void QBluetoothLocalDevice_DeleteLaterDefault(void* ptr);
void QBluetoothLocalDevice_DisconnectNotify(void* ptr, void* sign);
void QBluetoothLocalDevice_DisconnectNotifyDefault(void* ptr, void* sign);
int QBluetoothLocalDevice_Event(void* ptr, void* e);
int QBluetoothLocalDevice_EventDefault(void* ptr, void* e);
int QBluetoothLocalDevice_EventFilter(void* ptr, void* watched, void* event);
int QBluetoothLocalDevice_EventFilterDefault(void* ptr, void* watched, void* event);
void* QBluetoothLocalDevice_MetaObject(void* ptr);
void* QBluetoothLocalDevice_MetaObjectDefault(void* ptr);
void* QBluetoothServer_NewQBluetoothServer(int serverType, void* parent);
void QBluetoothServer_ConnectError2(void* ptr);
void QBluetoothServer_DisconnectError2(void* ptr);
void QBluetoothServer_Error2(void* ptr, int error);
void QBluetoothServer_ConnectNewConnection(void* ptr);
void QBluetoothServer_DisconnectNewConnection(void* ptr);
void QBluetoothServer_NewConnection(void* ptr);
int QBluetoothServer_Error(void* ptr);
int QBluetoothServer_IsListening(void* ptr);
void* QBluetoothServer_Listen2(void* ptr, void* uuid, char* serviceName);
int QBluetoothServer_MaxPendingConnections(void* ptr);
int QBluetoothServer_ServerType(void* ptr);
void QBluetoothServer_DestroyQBluetoothServer(void* ptr);
void QBluetoothServer_Close(void* ptr);
int QBluetoothServer_HasPendingConnections(void* ptr);
void* QBluetoothServer_NextPendingConnection(void* ptr);
void* QBluetoothServer_ServerAddress(void* ptr);
void QBluetoothServer_SetMaxPendingConnections(void* ptr, int numConnections);
void QBluetoothServer_TimerEvent(void* ptr, void* event);
void QBluetoothServer_TimerEventDefault(void* ptr, void* event);
void QBluetoothServer_ChildEvent(void* ptr, void* event);
void QBluetoothServer_ChildEventDefault(void* ptr, void* event);
void QBluetoothServer_ConnectNotify(void* ptr, void* sign);
void QBluetoothServer_ConnectNotifyDefault(void* ptr, void* sign);
void QBluetoothServer_CustomEvent(void* ptr, void* event);
void QBluetoothServer_CustomEventDefault(void* ptr, void* event);
void QBluetoothServer_DeleteLater(void* ptr);
void QBluetoothServer_DeleteLaterDefault(void* ptr);
void QBluetoothServer_DisconnectNotify(void* ptr, void* sign);
void QBluetoothServer_DisconnectNotifyDefault(void* ptr, void* sign);
int QBluetoothServer_Event(void* ptr, void* e);
int QBluetoothServer_EventDefault(void* ptr, void* e);
int QBluetoothServer_EventFilter(void* ptr, void* watched, void* event);
int QBluetoothServer_EventFilterDefault(void* ptr, void* watched, void* event);
void* QBluetoothServer_MetaObject(void* ptr);
void* QBluetoothServer_MetaObjectDefault(void* ptr);
void QBluetoothServiceDiscoveryAgent_ConnectCanceled(void* ptr);
void QBluetoothServiceDiscoveryAgent_DisconnectCanceled(void* ptr);
void QBluetoothServiceDiscoveryAgent_Canceled(void* ptr);
void QBluetoothServiceDiscoveryAgent_ConnectError2(void* ptr);
void QBluetoothServiceDiscoveryAgent_DisconnectError2(void* ptr);
void QBluetoothServiceDiscoveryAgent_Error2(void* ptr, int error);
void QBluetoothServiceDiscoveryAgent_ConnectFinished(void* ptr);
void QBluetoothServiceDiscoveryAgent_DisconnectFinished(void* ptr);
void QBluetoothServiceDiscoveryAgent_Finished(void* ptr);
void QBluetoothServiceDiscoveryAgent_ConnectServiceDiscovered(void* ptr);
void QBluetoothServiceDiscoveryAgent_DisconnectServiceDiscovered(void* ptr);
void QBluetoothServiceDiscoveryAgent_ServiceDiscovered(void* ptr, void* info);
void* QBluetoothServiceDiscoveryAgent_NewQBluetoothServiceDiscoveryAgent(void* parent);
void* QBluetoothServiceDiscoveryAgent_NewQBluetoothServiceDiscoveryAgent2(void* deviceAdapter, void* parent);
void QBluetoothServiceDiscoveryAgent_Clear(void* ptr);
int QBluetoothServiceDiscoveryAgent_Error(void* ptr);
char* QBluetoothServiceDiscoveryAgent_ErrorString(void* ptr);
int QBluetoothServiceDiscoveryAgent_IsActive(void* ptr);
void* QBluetoothServiceDiscoveryAgent_RemoteAddress(void* ptr);
int QBluetoothServiceDiscoveryAgent_SetRemoteAddress(void* ptr, void* address);
void QBluetoothServiceDiscoveryAgent_SetUuidFilter2(void* ptr, void* uuid);
void QBluetoothServiceDiscoveryAgent_Start(void* ptr, int mode);
void QBluetoothServiceDiscoveryAgent_Stop(void* ptr);
void QBluetoothServiceDiscoveryAgent_DestroyQBluetoothServiceDiscoveryAgent(void* ptr);
void QBluetoothServiceDiscoveryAgent_TimerEvent(void* ptr, void* event);
void QBluetoothServiceDiscoveryAgent_TimerEventDefault(void* ptr, void* event);
void QBluetoothServiceDiscoveryAgent_ChildEvent(void* ptr, void* event);
void QBluetoothServiceDiscoveryAgent_ChildEventDefault(void* ptr, void* event);
void QBluetoothServiceDiscoveryAgent_ConnectNotify(void* ptr, void* sign);
void QBluetoothServiceDiscoveryAgent_ConnectNotifyDefault(void* ptr, void* sign);
void QBluetoothServiceDiscoveryAgent_CustomEvent(void* ptr, void* event);
void QBluetoothServiceDiscoveryAgent_CustomEventDefault(void* ptr, void* event);
void QBluetoothServiceDiscoveryAgent_DeleteLater(void* ptr);
void QBluetoothServiceDiscoveryAgent_DeleteLaterDefault(void* ptr);
void QBluetoothServiceDiscoveryAgent_DisconnectNotify(void* ptr, void* sign);
void QBluetoothServiceDiscoveryAgent_DisconnectNotifyDefault(void* ptr, void* sign);
int QBluetoothServiceDiscoveryAgent_Event(void* ptr, void* e);
int QBluetoothServiceDiscoveryAgent_EventDefault(void* ptr, void* e);
int QBluetoothServiceDiscoveryAgent_EventFilter(void* ptr, void* watched, void* event);
int QBluetoothServiceDiscoveryAgent_EventFilterDefault(void* ptr, void* watched, void* event);
void* QBluetoothServiceDiscoveryAgent_MetaObject(void* ptr);
void* QBluetoothServiceDiscoveryAgent_MetaObjectDefault(void* ptr);
int QBluetoothServiceInfo_ServiceName_Type();
int QBluetoothServiceInfo_ServiceDescription_Type();
int QBluetoothServiceInfo_ServiceProvider_Type();
char* QBluetoothServiceInfo_ServiceDescription(void* ptr);
char* QBluetoothServiceInfo_ServiceName(void* ptr);
char* QBluetoothServiceInfo_ServiceProvider(void* ptr);
void* QBluetoothServiceInfo_ServiceUuid(void* ptr);
void QBluetoothServiceInfo_SetServiceDescription(void* ptr, char* description);
void QBluetoothServiceInfo_SetServiceName(void* ptr, char* name);
void QBluetoothServiceInfo_SetServiceProvider(void* ptr, char* provider);
void QBluetoothServiceInfo_SetServiceUuid(void* ptr, void* uuid);
void* QBluetoothServiceInfo_NewQBluetoothServiceInfo();
void* QBluetoothServiceInfo_NewQBluetoothServiceInfo2(void* other);
void* QBluetoothServiceInfo_Device(void* ptr);
int QBluetoothServiceInfo_IsComplete(void* ptr);
int QBluetoothServiceInfo_IsRegistered(void* ptr);
int QBluetoothServiceInfo_IsValid(void* ptr);
int QBluetoothServiceInfo_ProtocolServiceMultiplexer(void* ptr);
int QBluetoothServiceInfo_RegisterService(void* ptr, void* localAdapter);
int QBluetoothServiceInfo_ServerChannel(void* ptr);
void QBluetoothServiceInfo_SetDevice(void* ptr, void* device);
int QBluetoothServiceInfo_SocketProtocol(void* ptr);
int QBluetoothServiceInfo_UnregisterService(void* ptr);
void QBluetoothServiceInfo_DestroyQBluetoothServiceInfo(void* ptr);
void QBluetoothSocket_ConnectConnected(void* ptr);
void QBluetoothSocket_DisconnectConnected(void* ptr);
void QBluetoothSocket_Connected(void* ptr);
void QBluetoothSocket_ConnectDisconnected(void* ptr);
void QBluetoothSocket_DisconnectDisconnected(void* ptr);
void QBluetoothSocket_Disconnected(void* ptr);
void QBluetoothSocket_ConnectError2(void* ptr);
void QBluetoothSocket_DisconnectError2(void* ptr);
void QBluetoothSocket_Error2(void* ptr, int error);
void QBluetoothSocket_ConnectStateChanged(void* ptr);
void QBluetoothSocket_DisconnectStateChanged(void* ptr);
void QBluetoothSocket_StateChanged(void* ptr, int state);
void* QBluetoothSocket_NewQBluetoothSocket(int socketType, void* parent);
void* QBluetoothSocket_NewQBluetoothSocket2(void* parent);
void QBluetoothSocket_Abort(void* ptr);
long long QBluetoothSocket_BytesAvailable(void* ptr);
long long QBluetoothSocket_BytesAvailableDefault(void* ptr);
long long QBluetoothSocket_BytesToWrite(void* ptr);
long long QBluetoothSocket_BytesToWriteDefault(void* ptr);
int QBluetoothSocket_CanReadLine(void* ptr);
int QBluetoothSocket_CanReadLineDefault(void* ptr);
void QBluetoothSocket_Close(void* ptr);
void QBluetoothSocket_CloseDefault(void* ptr);
void QBluetoothSocket_ConnectToService2(void* ptr, void* address, void* uuid, int openMode);
void QBluetoothSocket_ConnectToService(void* ptr, void* service, int openMode);
void QBluetoothSocket_DisconnectFromService(void* ptr);
void QBluetoothSocket_DoDeviceDiscovery(void* ptr, void* service, int openMode);
int QBluetoothSocket_Error(void* ptr);
char* QBluetoothSocket_ErrorString(void* ptr);
int QBluetoothSocket_IsSequential(void* ptr);
int QBluetoothSocket_IsSequentialDefault(void* ptr);
void* QBluetoothSocket_LocalAddress(void* ptr);
char* QBluetoothSocket_LocalName(void* ptr);
void* QBluetoothSocket_PeerAddress(void* ptr);
char* QBluetoothSocket_PeerName(void* ptr);
int QBluetoothSocket_SetSocketDescriptor(void* ptr, int socketDescriptor, int socketType, int socketState, int openMode);
void QBluetoothSocket_SetSocketError(void* ptr, int error_);
void QBluetoothSocket_SetSocketState(void* ptr, int state);
int QBluetoothSocket_SocketDescriptor(void* ptr);
int QBluetoothSocket_SocketType(void* ptr);
int QBluetoothSocket_State(void* ptr);
long long QBluetoothSocket_WriteData(void* ptr, char* data, long long maxSize);
long long QBluetoothSocket_WriteDataDefault(void* ptr, char* data, long long maxSize);
void QBluetoothSocket_DestroyQBluetoothSocket(void* ptr);
int QBluetoothSocket_AtEnd(void* ptr);
int QBluetoothSocket_AtEndDefault(void* ptr);
int QBluetoothSocket_Open(void* ptr, int mode);
int QBluetoothSocket_OpenDefault(void* ptr, int mode);
long long QBluetoothSocket_Pos(void* ptr);
long long QBluetoothSocket_PosDefault(void* ptr);
long long QBluetoothSocket_ReadLineData(void* ptr, char* data, long long maxSize);
long long QBluetoothSocket_ReadLineDataDefault(void* ptr, char* data, long long maxSize);
int QBluetoothSocket_Reset(void* ptr);
int QBluetoothSocket_ResetDefault(void* ptr);
int QBluetoothSocket_Seek(void* ptr, long long pos);
int QBluetoothSocket_SeekDefault(void* ptr, long long pos);
long long QBluetoothSocket_Size(void* ptr);
long long QBluetoothSocket_SizeDefault(void* ptr);
int QBluetoothSocket_WaitForBytesWritten(void* ptr, int msecs);
int QBluetoothSocket_WaitForBytesWrittenDefault(void* ptr, int msecs);
int QBluetoothSocket_WaitForReadyRead(void* ptr, int msecs);
int QBluetoothSocket_WaitForReadyReadDefault(void* ptr, int msecs);
void QBluetoothSocket_TimerEvent(void* ptr, void* event);
void QBluetoothSocket_TimerEventDefault(void* ptr, void* event);
void QBluetoothSocket_ChildEvent(void* ptr, void* event);
void QBluetoothSocket_ChildEventDefault(void* ptr, void* event);
void QBluetoothSocket_ConnectNotify(void* ptr, void* sign);
void QBluetoothSocket_ConnectNotifyDefault(void* ptr, void* sign);
void QBluetoothSocket_CustomEvent(void* ptr, void* event);
void QBluetoothSocket_CustomEventDefault(void* ptr, void* event);
void QBluetoothSocket_DeleteLater(void* ptr);
void QBluetoothSocket_DeleteLaterDefault(void* ptr);
void QBluetoothSocket_DisconnectNotify(void* ptr, void* sign);
void QBluetoothSocket_DisconnectNotifyDefault(void* ptr, void* sign);
int QBluetoothSocket_Event(void* ptr, void* e);
int QBluetoothSocket_EventDefault(void* ptr, void* e);
int QBluetoothSocket_EventFilter(void* ptr, void* watched, void* event);
int QBluetoothSocket_EventFilterDefault(void* ptr, void* watched, void* event);
void* QBluetoothSocket_MetaObject(void* ptr);
void* QBluetoothSocket_MetaObjectDefault(void* ptr);
void* QBluetoothTransferManager_Put(void* ptr, void* request, void* data);
void* QBluetoothTransferManager_NewQBluetoothTransferManager(void* parent);
void QBluetoothTransferManager_ConnectFinished(void* ptr);
void QBluetoothTransferManager_DisconnectFinished(void* ptr);
void QBluetoothTransferManager_Finished(void* ptr, void* reply);
void QBluetoothTransferManager_DestroyQBluetoothTransferManager(void* ptr);
void QBluetoothTransferManager_TimerEvent(void* ptr, void* event);
void QBluetoothTransferManager_TimerEventDefault(void* ptr, void* event);
void QBluetoothTransferManager_ChildEvent(void* ptr, void* event);
void QBluetoothTransferManager_ChildEventDefault(void* ptr, void* event);
void QBluetoothTransferManager_ConnectNotify(void* ptr, void* sign);
void QBluetoothTransferManager_ConnectNotifyDefault(void* ptr, void* sign);
void QBluetoothTransferManager_CustomEvent(void* ptr, void* event);
void QBluetoothTransferManager_CustomEventDefault(void* ptr, void* event);
void QBluetoothTransferManager_DeleteLater(void* ptr);
void QBluetoothTransferManager_DeleteLaterDefault(void* ptr);
void QBluetoothTransferManager_DisconnectNotify(void* ptr, void* sign);
void QBluetoothTransferManager_DisconnectNotifyDefault(void* ptr, void* sign);
int QBluetoothTransferManager_Event(void* ptr, void* e);
int QBluetoothTransferManager_EventDefault(void* ptr, void* e);
int QBluetoothTransferManager_EventFilter(void* ptr, void* watched, void* event);
int QBluetoothTransferManager_EventFilterDefault(void* ptr, void* watched, void* event);
void* QBluetoothTransferManager_MetaObject(void* ptr);
void* QBluetoothTransferManager_MetaObjectDefault(void* ptr);
void QBluetoothTransferReply_Abort(void* ptr);
void QBluetoothTransferReply_SetManager(void* ptr, void* manager);
void QBluetoothTransferReply_SetRequest(void* ptr, void* request);
void* QBluetoothTransferReply_NewQBluetoothTransferReply(void* parent);
void QBluetoothTransferReply_ConnectError2(void* ptr);
void QBluetoothTransferReply_DisconnectError2(void* ptr);
void QBluetoothTransferReply_Error2(void* ptr, int errorType);
int QBluetoothTransferReply_Error(void* ptr);
char* QBluetoothTransferReply_ErrorString(void* ptr);
void QBluetoothTransferReply_ConnectFinished(void* ptr);
void QBluetoothTransferReply_DisconnectFinished(void* ptr);
void QBluetoothTransferReply_Finished(void* ptr, void* reply);
int QBluetoothTransferReply_IsFinished(void* ptr);
int QBluetoothTransferReply_IsRunning(void* ptr);
void* QBluetoothTransferReply_Manager(void* ptr);
void* QBluetoothTransferReply_Request(void* ptr);
void QBluetoothTransferReply_ConnectTransferProgress(void* ptr);
void QBluetoothTransferReply_DisconnectTransferProgress(void* ptr);
void QBluetoothTransferReply_TransferProgress(void* ptr, long long bytesTransferred, long long bytesTotal);
void QBluetoothTransferReply_DestroyQBluetoothTransferReply(void* ptr);
void QBluetoothTransferReply_TimerEvent(void* ptr, void* event);
void QBluetoothTransferReply_TimerEventDefault(void* ptr, void* event);
void QBluetoothTransferReply_ChildEvent(void* ptr, void* event);
void QBluetoothTransferReply_ChildEventDefault(void* ptr, void* event);
void QBluetoothTransferReply_ConnectNotify(void* ptr, void* sign);
void QBluetoothTransferReply_ConnectNotifyDefault(void* ptr, void* sign);
void QBluetoothTransferReply_CustomEvent(void* ptr, void* event);
void QBluetoothTransferReply_CustomEventDefault(void* ptr, void* event);
void QBluetoothTransferReply_DeleteLater(void* ptr);
void QBluetoothTransferReply_DeleteLaterDefault(void* ptr);
void QBluetoothTransferReply_DisconnectNotify(void* ptr, void* sign);
void QBluetoothTransferReply_DisconnectNotifyDefault(void* ptr, void* sign);
int QBluetoothTransferReply_Event(void* ptr, void* e);
int QBluetoothTransferReply_EventDefault(void* ptr, void* e);
int QBluetoothTransferReply_EventFilter(void* ptr, void* watched, void* event);
int QBluetoothTransferReply_EventFilterDefault(void* ptr, void* watched, void* event);
void* QBluetoothTransferReply_MetaObject(void* ptr);
void* QBluetoothTransferReply_MetaObjectDefault(void* ptr);
void* QBluetoothTransferRequest_NewQBluetoothTransferRequest(void* address);
void* QBluetoothTransferRequest_NewQBluetoothTransferRequest2(void* other);
void* QBluetoothTransferRequest_Address(void* ptr);
void* QBluetoothTransferRequest_Attribute(void* ptr, int code, void* defaultValue);
void QBluetoothTransferRequest_SetAttribute(void* ptr, int code, void* value);
void QBluetoothTransferRequest_DestroyQBluetoothTransferRequest(void* ptr);
void* QBluetoothUuid_NewQBluetoothUuid();
void* QBluetoothUuid_NewQBluetoothUuid4(int uuid);
void* QBluetoothUuid_NewQBluetoothUuid5(int uuid);
void* QBluetoothUuid_NewQBluetoothUuid2(int uuid);
void* QBluetoothUuid_NewQBluetoothUuid3(int uuid);
void* QBluetoothUuid_NewQBluetoothUuid10(void* uuid);
void* QBluetoothUuid_NewQBluetoothUuid9(char* uuid);
void* QBluetoothUuid_NewQBluetoothUuid11(void* uuid);
char* QBluetoothUuid_QBluetoothUuid_CharacteristicToString(int uuid);
char* QBluetoothUuid_QBluetoothUuid_DescriptorToString(int uuid);
int QBluetoothUuid_MinimumSize(void* ptr);
char* QBluetoothUuid_QBluetoothUuid_ProtocolToString(int uuid);
char* QBluetoothUuid_QBluetoothUuid_ServiceClassToString(int uuid);
void QBluetoothUuid_DestroyQBluetoothUuid(void* ptr);
void* QLowEnergyCharacteristic_NewQLowEnergyCharacteristic();
void* QLowEnergyCharacteristic_NewQLowEnergyCharacteristic2(void* other);
void* QLowEnergyCharacteristic_Descriptor(void* ptr, void* uuid);
int QLowEnergyCharacteristic_IsValid(void* ptr);
char* QLowEnergyCharacteristic_Name(void* ptr);
int QLowEnergyCharacteristic_Properties(void* ptr);
void* QLowEnergyCharacteristic_Uuid(void* ptr);
char* QLowEnergyCharacteristic_Value(void* ptr);
void QLowEnergyCharacteristic_DestroyQLowEnergyCharacteristic(void* ptr);
void QLowEnergyController_ConnectConnected(void* ptr);
void QLowEnergyController_DisconnectConnected(void* ptr);
void QLowEnergyController_Connected(void* ptr);
void QLowEnergyController_ConnectDisconnected(void* ptr);
void QLowEnergyController_DisconnectDisconnected(void* ptr);
void QLowEnergyController_Disconnected(void* ptr);
void QLowEnergyController_ConnectDiscoveryFinished(void* ptr);
void QLowEnergyController_DisconnectDiscoveryFinished(void* ptr);
void QLowEnergyController_DiscoveryFinished(void* ptr);
void QLowEnergyController_ConnectError2(void* ptr);
void QLowEnergyController_DisconnectError2(void* ptr);
void QLowEnergyController_Error2(void* ptr, int newError);
void QLowEnergyController_ConnectServiceDiscovered(void* ptr);
void QLowEnergyController_DisconnectServiceDiscovered(void* ptr);
void QLowEnergyController_ServiceDiscovered(void* ptr, void* newService);
void QLowEnergyController_ConnectStateChanged(void* ptr);
void QLowEnergyController_DisconnectStateChanged(void* ptr);
void QLowEnergyController_StateChanged(void* ptr, int state);
void* QLowEnergyController_NewQLowEnergyController(void* remoteDeviceInfo, void* parent);
void QLowEnergyController_ConnectToDevice(void* ptr);
void* QLowEnergyController_CreateServiceObject(void* ptr, void* serviceUuid, void* parent);
void QLowEnergyController_DisconnectFromDevice(void* ptr);
void QLowEnergyController_DiscoverServices(void* ptr);
int QLowEnergyController_Error(void* ptr);
char* QLowEnergyController_ErrorString(void* ptr);
void* QLowEnergyController_LocalAddress(void* ptr);
void* QLowEnergyController_RemoteAddress(void* ptr);
int QLowEnergyController_RemoteAddressType(void* ptr);
char* QLowEnergyController_RemoteName(void* ptr);
void QLowEnergyController_SetRemoteAddressType(void* ptr, int ty);
int QLowEnergyController_State(void* ptr);
void QLowEnergyController_DestroyQLowEnergyController(void* ptr);
void QLowEnergyController_TimerEvent(void* ptr, void* event);
void QLowEnergyController_TimerEventDefault(void* ptr, void* event);
void QLowEnergyController_ChildEvent(void* ptr, void* event);
void QLowEnergyController_ChildEventDefault(void* ptr, void* event);
void QLowEnergyController_ConnectNotify(void* ptr, void* sign);
void QLowEnergyController_ConnectNotifyDefault(void* ptr, void* sign);
void QLowEnergyController_CustomEvent(void* ptr, void* event);
void QLowEnergyController_CustomEventDefault(void* ptr, void* event);
void QLowEnergyController_DeleteLater(void* ptr);
void QLowEnergyController_DeleteLaterDefault(void* ptr);
void QLowEnergyController_DisconnectNotify(void* ptr, void* sign);
void QLowEnergyController_DisconnectNotifyDefault(void* ptr, void* sign);
int QLowEnergyController_Event(void* ptr, void* e);
int QLowEnergyController_EventDefault(void* ptr, void* e);
int QLowEnergyController_EventFilter(void* ptr, void* watched, void* event);
int QLowEnergyController_EventFilterDefault(void* ptr, void* watched, void* event);
void* QLowEnergyController_MetaObject(void* ptr);
void* QLowEnergyController_MetaObjectDefault(void* ptr);
void* QLowEnergyDescriptor_NewQLowEnergyDescriptor();
void* QLowEnergyDescriptor_NewQLowEnergyDescriptor2(void* other);
int QLowEnergyDescriptor_IsValid(void* ptr);
char* QLowEnergyDescriptor_Name(void* ptr);
int QLowEnergyDescriptor_Type(void* ptr);
void* QLowEnergyDescriptor_Uuid(void* ptr);
char* QLowEnergyDescriptor_Value(void* ptr);
void QLowEnergyDescriptor_DestroyQLowEnergyDescriptor(void* ptr);
void QLowEnergyService_ConnectCharacteristicChanged(void* ptr);
void QLowEnergyService_DisconnectCharacteristicChanged(void* ptr);
void QLowEnergyService_CharacteristicChanged(void* ptr, void* characteristic, char* newValue);
void QLowEnergyService_ConnectCharacteristicRead(void* ptr);
void QLowEnergyService_DisconnectCharacteristicRead(void* ptr);
void QLowEnergyService_CharacteristicRead(void* ptr, void* characteristic, char* value);
void QLowEnergyService_ConnectCharacteristicWritten(void* ptr);
void QLowEnergyService_DisconnectCharacteristicWritten(void* ptr);
void QLowEnergyService_CharacteristicWritten(void* ptr, void* characteristic, char* newValue);
void QLowEnergyService_ConnectDescriptorRead(void* ptr);
void QLowEnergyService_DisconnectDescriptorRead(void* ptr);
void QLowEnergyService_DescriptorRead(void* ptr, void* descriptor, char* value);
void QLowEnergyService_ConnectDescriptorWritten(void* ptr);
void QLowEnergyService_DisconnectDescriptorWritten(void* ptr);
void QLowEnergyService_DescriptorWritten(void* ptr, void* descriptor, char* newValue);
void QLowEnergyService_ConnectError2(void* ptr);
void QLowEnergyService_DisconnectError2(void* ptr);
void QLowEnergyService_Error2(void* ptr, int newError);
void QLowEnergyService_ConnectStateChanged(void* ptr);
void QLowEnergyService_DisconnectStateChanged(void* ptr);
void QLowEnergyService_StateChanged(void* ptr, int newState);
void* QLowEnergyService_Characteristic(void* ptr, void* uuid);
int QLowEnergyService_Contains(void* ptr, void* characteristic);
int QLowEnergyService_Contains2(void* ptr, void* descriptor);
void QLowEnergyService_DiscoverDetails(void* ptr);
int QLowEnergyService_Error(void* ptr);
void QLowEnergyService_ReadCharacteristic(void* ptr, void* characteristic);
void QLowEnergyService_ReadDescriptor(void* ptr, void* descriptor);
char* QLowEnergyService_ServiceName(void* ptr);
void* QLowEnergyService_ServiceUuid(void* ptr);
int QLowEnergyService_State(void* ptr);
int QLowEnergyService_Type(void* ptr);
void QLowEnergyService_WriteCharacteristic(void* ptr, void* characteristic, char* newValue, int mode);
void QLowEnergyService_WriteDescriptor(void* ptr, void* descriptor, char* newValue);
void QLowEnergyService_DestroyQLowEnergyService(void* ptr);
void QLowEnergyService_TimerEvent(void* ptr, void* event);
void QLowEnergyService_TimerEventDefault(void* ptr, void* event);
void QLowEnergyService_ChildEvent(void* ptr, void* event);
void QLowEnergyService_ChildEventDefault(void* ptr, void* event);
void QLowEnergyService_ConnectNotify(void* ptr, void* sign);
void QLowEnergyService_ConnectNotifyDefault(void* ptr, void* sign);
void QLowEnergyService_CustomEvent(void* ptr, void* event);
void QLowEnergyService_CustomEventDefault(void* ptr, void* event);
void QLowEnergyService_DeleteLater(void* ptr);
void QLowEnergyService_DeleteLaterDefault(void* ptr);
void QLowEnergyService_DisconnectNotify(void* ptr, void* sign);
void QLowEnergyService_DisconnectNotifyDefault(void* ptr, void* sign);
int QLowEnergyService_Event(void* ptr, void* e);
int QLowEnergyService_EventDefault(void* ptr, void* e);
int QLowEnergyService_EventFilter(void* ptr, void* watched, void* event);
int QLowEnergyService_EventFilterDefault(void* ptr, void* watched, void* event);
void* QLowEnergyService_MetaObject(void* ptr);
void* QLowEnergyService_MetaObjectDefault(void* ptr);

#ifdef __cplusplus
}
#endif

#endif