#pragma once

#ifndef GO_QTMULTIMEDIAWIDGETS_H
#define GO_QTMULTIMEDIAWIDGETS_H

#ifdef __cplusplus
extern "C" {
#endif

void* QCameraViewfinder_NewQCameraViewfinder(void* parent);
void* QCameraViewfinder_MediaObject(void* ptr);
void* QCameraViewfinder_MediaObjectDefault(void* ptr);
int QCameraViewfinder_SetMediaObject(void* ptr, void* object);
int QCameraViewfinder_SetMediaObjectDefault(void* ptr, void* object);
void QCameraViewfinder_DestroyQCameraViewfinder(void* ptr);
void QCameraViewfinder_SetAspectRatioMode(void* ptr, int mode);
void QCameraViewfinder_SetAspectRatioModeDefault(void* ptr, int mode);
void QCameraViewfinder_SetBrightness(void* ptr, int brightness);
void QCameraViewfinder_SetBrightnessDefault(void* ptr, int brightness);
void QCameraViewfinder_SetContrast(void* ptr, int contrast);
void QCameraViewfinder_SetContrastDefault(void* ptr, int contrast);
void QCameraViewfinder_SetFullScreen(void* ptr, int fullScreen);
void QCameraViewfinder_SetFullScreenDefault(void* ptr, int fullScreen);
void QCameraViewfinder_SetHue(void* ptr, int hue);
void QCameraViewfinder_SetHueDefault(void* ptr, int hue);
void QCameraViewfinder_SetSaturation(void* ptr, int saturation);
void QCameraViewfinder_SetSaturationDefault(void* ptr, int saturation);
int QCameraViewfinder_Event(void* ptr, void* event);
int QCameraViewfinder_EventDefault(void* ptr, void* event);
void QCameraViewfinder_HideEvent(void* ptr, void* event);
void QCameraViewfinder_HideEventDefault(void* ptr, void* event);
void QCameraViewfinder_MoveEvent(void* ptr, void* event);
void QCameraViewfinder_MoveEventDefault(void* ptr, void* event);
void QCameraViewfinder_PaintEvent(void* ptr, void* event);
void QCameraViewfinder_PaintEventDefault(void* ptr, void* event);
void QCameraViewfinder_ResizeEvent(void* ptr, void* event);
void QCameraViewfinder_ResizeEventDefault(void* ptr, void* event);
void QCameraViewfinder_ShowEvent(void* ptr, void* event);
void QCameraViewfinder_ShowEventDefault(void* ptr, void* event);
void* QCameraViewfinder_SizeHint(void* ptr);
void* QCameraViewfinder_SizeHintDefault(void* ptr);
void QCameraViewfinder_ActionEvent(void* ptr, void* event);
void QCameraViewfinder_ActionEventDefault(void* ptr, void* event);
void QCameraViewfinder_DragEnterEvent(void* ptr, void* event);
void QCameraViewfinder_DragEnterEventDefault(void* ptr, void* event);
void QCameraViewfinder_DragLeaveEvent(void* ptr, void* event);
void QCameraViewfinder_DragLeaveEventDefault(void* ptr, void* event);
void QCameraViewfinder_DragMoveEvent(void* ptr, void* event);
void QCameraViewfinder_DragMoveEventDefault(void* ptr, void* event);
void QCameraViewfinder_DropEvent(void* ptr, void* event);
void QCameraViewfinder_DropEventDefault(void* ptr, void* event);
void QCameraViewfinder_EnterEvent(void* ptr, void* event);
void QCameraViewfinder_EnterEventDefault(void* ptr, void* event);
void QCameraViewfinder_FocusInEvent(void* ptr, void* event);
void QCameraViewfinder_FocusInEventDefault(void* ptr, void* event);
void QCameraViewfinder_FocusOutEvent(void* ptr, void* event);
void QCameraViewfinder_FocusOutEventDefault(void* ptr, void* event);
void QCameraViewfinder_LeaveEvent(void* ptr, void* event);
void QCameraViewfinder_LeaveEventDefault(void* ptr, void* event);
int QCameraViewfinder_Metric(void* ptr, int m);
int QCameraViewfinder_MetricDefault(void* ptr, int m);
void* QCameraViewfinder_MinimumSizeHint(void* ptr);
void* QCameraViewfinder_MinimumSizeHintDefault(void* ptr);
void* QCameraViewfinder_PaintEngine(void* ptr);
void* QCameraViewfinder_PaintEngineDefault(void* ptr);
void QCameraViewfinder_SetEnabled(void* ptr, int vbo);
void QCameraViewfinder_SetEnabledDefault(void* ptr, int vbo);
void QCameraViewfinder_SetStyleSheet(void* ptr, char* styleSheet);
void QCameraViewfinder_SetStyleSheetDefault(void* ptr, char* styleSheet);
void QCameraViewfinder_SetVisible(void* ptr, int visible);
void QCameraViewfinder_SetVisibleDefault(void* ptr, int visible);
void QCameraViewfinder_SetWindowModified(void* ptr, int vbo);
void QCameraViewfinder_SetWindowModifiedDefault(void* ptr, int vbo);
void QCameraViewfinder_SetWindowTitle(void* ptr, char* vqs);
void QCameraViewfinder_SetWindowTitleDefault(void* ptr, char* vqs);
void QCameraViewfinder_ChangeEvent(void* ptr, void* event);
void QCameraViewfinder_ChangeEventDefault(void* ptr, void* event);
int QCameraViewfinder_Close(void* ptr);
int QCameraViewfinder_CloseDefault(void* ptr);
void QCameraViewfinder_CloseEvent(void* ptr, void* event);
void QCameraViewfinder_CloseEventDefault(void* ptr, void* event);
void QCameraViewfinder_ContextMenuEvent(void* ptr, void* event);
void QCameraViewfinder_ContextMenuEventDefault(void* ptr, void* event);
int QCameraViewfinder_FocusNextPrevChild(void* ptr, int next);
int QCameraViewfinder_FocusNextPrevChildDefault(void* ptr, int next);
int QCameraViewfinder_HasHeightForWidth(void* ptr);
int QCameraViewfinder_HasHeightForWidthDefault(void* ptr);
int QCameraViewfinder_HeightForWidth(void* ptr, int w);
int QCameraViewfinder_HeightForWidthDefault(void* ptr, int w);
void QCameraViewfinder_Hide(void* ptr);
void QCameraViewfinder_HideDefault(void* ptr);
void QCameraViewfinder_InitPainter(void* ptr, void* painter);
void QCameraViewfinder_InitPainterDefault(void* ptr, void* painter);
void QCameraViewfinder_InputMethodEvent(void* ptr, void* event);
void QCameraViewfinder_InputMethodEventDefault(void* ptr, void* event);
void* QCameraViewfinder_InputMethodQuery(void* ptr, int query);
void* QCameraViewfinder_InputMethodQueryDefault(void* ptr, int query);
void QCameraViewfinder_KeyPressEvent(void* ptr, void* event);
void QCameraViewfinder_KeyPressEventDefault(void* ptr, void* event);
void QCameraViewfinder_KeyReleaseEvent(void* ptr, void* event);
void QCameraViewfinder_KeyReleaseEventDefault(void* ptr, void* event);
void QCameraViewfinder_Lower(void* ptr);
void QCameraViewfinder_LowerDefault(void* ptr);
void QCameraViewfinder_MouseDoubleClickEvent(void* ptr, void* event);
void QCameraViewfinder_MouseDoubleClickEventDefault(void* ptr, void* event);
void QCameraViewfinder_MouseMoveEvent(void* ptr, void* event);
void QCameraViewfinder_MouseMoveEventDefault(void* ptr, void* event);
void QCameraViewfinder_MousePressEvent(void* ptr, void* event);
void QCameraViewfinder_MousePressEventDefault(void* ptr, void* event);
void QCameraViewfinder_MouseReleaseEvent(void* ptr, void* event);
void QCameraViewfinder_MouseReleaseEventDefault(void* ptr, void* event);
int QCameraViewfinder_NativeEvent(void* ptr, char* eventType, void* message, long result);
int QCameraViewfinder_NativeEventDefault(void* ptr, char* eventType, void* message, long result);
void QCameraViewfinder_Raise(void* ptr);
void QCameraViewfinder_RaiseDefault(void* ptr);
void QCameraViewfinder_Repaint(void* ptr);
void QCameraViewfinder_RepaintDefault(void* ptr);
void QCameraViewfinder_SetDisabled(void* ptr, int disable);
void QCameraViewfinder_SetDisabledDefault(void* ptr, int disable);
void QCameraViewfinder_SetFocus2(void* ptr);
void QCameraViewfinder_SetFocus2Default(void* ptr);
void QCameraViewfinder_SetHidden(void* ptr, int hidden);
void QCameraViewfinder_SetHiddenDefault(void* ptr, int hidden);
void QCameraViewfinder_Show(void* ptr);
void QCameraViewfinder_ShowDefault(void* ptr);
void QCameraViewfinder_ShowFullScreen(void* ptr);
void QCameraViewfinder_ShowFullScreenDefault(void* ptr);
void QCameraViewfinder_ShowMaximized(void* ptr);
void QCameraViewfinder_ShowMaximizedDefault(void* ptr);
void QCameraViewfinder_ShowMinimized(void* ptr);
void QCameraViewfinder_ShowMinimizedDefault(void* ptr);
void QCameraViewfinder_ShowNormal(void* ptr);
void QCameraViewfinder_ShowNormalDefault(void* ptr);
void QCameraViewfinder_TabletEvent(void* ptr, void* event);
void QCameraViewfinder_TabletEventDefault(void* ptr, void* event);
void QCameraViewfinder_Update(void* ptr);
void QCameraViewfinder_UpdateDefault(void* ptr);
void QCameraViewfinder_UpdateMicroFocus(void* ptr);
void QCameraViewfinder_UpdateMicroFocusDefault(void* ptr);
void QCameraViewfinder_WheelEvent(void* ptr, void* event);
void QCameraViewfinder_WheelEventDefault(void* ptr, void* event);
void QCameraViewfinder_TimerEvent(void* ptr, void* event);
void QCameraViewfinder_TimerEventDefault(void* ptr, void* event);
void QCameraViewfinder_ChildEvent(void* ptr, void* event);
void QCameraViewfinder_ChildEventDefault(void* ptr, void* event);
void QCameraViewfinder_ConnectNotify(void* ptr, void* sign);
void QCameraViewfinder_ConnectNotifyDefault(void* ptr, void* sign);
void QCameraViewfinder_CustomEvent(void* ptr, void* event);
void QCameraViewfinder_CustomEventDefault(void* ptr, void* event);
void QCameraViewfinder_DeleteLater(void* ptr);
void QCameraViewfinder_DeleteLaterDefault(void* ptr);
void QCameraViewfinder_DisconnectNotify(void* ptr, void* sign);
void QCameraViewfinder_DisconnectNotifyDefault(void* ptr, void* sign);
int QCameraViewfinder_EventFilter(void* ptr, void* watched, void* event);
int QCameraViewfinder_EventFilterDefault(void* ptr, void* watched, void* event);
void* QCameraViewfinder_MetaObject(void* ptr);
void* QCameraViewfinder_MetaObjectDefault(void* ptr);
void QGraphicsVideoItem_ConnectNativeSizeChanged(void* ptr);
void QGraphicsVideoItem_DisconnectNativeSizeChanged(void* ptr);
void QGraphicsVideoItem_NativeSizeChanged(void* ptr, void* size);
void* QGraphicsVideoItem_NewQGraphicsVideoItem(void* parent);
int QGraphicsVideoItem_AspectRatioMode(void* ptr);
void* QGraphicsVideoItem_BoundingRect(void* ptr);
void* QGraphicsVideoItem_BoundingRectDefault(void* ptr);
void* QGraphicsVideoItem_MediaObject(void* ptr);
void* QGraphicsVideoItem_MediaObjectDefault(void* ptr);
void* QGraphicsVideoItem_NativeSize(void* ptr);
void* QGraphicsVideoItem_Offset(void* ptr);
void QGraphicsVideoItem_Paint(void* ptr, void* painter, void* option, void* widget);
void QGraphicsVideoItem_PaintDefault(void* ptr, void* painter, void* option, void* widget);
void QGraphicsVideoItem_SetAspectRatioMode(void* ptr, int mode);
void QGraphicsVideoItem_SetOffset(void* ptr, void* offset);
void QGraphicsVideoItem_SetSize(void* ptr, void* size);
void* QGraphicsVideoItem_Size(void* ptr);
void QGraphicsVideoItem_DestroyQGraphicsVideoItem(void* ptr);
int QGraphicsVideoItem_SetMediaObject(void* ptr, void* object);
int QGraphicsVideoItem_SetMediaObjectDefault(void* ptr, void* object);
int QGraphicsVideoItem_Event(void* ptr, void* ev);
int QGraphicsVideoItem_EventDefault(void* ptr, void* ev);
void QGraphicsVideoItem_UpdateMicroFocus(void* ptr);
void QGraphicsVideoItem_UpdateMicroFocusDefault(void* ptr);
void QGraphicsVideoItem_Advance(void* ptr, int phase);
void QGraphicsVideoItem_AdvanceDefault(void* ptr, int phase);
int QGraphicsVideoItem_CollidesWithItem(void* ptr, void* other, int mode);
int QGraphicsVideoItem_CollidesWithItemDefault(void* ptr, void* other, int mode);
int QGraphicsVideoItem_CollidesWithPath(void* ptr, void* path, int mode);
int QGraphicsVideoItem_CollidesWithPathDefault(void* ptr, void* path, int mode);
int QGraphicsVideoItem_Contains(void* ptr, void* point);
int QGraphicsVideoItem_ContainsDefault(void* ptr, void* point);
void QGraphicsVideoItem_ContextMenuEvent(void* ptr, void* event);
void QGraphicsVideoItem_ContextMenuEventDefault(void* ptr, void* event);
void QGraphicsVideoItem_DragEnterEvent(void* ptr, void* event);
void QGraphicsVideoItem_DragEnterEventDefault(void* ptr, void* event);
void QGraphicsVideoItem_DragLeaveEvent(void* ptr, void* event);
void QGraphicsVideoItem_DragLeaveEventDefault(void* ptr, void* event);
void QGraphicsVideoItem_DragMoveEvent(void* ptr, void* event);
void QGraphicsVideoItem_DragMoveEventDefault(void* ptr, void* event);
void QGraphicsVideoItem_DropEvent(void* ptr, void* event);
void QGraphicsVideoItem_DropEventDefault(void* ptr, void* event);
void QGraphicsVideoItem_FocusInEvent(void* ptr, void* event);
void QGraphicsVideoItem_FocusInEventDefault(void* ptr, void* event);
void QGraphicsVideoItem_FocusOutEvent(void* ptr, void* event);
void QGraphicsVideoItem_FocusOutEventDefault(void* ptr, void* event);
void QGraphicsVideoItem_HoverEnterEvent(void* ptr, void* event);
void QGraphicsVideoItem_HoverEnterEventDefault(void* ptr, void* event);
void QGraphicsVideoItem_HoverLeaveEvent(void* ptr, void* event);
void QGraphicsVideoItem_HoverLeaveEventDefault(void* ptr, void* event);
void QGraphicsVideoItem_HoverMoveEvent(void* ptr, void* event);
void QGraphicsVideoItem_HoverMoveEventDefault(void* ptr, void* event);
void QGraphicsVideoItem_InputMethodEvent(void* ptr, void* event);
void QGraphicsVideoItem_InputMethodEventDefault(void* ptr, void* event);
void* QGraphicsVideoItem_InputMethodQuery(void* ptr, int query);
void* QGraphicsVideoItem_InputMethodQueryDefault(void* ptr, int query);
int QGraphicsVideoItem_IsObscuredBy(void* ptr, void* item);
int QGraphicsVideoItem_IsObscuredByDefault(void* ptr, void* item);
void* QGraphicsVideoItem_ItemChange(void* ptr, int change, void* value);
void* QGraphicsVideoItem_ItemChangeDefault(void* ptr, int change, void* value);
void QGraphicsVideoItem_KeyPressEvent(void* ptr, void* event);
void QGraphicsVideoItem_KeyPressEventDefault(void* ptr, void* event);
void QGraphicsVideoItem_KeyReleaseEvent(void* ptr, void* event);
void QGraphicsVideoItem_KeyReleaseEventDefault(void* ptr, void* event);
void QGraphicsVideoItem_MouseDoubleClickEvent(void* ptr, void* event);
void QGraphicsVideoItem_MouseDoubleClickEventDefault(void* ptr, void* event);
void QGraphicsVideoItem_MouseMoveEvent(void* ptr, void* event);
void QGraphicsVideoItem_MouseMoveEventDefault(void* ptr, void* event);
void QGraphicsVideoItem_MousePressEvent(void* ptr, void* event);
void QGraphicsVideoItem_MousePressEventDefault(void* ptr, void* event);
void QGraphicsVideoItem_MouseReleaseEvent(void* ptr, void* event);
void QGraphicsVideoItem_MouseReleaseEventDefault(void* ptr, void* event);
void* QGraphicsVideoItem_OpaqueArea(void* ptr);
void* QGraphicsVideoItem_OpaqueAreaDefault(void* ptr);
int QGraphicsVideoItem_SceneEvent(void* ptr, void* event);
int QGraphicsVideoItem_SceneEventDefault(void* ptr, void* event);
int QGraphicsVideoItem_SceneEventFilter(void* ptr, void* watched, void* event);
int QGraphicsVideoItem_SceneEventFilterDefault(void* ptr, void* watched, void* event);
void* QGraphicsVideoItem_Shape(void* ptr);
void* QGraphicsVideoItem_ShapeDefault(void* ptr);
int QGraphicsVideoItem_Type(void* ptr);
int QGraphicsVideoItem_TypeDefault(void* ptr);
void QGraphicsVideoItem_WheelEvent(void* ptr, void* event);
void QGraphicsVideoItem_WheelEventDefault(void* ptr, void* event);
void QGraphicsVideoItem_TimerEvent(void* ptr, void* event);
void QGraphicsVideoItem_TimerEventDefault(void* ptr, void* event);
void QGraphicsVideoItem_ChildEvent(void* ptr, void* event);
void QGraphicsVideoItem_ChildEventDefault(void* ptr, void* event);
void QGraphicsVideoItem_ConnectNotify(void* ptr, void* sign);
void QGraphicsVideoItem_ConnectNotifyDefault(void* ptr, void* sign);
void QGraphicsVideoItem_CustomEvent(void* ptr, void* event);
void QGraphicsVideoItem_CustomEventDefault(void* ptr, void* event);
void QGraphicsVideoItem_DeleteLater(void* ptr);
void QGraphicsVideoItem_DeleteLaterDefault(void* ptr);
void QGraphicsVideoItem_DisconnectNotify(void* ptr, void* sign);
void QGraphicsVideoItem_DisconnectNotifyDefault(void* ptr, void* sign);
int QGraphicsVideoItem_EventFilter(void* ptr, void* watched, void* event);
int QGraphicsVideoItem_EventFilterDefault(void* ptr, void* watched, void* event);
void* QGraphicsVideoItem_MetaObject(void* ptr);
void* QGraphicsVideoItem_MetaObjectDefault(void* ptr);
int QVideoWidget_AspectRatioMode(void* ptr);
int QVideoWidget_Brightness(void* ptr);
int QVideoWidget_Contrast(void* ptr);
int QVideoWidget_Hue(void* ptr);
void* QVideoWidget_MediaObject(void* ptr);
void* QVideoWidget_MediaObjectDefault(void* ptr);
int QVideoWidget_Saturation(void* ptr);
void QVideoWidget_SetAspectRatioMode(void* ptr, int mode);
void QVideoWidget_SetBrightness(void* ptr, int brightness);
void QVideoWidget_SetContrast(void* ptr, int contrast);
void QVideoWidget_SetFullScreen(void* ptr, int fullScreen);
void QVideoWidget_SetHue(void* ptr, int hue);
void QVideoWidget_SetSaturation(void* ptr, int saturation);
void* QVideoWidget_NewQVideoWidget(void* parent);
void QVideoWidget_ConnectBrightnessChanged(void* ptr);
void QVideoWidget_DisconnectBrightnessChanged(void* ptr);
void QVideoWidget_BrightnessChanged(void* ptr, int brightness);
void QVideoWidget_ConnectContrastChanged(void* ptr);
void QVideoWidget_DisconnectContrastChanged(void* ptr);
void QVideoWidget_ContrastChanged(void* ptr, int contrast);
int QVideoWidget_Event(void* ptr, void* event);
int QVideoWidget_EventDefault(void* ptr, void* event);
void QVideoWidget_ConnectFullScreenChanged(void* ptr);
void QVideoWidget_DisconnectFullScreenChanged(void* ptr);
void QVideoWidget_FullScreenChanged(void* ptr, int fullScreen);
void QVideoWidget_HideEvent(void* ptr, void* event);
void QVideoWidget_HideEventDefault(void* ptr, void* event);
void QVideoWidget_ConnectHueChanged(void* ptr);
void QVideoWidget_DisconnectHueChanged(void* ptr);
void QVideoWidget_HueChanged(void* ptr, int hue);
int QVideoWidget_IsFullScreen(void* ptr);
void QVideoWidget_MoveEvent(void* ptr, void* event);
void QVideoWidget_MoveEventDefault(void* ptr, void* event);
void QVideoWidget_PaintEvent(void* ptr, void* event);
void QVideoWidget_PaintEventDefault(void* ptr, void* event);
void QVideoWidget_ResizeEvent(void* ptr, void* event);
void QVideoWidget_ResizeEventDefault(void* ptr, void* event);
void QVideoWidget_ConnectSaturationChanged(void* ptr);
void QVideoWidget_DisconnectSaturationChanged(void* ptr);
void QVideoWidget_SaturationChanged(void* ptr, int saturation);
void QVideoWidget_ShowEvent(void* ptr, void* event);
void QVideoWidget_ShowEventDefault(void* ptr, void* event);
void* QVideoWidget_SizeHint(void* ptr);
void* QVideoWidget_SizeHintDefault(void* ptr);
void QVideoWidget_DestroyQVideoWidget(void* ptr);
int QVideoWidget_SetMediaObject(void* ptr, void* object);
int QVideoWidget_SetMediaObjectDefault(void* ptr, void* object);
void QVideoWidget_ActionEvent(void* ptr, void* event);
void QVideoWidget_ActionEventDefault(void* ptr, void* event);
void QVideoWidget_DragEnterEvent(void* ptr, void* event);
void QVideoWidget_DragEnterEventDefault(void* ptr, void* event);
void QVideoWidget_DragLeaveEvent(void* ptr, void* event);
void QVideoWidget_DragLeaveEventDefault(void* ptr, void* event);
void QVideoWidget_DragMoveEvent(void* ptr, void* event);
void QVideoWidget_DragMoveEventDefault(void* ptr, void* event);
void QVideoWidget_DropEvent(void* ptr, void* event);
void QVideoWidget_DropEventDefault(void* ptr, void* event);
void QVideoWidget_EnterEvent(void* ptr, void* event);
void QVideoWidget_EnterEventDefault(void* ptr, void* event);
void QVideoWidget_FocusInEvent(void* ptr, void* event);
void QVideoWidget_FocusInEventDefault(void* ptr, void* event);
void QVideoWidget_FocusOutEvent(void* ptr, void* event);
void QVideoWidget_FocusOutEventDefault(void* ptr, void* event);
void QVideoWidget_LeaveEvent(void* ptr, void* event);
void QVideoWidget_LeaveEventDefault(void* ptr, void* event);
int QVideoWidget_Metric(void* ptr, int m);
int QVideoWidget_MetricDefault(void* ptr, int m);
void* QVideoWidget_MinimumSizeHint(void* ptr);
void* QVideoWidget_MinimumSizeHintDefault(void* ptr);
void* QVideoWidget_PaintEngine(void* ptr);
void* QVideoWidget_PaintEngineDefault(void* ptr);
void QVideoWidget_SetEnabled(void* ptr, int vbo);
void QVideoWidget_SetEnabledDefault(void* ptr, int vbo);
void QVideoWidget_SetStyleSheet(void* ptr, char* styleSheet);
void QVideoWidget_SetStyleSheetDefault(void* ptr, char* styleSheet);
void QVideoWidget_SetVisible(void* ptr, int visible);
void QVideoWidget_SetVisibleDefault(void* ptr, int visible);
void QVideoWidget_SetWindowModified(void* ptr, int vbo);
void QVideoWidget_SetWindowModifiedDefault(void* ptr, int vbo);
void QVideoWidget_SetWindowTitle(void* ptr, char* vqs);
void QVideoWidget_SetWindowTitleDefault(void* ptr, char* vqs);
void QVideoWidget_ChangeEvent(void* ptr, void* event);
void QVideoWidget_ChangeEventDefault(void* ptr, void* event);
int QVideoWidget_Close(void* ptr);
int QVideoWidget_CloseDefault(void* ptr);
void QVideoWidget_CloseEvent(void* ptr, void* event);
void QVideoWidget_CloseEventDefault(void* ptr, void* event);
void QVideoWidget_ContextMenuEvent(void* ptr, void* event);
void QVideoWidget_ContextMenuEventDefault(void* ptr, void* event);
int QVideoWidget_FocusNextPrevChild(void* ptr, int next);
int QVideoWidget_FocusNextPrevChildDefault(void* ptr, int next);
int QVideoWidget_HasHeightForWidth(void* ptr);
int QVideoWidget_HasHeightForWidthDefault(void* ptr);
int QVideoWidget_HeightForWidth(void* ptr, int w);
int QVideoWidget_HeightForWidthDefault(void* ptr, int w);
void QVideoWidget_Hide(void* ptr);
void QVideoWidget_HideDefault(void* ptr);
void QVideoWidget_InitPainter(void* ptr, void* painter);
void QVideoWidget_InitPainterDefault(void* ptr, void* painter);
void QVideoWidget_InputMethodEvent(void* ptr, void* event);
void QVideoWidget_InputMethodEventDefault(void* ptr, void* event);
void* QVideoWidget_InputMethodQuery(void* ptr, int query);
void* QVideoWidget_InputMethodQueryDefault(void* ptr, int query);
void QVideoWidget_KeyPressEvent(void* ptr, void* event);
void QVideoWidget_KeyPressEventDefault(void* ptr, void* event);
void QVideoWidget_KeyReleaseEvent(void* ptr, void* event);
void QVideoWidget_KeyReleaseEventDefault(void* ptr, void* event);
void QVideoWidget_Lower(void* ptr);
void QVideoWidget_LowerDefault(void* ptr);
void QVideoWidget_MouseDoubleClickEvent(void* ptr, void* event);
void QVideoWidget_MouseDoubleClickEventDefault(void* ptr, void* event);
void QVideoWidget_MouseMoveEvent(void* ptr, void* event);
void QVideoWidget_MouseMoveEventDefault(void* ptr, void* event);
void QVideoWidget_MousePressEvent(void* ptr, void* event);
void QVideoWidget_MousePressEventDefault(void* ptr, void* event);
void QVideoWidget_MouseReleaseEvent(void* ptr, void* event);
void QVideoWidget_MouseReleaseEventDefault(void* ptr, void* event);
int QVideoWidget_NativeEvent(void* ptr, char* eventType, void* message, long result);
int QVideoWidget_NativeEventDefault(void* ptr, char* eventType, void* message, long result);
void QVideoWidget_Raise(void* ptr);
void QVideoWidget_RaiseDefault(void* ptr);
void QVideoWidget_Repaint(void* ptr);
void QVideoWidget_RepaintDefault(void* ptr);
void QVideoWidget_SetDisabled(void* ptr, int disable);
void QVideoWidget_SetDisabledDefault(void* ptr, int disable);
void QVideoWidget_SetFocus2(void* ptr);
void QVideoWidget_SetFocus2Default(void* ptr);
void QVideoWidget_SetHidden(void* ptr, int hidden);
void QVideoWidget_SetHiddenDefault(void* ptr, int hidden);
void QVideoWidget_Show(void* ptr);
void QVideoWidget_ShowDefault(void* ptr);
void QVideoWidget_ShowFullScreen(void* ptr);
void QVideoWidget_ShowFullScreenDefault(void* ptr);
void QVideoWidget_ShowMaximized(void* ptr);
void QVideoWidget_ShowMaximizedDefault(void* ptr);
void QVideoWidget_ShowMinimized(void* ptr);
void QVideoWidget_ShowMinimizedDefault(void* ptr);
void QVideoWidget_ShowNormal(void* ptr);
void QVideoWidget_ShowNormalDefault(void* ptr);
void QVideoWidget_TabletEvent(void* ptr, void* event);
void QVideoWidget_TabletEventDefault(void* ptr, void* event);
void QVideoWidget_Update(void* ptr);
void QVideoWidget_UpdateDefault(void* ptr);
void QVideoWidget_UpdateMicroFocus(void* ptr);
void QVideoWidget_UpdateMicroFocusDefault(void* ptr);
void QVideoWidget_WheelEvent(void* ptr, void* event);
void QVideoWidget_WheelEventDefault(void* ptr, void* event);
void QVideoWidget_TimerEvent(void* ptr, void* event);
void QVideoWidget_TimerEventDefault(void* ptr, void* event);
void QVideoWidget_ChildEvent(void* ptr, void* event);
void QVideoWidget_ChildEventDefault(void* ptr, void* event);
void QVideoWidget_ConnectNotify(void* ptr, void* sign);
void QVideoWidget_ConnectNotifyDefault(void* ptr, void* sign);
void QVideoWidget_CustomEvent(void* ptr, void* event);
void QVideoWidget_CustomEventDefault(void* ptr, void* event);
void QVideoWidget_DeleteLater(void* ptr);
void QVideoWidget_DeleteLaterDefault(void* ptr);
void QVideoWidget_DisconnectNotify(void* ptr, void* sign);
void QVideoWidget_DisconnectNotifyDefault(void* ptr, void* sign);
int QVideoWidget_EventFilter(void* ptr, void* watched, void* event);
int QVideoWidget_EventFilterDefault(void* ptr, void* watched, void* event);
void* QVideoWidget_MetaObject(void* ptr);
void* QVideoWidget_MetaObjectDefault(void* ptr);
void* QVideoWidgetControl_NewQVideoWidgetControl(void* parent);
int QVideoWidgetControl_AspectRatioMode(void* ptr);
int QVideoWidgetControl_Brightness(void* ptr);
void QVideoWidgetControl_ConnectBrightnessChanged(void* ptr);
void QVideoWidgetControl_DisconnectBrightnessChanged(void* ptr);
void QVideoWidgetControl_BrightnessChanged(void* ptr, int brightness);
int QVideoWidgetControl_Contrast(void* ptr);
void QVideoWidgetControl_ConnectContrastChanged(void* ptr);
void QVideoWidgetControl_DisconnectContrastChanged(void* ptr);
void QVideoWidgetControl_ContrastChanged(void* ptr, int contrast);
void QVideoWidgetControl_ConnectFullScreenChanged(void* ptr);
void QVideoWidgetControl_DisconnectFullScreenChanged(void* ptr);
void QVideoWidgetControl_FullScreenChanged(void* ptr, int fullScreen);
int QVideoWidgetControl_Hue(void* ptr);
void QVideoWidgetControl_ConnectHueChanged(void* ptr);
void QVideoWidgetControl_DisconnectHueChanged(void* ptr);
void QVideoWidgetControl_HueChanged(void* ptr, int hue);
int QVideoWidgetControl_IsFullScreen(void* ptr);
int QVideoWidgetControl_Saturation(void* ptr);
void QVideoWidgetControl_ConnectSaturationChanged(void* ptr);
void QVideoWidgetControl_DisconnectSaturationChanged(void* ptr);
void QVideoWidgetControl_SaturationChanged(void* ptr, int saturation);
void QVideoWidgetControl_SetAspectRatioMode(void* ptr, int mode);
void QVideoWidgetControl_SetBrightness(void* ptr, int brightness);
void QVideoWidgetControl_SetContrast(void* ptr, int contrast);
void QVideoWidgetControl_SetFullScreen(void* ptr, int fullScreen);
void QVideoWidgetControl_SetHue(void* ptr, int hue);
void QVideoWidgetControl_SetSaturation(void* ptr, int saturation);
void* QVideoWidgetControl_VideoWidget(void* ptr);
void QVideoWidgetControl_DestroyQVideoWidgetControl(void* ptr);
void QVideoWidgetControl_TimerEvent(void* ptr, void* event);
void QVideoWidgetControl_TimerEventDefault(void* ptr, void* event);
void QVideoWidgetControl_ChildEvent(void* ptr, void* event);
void QVideoWidgetControl_ChildEventDefault(void* ptr, void* event);
void QVideoWidgetControl_ConnectNotify(void* ptr, void* sign);
void QVideoWidgetControl_ConnectNotifyDefault(void* ptr, void* sign);
void QVideoWidgetControl_CustomEvent(void* ptr, void* event);
void QVideoWidgetControl_CustomEventDefault(void* ptr, void* event);
void QVideoWidgetControl_DeleteLater(void* ptr);
void QVideoWidgetControl_DeleteLaterDefault(void* ptr);
void QVideoWidgetControl_DisconnectNotify(void* ptr, void* sign);
void QVideoWidgetControl_DisconnectNotifyDefault(void* ptr, void* sign);
int QVideoWidgetControl_Event(void* ptr, void* e);
int QVideoWidgetControl_EventDefault(void* ptr, void* e);
int QVideoWidgetControl_EventFilter(void* ptr, void* watched, void* event);
int QVideoWidgetControl_EventFilterDefault(void* ptr, void* watched, void* event);
void* QVideoWidgetControl_MetaObject(void* ptr);
void* QVideoWidgetControl_MetaObjectDefault(void* ptr);

#ifdef __cplusplus
}
#endif

#endif