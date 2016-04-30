#pragma once

#ifndef GO_QTXMLPATTERNS_H
#define GO_QTXMLPATTERNS_H

#ifdef __cplusplus
extern "C" {
#endif

void QAbstractMessageHandler_DestroyQAbstractMessageHandler(void* ptr);
void QAbstractMessageHandler_TimerEvent(void* ptr, void* event);
void QAbstractMessageHandler_TimerEventDefault(void* ptr, void* event);
void QAbstractMessageHandler_ChildEvent(void* ptr, void* event);
void QAbstractMessageHandler_ChildEventDefault(void* ptr, void* event);
void QAbstractMessageHandler_ConnectNotify(void* ptr, void* sign);
void QAbstractMessageHandler_ConnectNotifyDefault(void* ptr, void* sign);
void QAbstractMessageHandler_CustomEvent(void* ptr, void* event);
void QAbstractMessageHandler_CustomEventDefault(void* ptr, void* event);
void QAbstractMessageHandler_DeleteLater(void* ptr);
void QAbstractMessageHandler_DeleteLaterDefault(void* ptr);
void QAbstractMessageHandler_DisconnectNotify(void* ptr, void* sign);
void QAbstractMessageHandler_DisconnectNotifyDefault(void* ptr, void* sign);
int QAbstractMessageHandler_Event(void* ptr, void* e);
int QAbstractMessageHandler_EventDefault(void* ptr, void* e);
int QAbstractMessageHandler_EventFilter(void* ptr, void* watched, void* event);
int QAbstractMessageHandler_EventFilterDefault(void* ptr, void* watched, void* event);
void* QAbstractMessageHandler_MetaObject(void* ptr);
void* QAbstractMessageHandler_MetaObjectDefault(void* ptr);
void* QAbstractUriResolver_NewQAbstractUriResolver(void* parent);
void* QAbstractUriResolver_Resolve(void* ptr, void* relative, void* baseURI);
void QAbstractUriResolver_DestroyQAbstractUriResolver(void* ptr);
void QAbstractUriResolver_TimerEvent(void* ptr, void* event);
void QAbstractUriResolver_TimerEventDefault(void* ptr, void* event);
void QAbstractUriResolver_ChildEvent(void* ptr, void* event);
void QAbstractUriResolver_ChildEventDefault(void* ptr, void* event);
void QAbstractUriResolver_ConnectNotify(void* ptr, void* sign);
void QAbstractUriResolver_ConnectNotifyDefault(void* ptr, void* sign);
void QAbstractUriResolver_CustomEvent(void* ptr, void* event);
void QAbstractUriResolver_CustomEventDefault(void* ptr, void* event);
void QAbstractUriResolver_DeleteLater(void* ptr);
void QAbstractUriResolver_DeleteLaterDefault(void* ptr);
void QAbstractUriResolver_DisconnectNotify(void* ptr, void* sign);
void QAbstractUriResolver_DisconnectNotifyDefault(void* ptr, void* sign);
int QAbstractUriResolver_Event(void* ptr, void* e);
int QAbstractUriResolver_EventDefault(void* ptr, void* e);
int QAbstractUriResolver_EventFilter(void* ptr, void* watched, void* event);
int QAbstractUriResolver_EventFilterDefault(void* ptr, void* watched, void* event);
void* QAbstractUriResolver_MetaObject(void* ptr);
void* QAbstractUriResolver_MetaObjectDefault(void* ptr);
void* QAbstractXmlNodeModel_BaseUri(void* ptr, void* n);
int QAbstractXmlNodeModel_CompareOrder(void* ptr, void* ni1, void* ni2);
void* QAbstractXmlNodeModel_CreateIndex(void* ptr, long long data);
void* QAbstractXmlNodeModel_CreateIndex3(void* ptr, long long data, long long additionalData);
void* QAbstractXmlNodeModel_CreateIndex2(void* ptr, void* pointer, long long additionalData);
void* QAbstractXmlNodeModel_DocumentUri(void* ptr, void* n);
int QAbstractXmlNodeModel_Kind(void* ptr, void* ni);
void* QAbstractXmlNodeModel_Name(void* ptr, void* ni);
void* QAbstractXmlNodeModel_NextFromSimpleAxis(void* ptr, int axis, void* origin);
void* QAbstractXmlNodeModel_Root(void* ptr, void* n);
void* QAbstractXmlNodeModel_SourceLocation(void* ptr, void* index);
char* QAbstractXmlNodeModel_StringValue(void* ptr, void* n);
void* QAbstractXmlNodeModel_TypedValue(void* ptr, void* node);
void QAbstractXmlNodeModel_DestroyQAbstractXmlNodeModel(void* ptr);
char* QAbstractXmlNodeModel_ObjectNameAbs(void* ptr);
void QAbstractXmlNodeModel_SetObjectNameAbs(void* ptr, char* name);
void QAbstractXmlReceiver_AtomicValue(void* ptr, void* value);
void QAbstractXmlReceiver_Characters(void* ptr, void* value);
void QAbstractXmlReceiver_Comment(void* ptr, char* value);
void QAbstractXmlReceiver_EndDocument(void* ptr);
void QAbstractXmlReceiver_EndElement(void* ptr);
void QAbstractXmlReceiver_EndOfSequence(void* ptr);
void QAbstractXmlReceiver_StartDocument(void* ptr);
void QAbstractXmlReceiver_StartOfSequence(void* ptr);
void QAbstractXmlReceiver_DestroyQAbstractXmlReceiver(void* ptr);
char* QAbstractXmlReceiver_ObjectNameAbs(void* ptr);
void QAbstractXmlReceiver_SetObjectNameAbs(void* ptr, char* name);
void* QSimpleXmlNodeModel_BaseUri(void* ptr, void* node);
void* QSimpleXmlNodeModel_BaseUriDefault(void* ptr, void* node);
void* QSimpleXmlNodeModel_NamePool(void* ptr);
char* QSimpleXmlNodeModel_StringValue(void* ptr, void* node);
char* QSimpleXmlNodeModel_StringValueDefault(void* ptr, void* node);
void QSimpleXmlNodeModel_DestroyQSimpleXmlNodeModel(void* ptr);
char* QSimpleXmlNodeModel_ObjectNameAbs(void* ptr);
void QSimpleXmlNodeModel_SetObjectNameAbs(void* ptr, char* name);
int QSimpleXmlNodeModel_CompareOrder(void* ptr, void* ni1, void* ni2);
;
void* QSimpleXmlNodeModel_DocumentUri(void* ptr, void* n);
;
int QSimpleXmlNodeModel_Kind(void* ptr, void* ni);
;
void* QSimpleXmlNodeModel_Name(void* ptr, void* ni);
void* QSimpleXmlNodeModel_NameDefault(void* ptr, void* ni);
void* QSimpleXmlNodeModel_NextFromSimpleAxis(void* ptr, int axis, void* origin);
;
void* QSimpleXmlNodeModel_Root(void* ptr, void* n);
;
void* QSimpleXmlNodeModel_TypedValue(void* ptr, void* node);
;
void* QSourceLocation_NewQSourceLocation();
void* QSourceLocation_NewQSourceLocation2(void* other);
void* QSourceLocation_NewQSourceLocation3(void* u, int l, int c);
long long QSourceLocation_Column(void* ptr);
int QSourceLocation_IsNull(void* ptr);
long long QSourceLocation_Line(void* ptr);
void QSourceLocation_SetColumn(void* ptr, long long newColumn);
void QSourceLocation_SetLine(void* ptr, long long newLine);
void QSourceLocation_SetUri(void* ptr, void* newUri);
void* QSourceLocation_Uri(void* ptr);
void QSourceLocation_DestroyQSourceLocation(void* ptr);
void* QXmlFormatter_NewQXmlFormatter(void* query, void* outputDevice);
void QXmlFormatter_AtomicValue(void* ptr, void* value);
void QXmlFormatter_AtomicValueDefault(void* ptr, void* value);
void QXmlFormatter_Characters(void* ptr, void* value);
void QXmlFormatter_CharactersDefault(void* ptr, void* value);
void QXmlFormatter_Comment(void* ptr, char* value);
void QXmlFormatter_CommentDefault(void* ptr, char* value);
void QXmlFormatter_EndDocument(void* ptr);
void QXmlFormatter_EndDocumentDefault(void* ptr);
void QXmlFormatter_EndElement(void* ptr);
void QXmlFormatter_EndElementDefault(void* ptr);
void QXmlFormatter_EndOfSequence(void* ptr);
void QXmlFormatter_EndOfSequenceDefault(void* ptr);
int QXmlFormatter_IndentationDepth(void* ptr);
void QXmlFormatter_SetIndentationDepth(void* ptr, int depth);
void QXmlFormatter_StartDocument(void* ptr);
void QXmlFormatter_StartDocumentDefault(void* ptr);
void QXmlFormatter_StartOfSequence(void* ptr);
void QXmlFormatter_StartOfSequenceDefault(void* ptr);
char* QXmlFormatter_ObjectNameAbs(void* ptr);
void QXmlFormatter_SetObjectNameAbs(void* ptr, char* name);
void* QXmlItem_NewQXmlItem();
void* QXmlItem_NewQXmlItem4(void* atomicValue);
void* QXmlItem_NewQXmlItem2(void* other);
void* QXmlItem_NewQXmlItem3(void* node);
int QXmlItem_IsAtomicValue(void* ptr);
int QXmlItem_IsNode(void* ptr);
int QXmlItem_IsNull(void* ptr);
void* QXmlItem_ToAtomicValue(void* ptr);
void* QXmlItem_ToNodeModelIndex(void* ptr);
void QXmlItem_DestroyQXmlItem(void* ptr);
void* QXmlName_NewQXmlName();
void* QXmlName_NewQXmlName2(void* namePool, char* localName, char* namespaceURI, char* prefix);
int QXmlName_QXmlName_IsNCName(char* candidate);
int QXmlName_IsNull(void* ptr);
char* QXmlName_LocalName(void* ptr, void* namePool);
char* QXmlName_NamespaceUri(void* ptr, void* namePool);
char* QXmlName_Prefix(void* ptr, void* namePool);
char* QXmlName_ToClarkName(void* ptr, void* namePool);
void* QXmlNamePool_NewQXmlNamePool();
void* QXmlNamePool_NewQXmlNamePool2(void* other);
void QXmlNamePool_DestroyQXmlNamePool(void* ptr);
void* QXmlNodeModelIndex_NewQXmlNodeModelIndex();
void* QXmlNodeModelIndex_NewQXmlNodeModelIndex2(void* other);
long long QXmlNodeModelIndex_AdditionalData(void* ptr);
long long QXmlNodeModelIndex_Data(void* ptr);
void* QXmlNodeModelIndex_InternalPointer(void* ptr);
int QXmlNodeModelIndex_IsNull(void* ptr);
void* QXmlNodeModelIndex_Model(void* ptr);
void* QXmlQuery_NewQXmlQuery();
void* QXmlQuery_NewQXmlQuery4(int queryLanguage, void* np);
void* QXmlQuery_NewQXmlQuery3(void* np);
void* QXmlQuery_NewQXmlQuery2(void* other);
void QXmlQuery_BindVariable5(void* ptr, char* localName, void* device);
void QXmlQuery_BindVariable4(void* ptr, char* localName, void* value);
void QXmlQuery_BindVariable6(void* ptr, char* localName, void* query);
void QXmlQuery_BindVariable2(void* ptr, void* name, void* device);
void QXmlQuery_BindVariable(void* ptr, void* name, void* value);
void QXmlQuery_BindVariable3(void* ptr, void* name, void* query);
int QXmlQuery_EvaluateTo2(void* ptr, void* callback);
int QXmlQuery_EvaluateTo5(void* ptr, void* target);
int QXmlQuery_EvaluateTo4(void* ptr, char* output);
int QXmlQuery_EvaluateTo3(void* ptr, char* target);
void QXmlQuery_EvaluateTo(void* ptr, void* result);
int QXmlQuery_IsValid(void* ptr);
void* QXmlQuery_MessageHandler(void* ptr);
void* QXmlQuery_NamePool(void* ptr);
void* QXmlQuery_NetworkAccessManager(void* ptr);
int QXmlQuery_QueryLanguage(void* ptr);
int QXmlQuery_SetFocus3(void* ptr, void* document);
int QXmlQuery_SetFocus4(void* ptr, char* focus);
int QXmlQuery_SetFocus2(void* ptr, void* documentURI);
void QXmlQuery_SetFocus(void* ptr, void* item);
void QXmlQuery_SetInitialTemplateName2(void* ptr, char* localName);
void QXmlQuery_SetInitialTemplateName(void* ptr, void* name);
void QXmlQuery_SetMessageHandler(void* ptr, void* aMessageHandler);
void QXmlQuery_SetNetworkAccessManager(void* ptr, void* newManager);
void QXmlQuery_SetQuery(void* ptr, void* sourceCode, void* documentURI);
void QXmlQuery_SetQuery3(void* ptr, char* sourceCode, void* documentURI);
void QXmlQuery_SetQuery2(void* ptr, void* queryURI, void* baseURI);
void QXmlQuery_SetUriResolver(void* ptr, void* resolver);
void* QXmlQuery_UriResolver(void* ptr);
void QXmlQuery_DestroyQXmlQuery(void* ptr);
void* QXmlResultItems_NewQXmlResultItems();
void* QXmlResultItems_Current(void* ptr);
int QXmlResultItems_HasError(void* ptr);
void* QXmlResultItems_Next(void* ptr);
void QXmlResultItems_DestroyQXmlResultItems(void* ptr);
char* QXmlResultItems_ObjectNameAbs(void* ptr);
void QXmlResultItems_SetObjectNameAbs(void* ptr, char* name);
void* QXmlSchema_NewQXmlSchema();
void* QXmlSchema_NewQXmlSchema2(void* other);
void* QXmlSchema_DocumentUri(void* ptr);
int QXmlSchema_IsValid(void* ptr);
int QXmlSchema_Load2(void* ptr, void* source, void* documentUri);
int QXmlSchema_Load3(void* ptr, char* data, void* documentUri);
int QXmlSchema_Load(void* ptr, void* source);
void* QXmlSchema_MessageHandler(void* ptr);
void* QXmlSchema_NamePool(void* ptr);
void* QXmlSchema_NetworkAccessManager(void* ptr);
void QXmlSchema_SetMessageHandler(void* ptr, void* handler);
void QXmlSchema_SetNetworkAccessManager(void* ptr, void* manager);
void QXmlSchema_SetUriResolver(void* ptr, void* resolver);
void* QXmlSchema_UriResolver(void* ptr);
void QXmlSchema_DestroyQXmlSchema(void* ptr);
void* QXmlSchemaValidator_NewQXmlSchemaValidator();
void* QXmlSchemaValidator_NewQXmlSchemaValidator2(void* schema);
void* QXmlSchemaValidator_MessageHandler(void* ptr);
void* QXmlSchemaValidator_NamePool(void* ptr);
void* QXmlSchemaValidator_NetworkAccessManager(void* ptr);
void* QXmlSchemaValidator_Schema(void* ptr);
void QXmlSchemaValidator_SetMessageHandler(void* ptr, void* handler);
void QXmlSchemaValidator_SetNetworkAccessManager(void* ptr, void* manager);
void QXmlSchemaValidator_SetSchema(void* ptr, void* schema);
void QXmlSchemaValidator_SetUriResolver(void* ptr, void* resolver);
void* QXmlSchemaValidator_UriResolver(void* ptr);
int QXmlSchemaValidator_Validate2(void* ptr, void* source, void* documentUri);
int QXmlSchemaValidator_Validate3(void* ptr, char* data, void* documentUri);
int QXmlSchemaValidator_Validate(void* ptr, void* source);
void QXmlSchemaValidator_DestroyQXmlSchemaValidator(void* ptr);
void* QXmlSerializer_NewQXmlSerializer(void* query, void* outputDevice);
void QXmlSerializer_AtomicValue(void* ptr, void* value);
void QXmlSerializer_AtomicValueDefault(void* ptr, void* value);
void QXmlSerializer_Characters(void* ptr, void* value);
void QXmlSerializer_CharactersDefault(void* ptr, void* value);
void QXmlSerializer_Comment(void* ptr, char* value);
void QXmlSerializer_CommentDefault(void* ptr, char* value);
void QXmlSerializer_EndDocument(void* ptr);
void QXmlSerializer_EndDocumentDefault(void* ptr);
void QXmlSerializer_EndElement(void* ptr);
void QXmlSerializer_EndElementDefault(void* ptr);
void* QXmlSerializer_Codec(void* ptr);
void QXmlSerializer_EndOfSequence(void* ptr);
void QXmlSerializer_EndOfSequenceDefault(void* ptr);
void* QXmlSerializer_OutputDevice(void* ptr);
void QXmlSerializer_SetCodec(void* ptr, void* outputCodec);
void QXmlSerializer_StartDocument(void* ptr);
void QXmlSerializer_StartDocumentDefault(void* ptr);
void QXmlSerializer_StartOfSequence(void* ptr);
void QXmlSerializer_StartOfSequenceDefault(void* ptr);
char* QXmlSerializer_ObjectNameAbs(void* ptr);
void QXmlSerializer_SetObjectNameAbs(void* ptr, char* name);

#ifdef __cplusplus
}
#endif

#endif