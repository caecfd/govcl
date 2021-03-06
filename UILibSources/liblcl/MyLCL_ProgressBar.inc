
//----------------------------------------
// The code is automatically generated by the GenlibLcl tool.
// Copyright © ying32. All Rights Reserved.
// 
// Licensed under Apache License 2.0
//
//----------------------------------------

function ProgressBar_Create(AOwner: TComponent): TProgressBar; extdecl;
begin
  handleExceptionBegin
  Result :=  TProgressBar.Create(AOwner);
  handleExceptionEnd
end;

procedure ProgressBar_Free(AObj: TProgressBar); extdecl;
begin
  handleExceptionBegin
  AObj.Free;
  handleExceptionEnd
end;

procedure ProgressBar_StepIt(AObj: TProgressBar); extdecl;
begin
  handleExceptionBegin
  AObj.StepIt;
  handleExceptionEnd
end;

procedure ProgressBar_StepBy(AObj: TProgressBar; Delta: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.StepBy(Delta);
  handleExceptionEnd
end;

function ProgressBar_CanFocus(AObj: TProgressBar): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.CanFocus;
  handleExceptionEnd
end;

function ProgressBar_ContainsControl(AObj: TProgressBar; Control: TControl): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ContainsControl(Control);
  handleExceptionEnd
end;

function ProgressBar_ControlAtPos(AObj: TProgressBar; var Pos: TPoint; AllowDisabled: LongBool; AllowWinControls: LongBool): TControl; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ControlAtPos(Pos, AllowDisabled, AllowWinControls);
  handleExceptionEnd
end;

procedure ProgressBar_DisableAlign(AObj: TProgressBar); extdecl;
begin
  handleExceptionBegin
  AObj.DisableAlign;
  handleExceptionEnd
end;

procedure ProgressBar_EnableAlign(AObj: TProgressBar); extdecl;
begin
  handleExceptionBegin
  AObj.EnableAlign;
  handleExceptionEnd
end;

function ProgressBar_FindChildControl(AObj: TProgressBar; ControlName: PChar): TControl; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.FindChildControl(ControlName);
  handleExceptionEnd
end;

procedure ProgressBar_FlipChildren(AObj: TProgressBar; AllLevels: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.FlipChildren(AllLevels);
  handleExceptionEnd
end;

function ProgressBar_Focused(AObj: TProgressBar): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Focused;
  handleExceptionEnd
end;

function ProgressBar_HandleAllocated(AObj: TProgressBar): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.HandleAllocated;
  handleExceptionEnd
end;

procedure ProgressBar_InsertControl(AObj: TProgressBar; AControl: TControl); extdecl;
begin
  handleExceptionBegin
  AObj.InsertControl(AControl);
  handleExceptionEnd
end;

procedure ProgressBar_Invalidate(AObj: TProgressBar); extdecl;
begin
  handleExceptionBegin
  AObj.Invalidate;
  handleExceptionEnd
end;

procedure ProgressBar_RemoveControl(AObj: TProgressBar; AControl: TControl); extdecl;
begin
  handleExceptionBegin
  AObj.RemoveControl(AControl);
  handleExceptionEnd
end;

procedure ProgressBar_Realign(AObj: TProgressBar); extdecl;
begin
  handleExceptionBegin
  AObj.Realign;
  handleExceptionEnd
end;

procedure ProgressBar_Repaint(AObj: TProgressBar); extdecl;
begin
  handleExceptionBegin
  AObj.Repaint;
  handleExceptionEnd
end;

procedure ProgressBar_ScaleBy(AObj: TProgressBar; M: Integer; D: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.ScaleBy(M, D);
  handleExceptionEnd
end;

procedure ProgressBar_ScrollBy(AObj: TProgressBar; DeltaX: Integer; DeltaY: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.ScrollBy(DeltaX, DeltaY);
  handleExceptionEnd
end;

procedure ProgressBar_SetBounds(AObj: TProgressBar; ALeft: Integer; ATop: Integer; AWidth: Integer; AHeight: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.SetBounds(ALeft, ATop, AWidth, AHeight);
  handleExceptionEnd
end;

procedure ProgressBar_SetFocus(AObj: TProgressBar); extdecl;
begin
  handleExceptionBegin
  AObj.SetFocus;
  handleExceptionEnd
end;

procedure ProgressBar_Update(AObj: TProgressBar); extdecl;
begin
  handleExceptionBegin
  AObj.Update;
  handleExceptionEnd
end;

procedure ProgressBar_BringToFront(AObj: TProgressBar); extdecl;
begin
  handleExceptionBegin
  AObj.BringToFront;
  handleExceptionEnd
end;

procedure ProgressBar_ClientToScreen(AObj: TProgressBar; var Point: TPoint; var Result: TPoint); extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ClientToScreen(Point);
  handleExceptionEnd
end;

procedure ProgressBar_ClientToParent(AObj: TProgressBar; var Point: TPoint; AParent: TWinControl; var Result: TPoint); extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ClientToParent(Point, AParent);
  handleExceptionEnd
end;

function ProgressBar_Dragging(AObj: TProgressBar): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Dragging;
  handleExceptionEnd
end;

function ProgressBar_HasParent(AObj: TProgressBar): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.HasParent;
  handleExceptionEnd
end;

procedure ProgressBar_Hide(AObj: TProgressBar); extdecl;
begin
  handleExceptionBegin
  AObj.Hide;
  handleExceptionEnd
end;

function ProgressBar_Perform(AObj: TProgressBar; Msg: Cardinal; WParam: NativeUInt; LParam: NativeInt): NativeInt; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Perform(Msg, WParam, LParam);
  handleExceptionEnd
end;

procedure ProgressBar_Refresh(AObj: TProgressBar); extdecl;
begin
  handleExceptionBegin
  AObj.Refresh;
  handleExceptionEnd
end;

procedure ProgressBar_ScreenToClient(AObj: TProgressBar; var Point: TPoint; var Result: TPoint); extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ScreenToClient(Point);
  handleExceptionEnd
end;

procedure ProgressBar_ParentToClient(AObj: TProgressBar; var Point: TPoint; AParent: TWinControl; var Result: TPoint); extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ParentToClient(Point, AParent);
  handleExceptionEnd
end;

procedure ProgressBar_SendToBack(AObj: TProgressBar); extdecl;
begin
  handleExceptionBegin
  AObj.SendToBack;
  handleExceptionEnd
end;

procedure ProgressBar_Show(AObj: TProgressBar); extdecl;
begin
  handleExceptionBegin
  AObj.Show;
  handleExceptionEnd
end;

function ProgressBar_GetTextBuf(AObj: TProgressBar; Buffer: PChar; BufSize: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.GetTextBuf(Buffer, BufSize);
  handleExceptionEnd
end;

function ProgressBar_GetTextLen(AObj: TProgressBar): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  {$ifdef darwin}Length(AObj.Caption){$else}AObj.GetTextLen{$endif};
  handleExceptionEnd
end;

procedure ProgressBar_SetTextBuf(AObj: TProgressBar; Buffer: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.SetTextBuf(Buffer);
  handleExceptionEnd
end;

function ProgressBar_FindComponent(AObj: TProgressBar; AName: PChar): TComponent; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.FindComponent(AName);
  handleExceptionEnd
end;

function ProgressBar_GetNamePath(AObj: TProgressBar): PChar; extdecl;
begin
  handleExceptionBegin
  Result :=  PChar(AObj.GetNamePath);
  handleExceptionEnd
end;

procedure ProgressBar_Assign(AObj: TProgressBar; Source: TPersistent); extdecl;
begin
  handleExceptionBegin
  AObj.Assign(Source);
  handleExceptionEnd
end;

function ProgressBar_ClassType(AObj: TProgressBar): TClass; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ClassType;
  handleExceptionEnd
end;

function ProgressBar_ClassName(AObj: TProgressBar): PChar; extdecl;
begin
  handleExceptionBegin
  Result :=  ToPChar(AObj.ClassName);
  handleExceptionEnd
end;

function ProgressBar_InstanceSize(AObj: TProgressBar): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.InstanceSize;
  handleExceptionEnd
end;

function ProgressBar_InheritsFrom(AObj: TProgressBar; AClass: TClass): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.InheritsFrom(AClass);
  handleExceptionEnd
end;

function ProgressBar_Equals(AObj: TProgressBar; Obj: TObject): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Equals(Obj);
  handleExceptionEnd
end;

function ProgressBar_GetHashCode(AObj: TProgressBar): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.GetHashCode;
  handleExceptionEnd
end;

function ProgressBar_ToString(AObj: TProgressBar): PChar; extdecl;
begin
  handleExceptionBegin
  Result :=  PChar(AObj.ToString);
  handleExceptionEnd
end;

procedure ProgressBar_AnchorToNeighbour(AObj: TProgressBar; ASide: TAnchorKind; ASpace: Integer; ASibling: TControl); extdecl;
begin
  handleExceptionBegin
  AObj.AnchorToNeighbour(ASide, ASpace, ASibling);
  handleExceptionEnd
end;

procedure ProgressBar_AnchorParallel(AObj: TProgressBar; ASide: TAnchorKind; ASpace: Integer; ASibling: TControl); extdecl;
begin
  handleExceptionBegin
  AObj.AnchorParallel(ASide, ASpace, ASibling);
  handleExceptionEnd
end;

procedure ProgressBar_AnchorHorizontalCenterTo(AObj: TProgressBar; ASibling: TControl); extdecl;
begin
  handleExceptionBegin
  AObj.AnchorHorizontalCenterTo(ASibling);
  handleExceptionEnd
end;

procedure ProgressBar_AnchorVerticalCenterTo(AObj: TProgressBar; ASibling: TControl); extdecl;
begin
  handleExceptionBegin
  AObj.AnchorVerticalCenterTo(ASibling);
  handleExceptionEnd
end;

procedure ProgressBar_AnchorAsAlign(AObj: TProgressBar; ATheAlign: TAlign; ASpace: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.AnchorAsAlign(ATheAlign, ASpace);
  handleExceptionEnd
end;

procedure ProgressBar_AnchorClient(AObj: TProgressBar; ASpace: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.AnchorClient(ASpace);
  handleExceptionEnd
end;

function ProgressBar_GetAlign(AObj: TProgressBar): TAlign; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Align;
  handleExceptionEnd
end;

procedure ProgressBar_SetAlign(AObj: TProgressBar; AValue: TAlign); extdecl;
begin
  handleExceptionBegin
  AObj.Align := AValue;
  handleExceptionEnd
end;

function ProgressBar_GetAnchors(AObj: TProgressBar): TAnchors; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Anchors;
  handleExceptionEnd
end;

procedure ProgressBar_SetAnchors(AObj: TProgressBar; AValue: TAnchors); extdecl;
begin
  handleExceptionBegin
  AObj.Anchors := AValue;
  handleExceptionEnd
end;

function ProgressBar_GetBorderWidth(AObj: TProgressBar): TBorderWidth; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.BorderWidth;
  handleExceptionEnd
end;

procedure ProgressBar_SetBorderWidth(AObj: TProgressBar; AValue: TBorderWidth); extdecl;
begin
  handleExceptionBegin
  AObj.BorderWidth := AValue;
  handleExceptionEnd
end;

function ProgressBar_GetDoubleBuffered(AObj: TProgressBar): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.DoubleBuffered;
  handleExceptionEnd
end;

procedure ProgressBar_SetDoubleBuffered(AObj: TProgressBar; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.DoubleBuffered := AValue;
  handleExceptionEnd
end;

function ProgressBar_GetDragCursor(AObj: TProgressBar): TCursor; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.DragCursor;
  handleExceptionEnd
end;

procedure ProgressBar_SetDragCursor(AObj: TProgressBar; AValue: TCursor); extdecl;
begin
  handleExceptionBegin
  AObj.DragCursor := AValue;
  handleExceptionEnd
end;

function ProgressBar_GetDragKind(AObj: TProgressBar): TDragKind; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.DragKind;
  handleExceptionEnd
end;

procedure ProgressBar_SetDragKind(AObj: TProgressBar; AValue: TDragKind); extdecl;
begin
  handleExceptionBegin
  AObj.DragKind := AValue;
  handleExceptionEnd
end;

function ProgressBar_GetDragMode(AObj: TProgressBar): TDragMode; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.DragMode;
  handleExceptionEnd
end;

procedure ProgressBar_SetDragMode(AObj: TProgressBar; AValue: TDragMode); extdecl;
begin
  handleExceptionBegin
  AObj.DragMode := AValue;
  handleExceptionEnd
end;

function ProgressBar_GetEnabled(AObj: TProgressBar): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Enabled;
  handleExceptionEnd
end;

procedure ProgressBar_SetEnabled(AObj: TProgressBar; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.Enabled := AValue;
  handleExceptionEnd
end;

function ProgressBar_GetHint(AObj: TProgressBar): PChar; extdecl;
begin
  handleExceptionBegin
  Result :=  PChar(AObj.Hint);
  handleExceptionEnd
end;

procedure ProgressBar_SetHint(AObj: TProgressBar; AValue: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.Hint := AValue;
  handleExceptionEnd
end;

function ProgressBar_GetConstraints(AObj: TProgressBar): TSizeConstraints; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Constraints;
  handleExceptionEnd
end;

procedure ProgressBar_SetConstraints(AObj: TProgressBar; AValue: TSizeConstraints); extdecl;
begin
  handleExceptionBegin
  AObj.Constraints := AValue;
  handleExceptionEnd
end;

function ProgressBar_GetMin(AObj: TProgressBar): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Min;
  handleExceptionEnd
end;

procedure ProgressBar_SetMin(AObj: TProgressBar; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Min := AValue;
  handleExceptionEnd
end;

function ProgressBar_GetMax(AObj: TProgressBar): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Max;
  handleExceptionEnd
end;

procedure ProgressBar_SetMax(AObj: TProgressBar; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Max := AValue;
  handleExceptionEnd
end;

function ProgressBar_GetOrientation(AObj: TProgressBar): TProgressBarOrientation; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Orientation;
  handleExceptionEnd
end;

procedure ProgressBar_SetOrientation(AObj: TProgressBar; AValue: TProgressBarOrientation); extdecl;
begin
  handleExceptionBegin
  AObj.Orientation := AValue;
  handleExceptionEnd
end;

function ProgressBar_GetParentDoubleBuffered(AObj: TProgressBar): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ParentDoubleBuffered;
  handleExceptionEnd
end;

procedure ProgressBar_SetParentDoubleBuffered(AObj: TProgressBar; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.ParentDoubleBuffered := AValue;
  handleExceptionEnd
end;

function ProgressBar_GetParentShowHint(AObj: TProgressBar): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ParentShowHint;
  handleExceptionEnd
end;

procedure ProgressBar_SetParentShowHint(AObj: TProgressBar; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.ParentShowHint := AValue;
  handleExceptionEnd
end;

function ProgressBar_GetPopupMenu(AObj: TProgressBar): TPopupMenu; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.PopupMenu;
  handleExceptionEnd
end;

procedure ProgressBar_SetPopupMenu(AObj: TProgressBar; AValue: TPopupMenu); extdecl;
begin
  handleExceptionBegin
  AObj.PopupMenu := AValue;
  handleExceptionEnd
end;

function ProgressBar_GetPosition(AObj: TProgressBar): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Position;
  handleExceptionEnd
end;

procedure ProgressBar_SetPosition(AObj: TProgressBar; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Position := AValue;
  handleExceptionEnd
end;

function ProgressBar_GetSmooth(AObj: TProgressBar): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Smooth;
  handleExceptionEnd
end;

procedure ProgressBar_SetSmooth(AObj: TProgressBar; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.Smooth := AValue;
  handleExceptionEnd
end;

function ProgressBar_GetStyle(AObj: TProgressBar): TProgressBarStyle; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Style;
  handleExceptionEnd
end;

procedure ProgressBar_SetStyle(AObj: TProgressBar; AValue: TProgressBarStyle); extdecl;
begin
  handleExceptionBegin
  AObj.Style := AValue;
  handleExceptionEnd
end;

function ProgressBar_GetStep(AObj: TProgressBar): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Step;
  handleExceptionEnd
end;

procedure ProgressBar_SetStep(AObj: TProgressBar; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Step := AValue;
  handleExceptionEnd
end;

function ProgressBar_GetShowHint(AObj: TProgressBar): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ShowHint;
  handleExceptionEnd
end;

procedure ProgressBar_SetShowHint(AObj: TProgressBar; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.ShowHint := AValue;
  handleExceptionEnd
end;

function ProgressBar_GetTabOrder(AObj: TProgressBar): TTabOrder; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.TabOrder;
  handleExceptionEnd
end;

procedure ProgressBar_SetTabOrder(AObj: TProgressBar; AValue: TTabOrder); extdecl;
begin
  handleExceptionBegin
  AObj.TabOrder := AValue;
  handleExceptionEnd
end;

function ProgressBar_GetTabStop(AObj: TProgressBar): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.TabStop;
  handleExceptionEnd
end;

procedure ProgressBar_SetTabStop(AObj: TProgressBar; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.TabStop := AValue;
  handleExceptionEnd
end;

function ProgressBar_GetVisible(AObj: TProgressBar): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Visible;
  handleExceptionEnd
end;

procedure ProgressBar_SetVisible(AObj: TProgressBar; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.Visible := AValue;
  handleExceptionEnd
end;

//EVENT_TYPE:TContextPopupEvent
procedure ProgressBar_SetOnContextPopup(AObj: TProgressBar; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnContextPopup}
  {$DEFINE EventMethodName := OnContextPopup}
  EventMethodCode
end;

//EVENT_TYPE:TDragDropEvent
procedure ProgressBar_SetOnDragDrop(AObj: TProgressBar; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnDragDrop}
  {$DEFINE EventMethodName := OnDragDrop}
  EventMethodCode
end;

//EVENT_TYPE:TDragOverEvent
procedure ProgressBar_SetOnDragOver(AObj: TProgressBar; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnDragOver}
  {$DEFINE EventMethodName := OnDragOver}
  EventMethodCode
end;

//EVENT_TYPE:TEndDragEvent
procedure ProgressBar_SetOnEndDrag(AObj: TProgressBar; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnEndDrag}
  {$DEFINE EventMethodName := OnEndDrag}
  EventMethodCode
end;

//EVENT_TYPE:TNotifyEvent
procedure ProgressBar_SetOnEnter(AObj: TProgressBar; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnEnter}
  {$DEFINE EventMethodName := OnEnter}
  EventMethodCode
end;

//EVENT_TYPE:TNotifyEvent
procedure ProgressBar_SetOnExit(AObj: TProgressBar; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnExit}
  {$DEFINE EventMethodName := OnExit}
  EventMethodCode
end;

//EVENT_TYPE:TMouseEvent
procedure ProgressBar_SetOnMouseDown(AObj: TProgressBar; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnMouseDown}
  {$DEFINE EventMethodName := OnMouseDown}
  EventMethodCode
end;

//EVENT_TYPE:TNotifyEvent
procedure ProgressBar_SetOnMouseEnter(AObj: TProgressBar; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnMouseEnter}
  {$DEFINE EventMethodName := OnMouseEnter}
  EventMethodCode
end;

//EVENT_TYPE:TNotifyEvent
procedure ProgressBar_SetOnMouseLeave(AObj: TProgressBar; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnMouseLeave}
  {$DEFINE EventMethodName := OnMouseLeave}
  EventMethodCode
end;

//EVENT_TYPE:TMouseMoveEvent
procedure ProgressBar_SetOnMouseMove(AObj: TProgressBar; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnMouseMove}
  {$DEFINE EventMethodName := OnMouseMove}
  EventMethodCode
end;

//EVENT_TYPE:TMouseEvent
procedure ProgressBar_SetOnMouseUp(AObj: TProgressBar; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnMouseUp}
  {$DEFINE EventMethodName := OnMouseUp}
  EventMethodCode
end;

function ProgressBar_GetDockClientCount(AObj: TProgressBar): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.DockClientCount;
  handleExceptionEnd
end;

function ProgressBar_GetDockSite(AObj: TProgressBar): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.DockSite;
  handleExceptionEnd
end;

procedure ProgressBar_SetDockSite(AObj: TProgressBar; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.DockSite := AValue;
  handleExceptionEnd
end;

function ProgressBar_GetMouseInClient(AObj: TProgressBar): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.MouseInClient;
  handleExceptionEnd
end;

function ProgressBar_GetVisibleDockClientCount(AObj: TProgressBar): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.VisibleDockClientCount;
  handleExceptionEnd
end;

function ProgressBar_GetBrush(AObj: TProgressBar): TBrush; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Brush;
  handleExceptionEnd
end;

function ProgressBar_GetControlCount(AObj: TProgressBar): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ControlCount;
  handleExceptionEnd
end;

function ProgressBar_GetHandle(AObj: TProgressBar): HWND; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Handle;
  handleExceptionEnd
end;

function ProgressBar_GetParentWindow(AObj: TProgressBar): HWND; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ParentWindow;
  handleExceptionEnd
end;

procedure ProgressBar_SetParentWindow(AObj: TProgressBar; AValue: HWND); extdecl;
begin
  handleExceptionBegin
  AObj.ParentWindow := AValue;
  handleExceptionEnd
end;

function ProgressBar_GetShowing(AObj: TProgressBar): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Showing;
  handleExceptionEnd
end;

function ProgressBar_GetUseDockManager(AObj: TProgressBar): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.UseDockManager;
  handleExceptionEnd
end;

procedure ProgressBar_SetUseDockManager(AObj: TProgressBar; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.UseDockManager := AValue;
  handleExceptionEnd
end;

function ProgressBar_GetAction(AObj: TProgressBar): TBasicAction; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Action;
  handleExceptionEnd
end;

procedure ProgressBar_SetAction(AObj: TProgressBar; AValue: TBasicAction); extdecl;
begin
  handleExceptionBegin
  AObj.Action := AValue;
  handleExceptionEnd
end;

function ProgressBar_GetBiDiMode(AObj: TProgressBar): TBiDiMode; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.BiDiMode;
  handleExceptionEnd
end;

procedure ProgressBar_SetBiDiMode(AObj: TProgressBar; AValue: TBiDiMode); extdecl;
begin
  handleExceptionBegin
  AObj.BiDiMode := AValue;
  handleExceptionEnd
end;

procedure ProgressBar_GetBoundsRect(AObj: TProgressBar; var Result: TRect); extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.BoundsRect;
  handleExceptionEnd
end;

procedure ProgressBar_SetBoundsRect(AObj: TProgressBar; var AValue: TRect); extdecl;
begin
  handleExceptionBegin
  AObj.BoundsRect := AValue;
  handleExceptionEnd
end;

function ProgressBar_GetClientHeight(AObj: TProgressBar): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ClientHeight;
  handleExceptionEnd
end;

procedure ProgressBar_SetClientHeight(AObj: TProgressBar; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.ClientHeight := AValue;
  handleExceptionEnd
end;

procedure ProgressBar_GetClientOrigin(AObj: TProgressBar; var Result: TPoint); extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ClientOrigin;
  handleExceptionEnd
end;

procedure ProgressBar_GetClientRect(AObj: TProgressBar; var Result: TRect); extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ClientRect;
  handleExceptionEnd
end;

function ProgressBar_GetClientWidth(AObj: TProgressBar): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ClientWidth;
  handleExceptionEnd
end;

procedure ProgressBar_SetClientWidth(AObj: TProgressBar; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.ClientWidth := AValue;
  handleExceptionEnd
end;

function ProgressBar_GetControlState(AObj: TProgressBar): TControlState; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ControlState;
  handleExceptionEnd
end;

procedure ProgressBar_SetControlState(AObj: TProgressBar; AValue: TControlState); extdecl;
begin
  handleExceptionBegin
  AObj.ControlState := AValue;
  handleExceptionEnd
end;

function ProgressBar_GetControlStyle(AObj: TProgressBar): TControlStyle; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ControlStyle;
  handleExceptionEnd
end;

procedure ProgressBar_SetControlStyle(AObj: TProgressBar; AValue: TControlStyle); extdecl;
begin
  handleExceptionBegin
  AObj.ControlStyle := AValue;
  handleExceptionEnd
end;

function ProgressBar_GetFloating(AObj: TProgressBar): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Floating;
  handleExceptionEnd
end;

function ProgressBar_GetParent(AObj: TProgressBar): TWinControl; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Parent;
  handleExceptionEnd
end;

procedure ProgressBar_SetParent(AObj: TProgressBar; AValue: TWinControl); extdecl;
begin
  handleExceptionBegin
  AObj.Parent := AValue;
  handleExceptionEnd
end;

function ProgressBar_GetLeft(AObj: TProgressBar): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Left;
  handleExceptionEnd
end;

procedure ProgressBar_SetLeft(AObj: TProgressBar; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Left := AValue;
  handleExceptionEnd
end;

function ProgressBar_GetTop(AObj: TProgressBar): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Top;
  handleExceptionEnd
end;

procedure ProgressBar_SetTop(AObj: TProgressBar; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Top := AValue;
  handleExceptionEnd
end;

function ProgressBar_GetWidth(AObj: TProgressBar): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Width;
  handleExceptionEnd
end;

procedure ProgressBar_SetWidth(AObj: TProgressBar; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Width := AValue;
  handleExceptionEnd
end;

function ProgressBar_GetHeight(AObj: TProgressBar): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Height;
  handleExceptionEnd
end;

procedure ProgressBar_SetHeight(AObj: TProgressBar; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Height := AValue;
  handleExceptionEnd
end;

function ProgressBar_GetCursor(AObj: TProgressBar): TCursor; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Cursor;
  handleExceptionEnd
end;

procedure ProgressBar_SetCursor(AObj: TProgressBar; AValue: TCursor); extdecl;
begin
  handleExceptionBegin
  AObj.Cursor := AValue;
  handleExceptionEnd
end;

function ProgressBar_GetComponentCount(AObj: TProgressBar): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ComponentCount;
  handleExceptionEnd
end;

function ProgressBar_GetComponentIndex(AObj: TProgressBar): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ComponentIndex;
  handleExceptionEnd
end;

procedure ProgressBar_SetComponentIndex(AObj: TProgressBar; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.ComponentIndex := AValue;
  handleExceptionEnd
end;

function ProgressBar_GetOwner(AObj: TProgressBar): TComponent; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Owner;
  handleExceptionEnd
end;

function ProgressBar_GetName(AObj: TProgressBar): PChar; extdecl;
begin
  handleExceptionBegin
  Result :=  PChar(AObj.Name);
  handleExceptionEnd
end;

procedure ProgressBar_SetName(AObj: TProgressBar; AValue: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.Name := AValue;
  handleExceptionEnd
end;

function ProgressBar_GetTag(AObj: TProgressBar): NativeInt; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Tag;
  handleExceptionEnd
end;

procedure ProgressBar_SetTag(AObj: TProgressBar; AValue: NativeInt); extdecl;
begin
  handleExceptionBegin
  AObj.Tag := AValue;
  handleExceptionEnd
end;

function ProgressBar_GetAnchorSideLeft(AObj: TProgressBar): TAnchorSide; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.AnchorSideLeft;
  handleExceptionEnd
end;

procedure ProgressBar_SetAnchorSideLeft(AObj: TProgressBar; AValue: TAnchorSide); extdecl;
begin
  handleExceptionBegin
  AObj.AnchorSideLeft := AValue;
  handleExceptionEnd
end;

function ProgressBar_GetAnchorSideTop(AObj: TProgressBar): TAnchorSide; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.AnchorSideTop;
  handleExceptionEnd
end;

procedure ProgressBar_SetAnchorSideTop(AObj: TProgressBar; AValue: TAnchorSide); extdecl;
begin
  handleExceptionBegin
  AObj.AnchorSideTop := AValue;
  handleExceptionEnd
end;

function ProgressBar_GetAnchorSideRight(AObj: TProgressBar): TAnchorSide; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.AnchorSideRight;
  handleExceptionEnd
end;

procedure ProgressBar_SetAnchorSideRight(AObj: TProgressBar; AValue: TAnchorSide); extdecl;
begin
  handleExceptionBegin
  AObj.AnchorSideRight := AValue;
  handleExceptionEnd
end;

function ProgressBar_GetAnchorSideBottom(AObj: TProgressBar): TAnchorSide; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.AnchorSideBottom;
  handleExceptionEnd
end;

procedure ProgressBar_SetAnchorSideBottom(AObj: TProgressBar; AValue: TAnchorSide); extdecl;
begin
  handleExceptionBegin
  AObj.AnchorSideBottom := AValue;
  handleExceptionEnd
end;

function ProgressBar_GetChildSizing(AObj: TProgressBar): TControlChildSizing; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ChildSizing;
  handleExceptionEnd
end;

procedure ProgressBar_SetChildSizing(AObj: TProgressBar; AValue: TControlChildSizing); extdecl;
begin
  handleExceptionBegin
  AObj.ChildSizing := AValue;
  handleExceptionEnd
end;

function ProgressBar_GetBorderSpacing(AObj: TProgressBar): TControlBorderSpacing; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.BorderSpacing;
  handleExceptionEnd
end;

procedure ProgressBar_SetBorderSpacing(AObj: TProgressBar; AValue: TControlBorderSpacing); extdecl;
begin
  handleExceptionBegin
  AObj.BorderSpacing := AValue;
  handleExceptionEnd
end;

function ProgressBar_GetDockClients(AObj: TProgressBar; Index: Integer): TControl; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.DockClients[Index];
  handleExceptionEnd
end;

function ProgressBar_GetControls(AObj: TProgressBar; Index: Integer): TControl; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Controls[Index];
  handleExceptionEnd
end;

function ProgressBar_GetComponents(AObj: TProgressBar; AIndex: Integer): TComponent; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Components[AIndex];
  handleExceptionEnd
end;

function ProgressBar_GetAnchorSide(AObj: TProgressBar; AKind: TAnchorKind): TAnchorSide; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.AnchorSide[AKind];
  handleExceptionEnd
end;

function ProgressBar_StaticClassType: TClass; extdecl;
begin
  Result := TProgressBar;
end;

exports
  ProgressBar_Create,
  ProgressBar_Free,
  ProgressBar_StepIt,
  ProgressBar_StepBy,
  ProgressBar_CanFocus,
  ProgressBar_ContainsControl,
  ProgressBar_ControlAtPos,
  ProgressBar_DisableAlign,
  ProgressBar_EnableAlign,
  ProgressBar_FindChildControl,
  ProgressBar_FlipChildren,
  ProgressBar_Focused,
  ProgressBar_HandleAllocated,
  ProgressBar_InsertControl,
  ProgressBar_Invalidate,
  ProgressBar_RemoveControl,
  ProgressBar_Realign,
  ProgressBar_Repaint,
  ProgressBar_ScaleBy,
  ProgressBar_ScrollBy,
  ProgressBar_SetBounds,
  ProgressBar_SetFocus,
  ProgressBar_Update,
  ProgressBar_BringToFront,
  ProgressBar_ClientToScreen,
  ProgressBar_ClientToParent,
  ProgressBar_Dragging,
  ProgressBar_HasParent,
  ProgressBar_Hide,
  ProgressBar_Perform,
  ProgressBar_Refresh,
  ProgressBar_ScreenToClient,
  ProgressBar_ParentToClient,
  ProgressBar_SendToBack,
  ProgressBar_Show,
  ProgressBar_GetTextBuf,
  ProgressBar_GetTextLen,
  ProgressBar_SetTextBuf,
  ProgressBar_FindComponent,
  ProgressBar_GetNamePath,
  ProgressBar_Assign,
  ProgressBar_ClassType,
  ProgressBar_ClassName,
  ProgressBar_InstanceSize,
  ProgressBar_InheritsFrom,
  ProgressBar_Equals,
  ProgressBar_GetHashCode,
  ProgressBar_ToString,
  ProgressBar_AnchorToNeighbour,
  ProgressBar_AnchorParallel,
  ProgressBar_AnchorHorizontalCenterTo,
  ProgressBar_AnchorVerticalCenterTo,
  ProgressBar_AnchorAsAlign,
  ProgressBar_AnchorClient,
  ProgressBar_GetAlign,
  ProgressBar_SetAlign,
  ProgressBar_GetAnchors,
  ProgressBar_SetAnchors,
  ProgressBar_GetBorderWidth,
  ProgressBar_SetBorderWidth,
  ProgressBar_GetDoubleBuffered,
  ProgressBar_SetDoubleBuffered,
  ProgressBar_GetDragCursor,
  ProgressBar_SetDragCursor,
  ProgressBar_GetDragKind,
  ProgressBar_SetDragKind,
  ProgressBar_GetDragMode,
  ProgressBar_SetDragMode,
  ProgressBar_GetEnabled,
  ProgressBar_SetEnabled,
  ProgressBar_GetHint,
  ProgressBar_SetHint,
  ProgressBar_GetConstraints,
  ProgressBar_SetConstraints,
  ProgressBar_GetMin,
  ProgressBar_SetMin,
  ProgressBar_GetMax,
  ProgressBar_SetMax,
  ProgressBar_GetOrientation,
  ProgressBar_SetOrientation,
  ProgressBar_GetParentDoubleBuffered,
  ProgressBar_SetParentDoubleBuffered,
  ProgressBar_GetParentShowHint,
  ProgressBar_SetParentShowHint,
  ProgressBar_GetPopupMenu,
  ProgressBar_SetPopupMenu,
  ProgressBar_GetPosition,
  ProgressBar_SetPosition,
  ProgressBar_GetSmooth,
  ProgressBar_SetSmooth,
  ProgressBar_GetStyle,
  ProgressBar_SetStyle,
  ProgressBar_GetStep,
  ProgressBar_SetStep,
  ProgressBar_GetShowHint,
  ProgressBar_SetShowHint,
  ProgressBar_GetTabOrder,
  ProgressBar_SetTabOrder,
  ProgressBar_GetTabStop,
  ProgressBar_SetTabStop,
  ProgressBar_GetVisible,
  ProgressBar_SetVisible,
  ProgressBar_SetOnContextPopup,
  ProgressBar_SetOnDragDrop,
  ProgressBar_SetOnDragOver,
  ProgressBar_SetOnEndDrag,
  ProgressBar_SetOnEnter,
  ProgressBar_SetOnExit,
  ProgressBar_SetOnMouseDown,
  ProgressBar_SetOnMouseEnter,
  ProgressBar_SetOnMouseLeave,
  ProgressBar_SetOnMouseMove,
  ProgressBar_SetOnMouseUp,
  ProgressBar_GetDockClientCount,
  ProgressBar_GetDockSite,
  ProgressBar_SetDockSite,
  ProgressBar_GetMouseInClient,
  ProgressBar_GetVisibleDockClientCount,
  ProgressBar_GetBrush,
  ProgressBar_GetControlCount,
  ProgressBar_GetHandle,
  ProgressBar_GetParentWindow,
  ProgressBar_SetParentWindow,
  ProgressBar_GetShowing,
  ProgressBar_GetUseDockManager,
  ProgressBar_SetUseDockManager,
  ProgressBar_GetAction,
  ProgressBar_SetAction,
  ProgressBar_GetBiDiMode,
  ProgressBar_SetBiDiMode,
  ProgressBar_GetBoundsRect,
  ProgressBar_SetBoundsRect,
  ProgressBar_GetClientHeight,
  ProgressBar_SetClientHeight,
  ProgressBar_GetClientOrigin,
  ProgressBar_GetClientRect,
  ProgressBar_GetClientWidth,
  ProgressBar_SetClientWidth,
  ProgressBar_GetControlState,
  ProgressBar_SetControlState,
  ProgressBar_GetControlStyle,
  ProgressBar_SetControlStyle,
  ProgressBar_GetFloating,
  ProgressBar_GetParent,
  ProgressBar_SetParent,
  ProgressBar_GetLeft,
  ProgressBar_SetLeft,
  ProgressBar_GetTop,
  ProgressBar_SetTop,
  ProgressBar_GetWidth,
  ProgressBar_SetWidth,
  ProgressBar_GetHeight,
  ProgressBar_SetHeight,
  ProgressBar_GetCursor,
  ProgressBar_SetCursor,
  ProgressBar_GetComponentCount,
  ProgressBar_GetComponentIndex,
  ProgressBar_SetComponentIndex,
  ProgressBar_GetOwner,
  ProgressBar_GetName,
  ProgressBar_SetName,
  ProgressBar_GetTag,
  ProgressBar_SetTag,
  ProgressBar_GetAnchorSideLeft,
  ProgressBar_SetAnchorSideLeft,
  ProgressBar_GetAnchorSideTop,
  ProgressBar_SetAnchorSideTop,
  ProgressBar_GetAnchorSideRight,
  ProgressBar_SetAnchorSideRight,
  ProgressBar_GetAnchorSideBottom,
  ProgressBar_SetAnchorSideBottom,
  ProgressBar_GetChildSizing,
  ProgressBar_SetChildSizing,
  ProgressBar_GetBorderSpacing,
  ProgressBar_SetBorderSpacing,
  ProgressBar_GetDockClients,
  ProgressBar_GetControls,
  ProgressBar_GetComponents,
  ProgressBar_GetAnchorSide,
  ProgressBar_StaticClassType;

