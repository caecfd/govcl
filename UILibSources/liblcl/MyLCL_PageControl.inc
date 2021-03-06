
//----------------------------------------
// The code is automatically generated by the GenlibLcl tool.
// Copyright © ying32. All Rights Reserved.
// 
// Licensed under Apache License 2.0
//
//----------------------------------------

function PageControl_Create(AOwner: TComponent): TPageControl; extdecl;
begin
  handleExceptionBegin
  Result :=  TPageControl.Create(AOwner);
  handleExceptionEnd
end;

procedure PageControl_Free(AObj: TPageControl); extdecl;
begin
  handleExceptionBegin
  AObj.Free;
  handleExceptionEnd
end;

procedure PageControl_SelectNextPage(AObj: TPageControl; GoForward: LongBool; CheckTabVisible: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.SelectNextPage(GoForward, CheckTabVisible);
  handleExceptionEnd
end;

procedure PageControl_TabRect(AObj: TPageControl; Index: Integer; var Result: TRect); extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.TabRect(Index);
  handleExceptionEnd
end;

function PageControl_CanFocus(AObj: TPageControl): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.CanFocus;
  handleExceptionEnd
end;

function PageControl_ContainsControl(AObj: TPageControl; Control: TControl): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ContainsControl(Control);
  handleExceptionEnd
end;

function PageControl_ControlAtPos(AObj: TPageControl; var Pos: TPoint; AllowDisabled: LongBool; AllowWinControls: LongBool): TControl; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ControlAtPos(Pos, AllowDisabled, AllowWinControls);
  handleExceptionEnd
end;

procedure PageControl_DisableAlign(AObj: TPageControl); extdecl;
begin
  handleExceptionBegin
  AObj.DisableAlign;
  handleExceptionEnd
end;

procedure PageControl_EnableAlign(AObj: TPageControl); extdecl;
begin
  handleExceptionBegin
  AObj.EnableAlign;
  handleExceptionEnd
end;

function PageControl_FindChildControl(AObj: TPageControl; ControlName: PChar): TControl; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.FindChildControl(ControlName);
  handleExceptionEnd
end;

procedure PageControl_FlipChildren(AObj: TPageControl; AllLevels: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.FlipChildren(AllLevels);
  handleExceptionEnd
end;

function PageControl_Focused(AObj: TPageControl): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Focused;
  handleExceptionEnd
end;

function PageControl_HandleAllocated(AObj: TPageControl): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.HandleAllocated;
  handleExceptionEnd
end;

procedure PageControl_InsertControl(AObj: TPageControl; AControl: TControl); extdecl;
begin
  handleExceptionBegin
  AObj.InsertControl(AControl);
  handleExceptionEnd
end;

procedure PageControl_Invalidate(AObj: TPageControl); extdecl;
begin
  handleExceptionBegin
  AObj.Invalidate;
  handleExceptionEnd
end;

procedure PageControl_RemoveControl(AObj: TPageControl; AControl: TControl); extdecl;
begin
  handleExceptionBegin
  AObj.RemoveControl(AControl);
  handleExceptionEnd
end;

procedure PageControl_Realign(AObj: TPageControl); extdecl;
begin
  handleExceptionBegin
  AObj.Realign;
  handleExceptionEnd
end;

procedure PageControl_Repaint(AObj: TPageControl); extdecl;
begin
  handleExceptionBegin
  AObj.Repaint;
  handleExceptionEnd
end;

procedure PageControl_ScaleBy(AObj: TPageControl; M: Integer; D: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.ScaleBy(M, D);
  handleExceptionEnd
end;

procedure PageControl_ScrollBy(AObj: TPageControl; DeltaX: Integer; DeltaY: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.ScrollBy(DeltaX, DeltaY);
  handleExceptionEnd
end;

procedure PageControl_SetBounds(AObj: TPageControl; ALeft: Integer; ATop: Integer; AWidth: Integer; AHeight: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.SetBounds(ALeft, ATop, AWidth, AHeight);
  handleExceptionEnd
end;

procedure PageControl_SetFocus(AObj: TPageControl); extdecl;
begin
  handleExceptionBegin
  AObj.SetFocus;
  handleExceptionEnd
end;

procedure PageControl_Update(AObj: TPageControl); extdecl;
begin
  handleExceptionBegin
  AObj.Update;
  handleExceptionEnd
end;

procedure PageControl_BringToFront(AObj: TPageControl); extdecl;
begin
  handleExceptionBegin
  AObj.BringToFront;
  handleExceptionEnd
end;

procedure PageControl_ClientToScreen(AObj: TPageControl; var Point: TPoint; var Result: TPoint); extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ClientToScreen(Point);
  handleExceptionEnd
end;

procedure PageControl_ClientToParent(AObj: TPageControl; var Point: TPoint; AParent: TWinControl; var Result: TPoint); extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ClientToParent(Point, AParent);
  handleExceptionEnd
end;

function PageControl_Dragging(AObj: TPageControl): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Dragging;
  handleExceptionEnd
end;

function PageControl_HasParent(AObj: TPageControl): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.HasParent;
  handleExceptionEnd
end;

procedure PageControl_Hide(AObj: TPageControl); extdecl;
begin
  handleExceptionBegin
  AObj.Hide;
  handleExceptionEnd
end;

function PageControl_Perform(AObj: TPageControl; Msg: Cardinal; WParam: NativeUInt; LParam: NativeInt): NativeInt; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Perform(Msg, WParam, LParam);
  handleExceptionEnd
end;

procedure PageControl_Refresh(AObj: TPageControl); extdecl;
begin
  handleExceptionBegin
  AObj.Refresh;
  handleExceptionEnd
end;

procedure PageControl_ScreenToClient(AObj: TPageControl; var Point: TPoint; var Result: TPoint); extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ScreenToClient(Point);
  handleExceptionEnd
end;

procedure PageControl_ParentToClient(AObj: TPageControl; var Point: TPoint; AParent: TWinControl; var Result: TPoint); extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ParentToClient(Point, AParent);
  handleExceptionEnd
end;

procedure PageControl_SendToBack(AObj: TPageControl); extdecl;
begin
  handleExceptionBegin
  AObj.SendToBack;
  handleExceptionEnd
end;

procedure PageControl_Show(AObj: TPageControl); extdecl;
begin
  handleExceptionBegin
  AObj.Show;
  handleExceptionEnd
end;

function PageControl_GetTextBuf(AObj: TPageControl; Buffer: PChar; BufSize: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.GetTextBuf(Buffer, BufSize);
  handleExceptionEnd
end;

function PageControl_GetTextLen(AObj: TPageControl): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  {$ifdef darwin}Length(AObj.Caption){$else}AObj.GetTextLen{$endif};
  handleExceptionEnd
end;

procedure PageControl_SetTextBuf(AObj: TPageControl; Buffer: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.SetTextBuf(Buffer);
  handleExceptionEnd
end;

function PageControl_FindComponent(AObj: TPageControl; AName: PChar): TComponent; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.FindComponent(AName);
  handleExceptionEnd
end;

function PageControl_GetNamePath(AObj: TPageControl): PChar; extdecl;
begin
  handleExceptionBegin
  Result :=  PChar(AObj.GetNamePath);
  handleExceptionEnd
end;

procedure PageControl_Assign(AObj: TPageControl; Source: TPersistent); extdecl;
begin
  handleExceptionBegin
  AObj.Assign(Source);
  handleExceptionEnd
end;

function PageControl_ClassType(AObj: TPageControl): TClass; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ClassType;
  handleExceptionEnd
end;

function PageControl_ClassName(AObj: TPageControl): PChar; extdecl;
begin
  handleExceptionBegin
  Result :=  ToPChar(AObj.ClassName);
  handleExceptionEnd
end;

function PageControl_InstanceSize(AObj: TPageControl): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.InstanceSize;
  handleExceptionEnd
end;

function PageControl_InheritsFrom(AObj: TPageControl; AClass: TClass): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.InheritsFrom(AClass);
  handleExceptionEnd
end;

function PageControl_Equals(AObj: TPageControl; Obj: TObject): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Equals(Obj);
  handleExceptionEnd
end;

function PageControl_GetHashCode(AObj: TPageControl): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.GetHashCode;
  handleExceptionEnd
end;

function PageControl_ToString(AObj: TPageControl): PChar; extdecl;
begin
  handleExceptionBegin
  Result :=  PChar(AObj.ToString);
  handleExceptionEnd
end;

procedure PageControl_AnchorToNeighbour(AObj: TPageControl; ASide: TAnchorKind; ASpace: Integer; ASibling: TControl); extdecl;
begin
  handleExceptionBegin
  AObj.AnchorToNeighbour(ASide, ASpace, ASibling);
  handleExceptionEnd
end;

procedure PageControl_AnchorParallel(AObj: TPageControl; ASide: TAnchorKind; ASpace: Integer; ASibling: TControl); extdecl;
begin
  handleExceptionBegin
  AObj.AnchorParallel(ASide, ASpace, ASibling);
  handleExceptionEnd
end;

procedure PageControl_AnchorHorizontalCenterTo(AObj: TPageControl; ASibling: TControl); extdecl;
begin
  handleExceptionBegin
  AObj.AnchorHorizontalCenterTo(ASibling);
  handleExceptionEnd
end;

procedure PageControl_AnchorVerticalCenterTo(AObj: TPageControl; ASibling: TControl); extdecl;
begin
  handleExceptionBegin
  AObj.AnchorVerticalCenterTo(ASibling);
  handleExceptionEnd
end;

procedure PageControl_AnchorAsAlign(AObj: TPageControl; ATheAlign: TAlign; ASpace: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.AnchorAsAlign(ATheAlign, ASpace);
  handleExceptionEnd
end;

procedure PageControl_AnchorClient(AObj: TPageControl; ASpace: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.AnchorClient(ASpace);
  handleExceptionEnd
end;

function PageControl_GetOptions(AObj: TPageControl): TCTabControlOptions; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Options;
  handleExceptionEnd
end;

procedure PageControl_SetOptions(AObj: TPageControl; AValue: TCTabControlOptions); extdecl;
begin
  handleExceptionBegin
  AObj.Options := AValue;
  handleExceptionEnd
end;

function PageControl_GetActivePageIndex(AObj: TPageControl): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ActivePageIndex;
  handleExceptionEnd
end;

procedure PageControl_SetActivePageIndex(AObj: TPageControl; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.ActivePageIndex := AValue;
  handleExceptionEnd
end;

function PageControl_GetPageCount(AObj: TPageControl): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.PageCount;
  handleExceptionEnd
end;

function PageControl_GetAlign(AObj: TPageControl): TAlign; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Align;
  handleExceptionEnd
end;

procedure PageControl_SetAlign(AObj: TPageControl; AValue: TAlign); extdecl;
begin
  handleExceptionBegin
  AObj.Align := AValue;
  handleExceptionEnd
end;

function PageControl_GetAnchors(AObj: TPageControl): TAnchors; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Anchors;
  handleExceptionEnd
end;

procedure PageControl_SetAnchors(AObj: TPageControl; AValue: TAnchors); extdecl;
begin
  handleExceptionBegin
  AObj.Anchors := AValue;
  handleExceptionEnd
end;

function PageControl_GetBiDiMode(AObj: TPageControl): TBiDiMode; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.BiDiMode;
  handleExceptionEnd
end;

procedure PageControl_SetBiDiMode(AObj: TPageControl; AValue: TBiDiMode); extdecl;
begin
  handleExceptionBegin
  AObj.BiDiMode := AValue;
  handleExceptionEnd
end;

function PageControl_GetConstraints(AObj: TPageControl): TSizeConstraints; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Constraints;
  handleExceptionEnd
end;

procedure PageControl_SetConstraints(AObj: TPageControl; AValue: TSizeConstraints); extdecl;
begin
  handleExceptionBegin
  AObj.Constraints := AValue;
  handleExceptionEnd
end;

function PageControl_GetDockSite(AObj: TPageControl): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.DockSite;
  handleExceptionEnd
end;

procedure PageControl_SetDockSite(AObj: TPageControl; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.DockSite := AValue;
  handleExceptionEnd
end;

function PageControl_GetDoubleBuffered(AObj: TPageControl): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.DoubleBuffered;
  handleExceptionEnd
end;

procedure PageControl_SetDoubleBuffered(AObj: TPageControl; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.DoubleBuffered := AValue;
  handleExceptionEnd
end;

function PageControl_GetDragCursor(AObj: TPageControl): TCursor; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.DragCursor;
  handleExceptionEnd
end;

procedure PageControl_SetDragCursor(AObj: TPageControl; AValue: TCursor); extdecl;
begin
  handleExceptionBegin
  AObj.DragCursor := AValue;
  handleExceptionEnd
end;

function PageControl_GetDragKind(AObj: TPageControl): TDragKind; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.DragKind;
  handleExceptionEnd
end;

procedure PageControl_SetDragKind(AObj: TPageControl; AValue: TDragKind); extdecl;
begin
  handleExceptionBegin
  AObj.DragKind := AValue;
  handleExceptionEnd
end;

function PageControl_GetDragMode(AObj: TPageControl): TDragMode; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.DragMode;
  handleExceptionEnd
end;

procedure PageControl_SetDragMode(AObj: TPageControl; AValue: TDragMode); extdecl;
begin
  handleExceptionBegin
  AObj.DragMode := AValue;
  handleExceptionEnd
end;

function PageControl_GetEnabled(AObj: TPageControl): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Enabled;
  handleExceptionEnd
end;

procedure PageControl_SetEnabled(AObj: TPageControl; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.Enabled := AValue;
  handleExceptionEnd
end;

function PageControl_GetFont(AObj: TPageControl): TFont; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Font;
  handleExceptionEnd
end;

procedure PageControl_SetFont(AObj: TPageControl; AValue: TFont); extdecl;
begin
  handleExceptionBegin
  AObj.Font := AValue;
  handleExceptionEnd
end;

function PageControl_GetImages(AObj: TPageControl): TCustomImageList; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Images;
  handleExceptionEnd
end;

procedure PageControl_SetImages(AObj: TPageControl; AValue: TCustomImageList); extdecl;
begin
  handleExceptionBegin
  AObj.Images := AValue;
  handleExceptionEnd
end;

function PageControl_GetMultiLine(AObj: TPageControl): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.MultiLine;
  handleExceptionEnd
end;

procedure PageControl_SetMultiLine(AObj: TPageControl; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.MultiLine := AValue;
  handleExceptionEnd
end;

function PageControl_GetParentDoubleBuffered(AObj: TPageControl): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ParentDoubleBuffered;
  handleExceptionEnd
end;

procedure PageControl_SetParentDoubleBuffered(AObj: TPageControl; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.ParentDoubleBuffered := AValue;
  handleExceptionEnd
end;

function PageControl_GetParentFont(AObj: TPageControl): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ParentFont;
  handleExceptionEnd
end;

procedure PageControl_SetParentFont(AObj: TPageControl; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.ParentFont := AValue;
  handleExceptionEnd
end;

function PageControl_GetParentShowHint(AObj: TPageControl): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ParentShowHint;
  handleExceptionEnd
end;

procedure PageControl_SetParentShowHint(AObj: TPageControl; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.ParentShowHint := AValue;
  handleExceptionEnd
end;

function PageControl_GetPopupMenu(AObj: TPageControl): TPopupMenu; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.PopupMenu;
  handleExceptionEnd
end;

procedure PageControl_SetPopupMenu(AObj: TPageControl; AValue: TPopupMenu); extdecl;
begin
  handleExceptionBegin
  AObj.PopupMenu := AValue;
  handleExceptionEnd
end;

function PageControl_GetShowHint(AObj: TPageControl): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ShowHint;
  handleExceptionEnd
end;

procedure PageControl_SetShowHint(AObj: TPageControl; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.ShowHint := AValue;
  handleExceptionEnd
end;

function PageControl_GetTabHeight(AObj: TPageControl): SmallInt; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.TabHeight;
  handleExceptionEnd
end;

procedure PageControl_SetTabHeight(AObj: TPageControl; AValue: SmallInt); extdecl;
begin
  handleExceptionBegin
  AObj.TabHeight := AValue;
  handleExceptionEnd
end;

function PageControl_GetTabIndex(AObj: TPageControl): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.TabIndex;
  handleExceptionEnd
end;

procedure PageControl_SetTabIndex(AObj: TPageControl; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.TabIndex := AValue;
  handleExceptionEnd
end;

function PageControl_GetTabOrder(AObj: TPageControl): TTabOrder; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.TabOrder;
  handleExceptionEnd
end;

procedure PageControl_SetTabOrder(AObj: TPageControl; AValue: TTabOrder); extdecl;
begin
  handleExceptionBegin
  AObj.TabOrder := AValue;
  handleExceptionEnd
end;

function PageControl_GetTabPosition(AObj: TPageControl): TTabPosition; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.TabPosition;
  handleExceptionEnd
end;

procedure PageControl_SetTabPosition(AObj: TPageControl; AValue: TTabPosition); extdecl;
begin
  handleExceptionBegin
  AObj.TabPosition := AValue;
  handleExceptionEnd
end;

function PageControl_GetTabStop(AObj: TPageControl): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.TabStop;
  handleExceptionEnd
end;

procedure PageControl_SetTabStop(AObj: TPageControl; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.TabStop := AValue;
  handleExceptionEnd
end;

function PageControl_GetTabWidth(AObj: TPageControl): SmallInt; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.TabWidth;
  handleExceptionEnd
end;

procedure PageControl_SetTabWidth(AObj: TPageControl; AValue: SmallInt); extdecl;
begin
  handleExceptionBegin
  AObj.TabWidth := AValue;
  handleExceptionEnd
end;

function PageControl_GetVisible(AObj: TPageControl): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Visible;
  handleExceptionEnd
end;

procedure PageControl_SetVisible(AObj: TPageControl; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.Visible := AValue;
  handleExceptionEnd
end;

//EVENT_TYPE:TNotifyEvent
procedure PageControl_SetOnChange(AObj: TPageControl; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnChange}
  {$DEFINE EventMethodName := OnChange}
  EventMethodCode
end;

//EVENT_TYPE:TTabChangingEvent
procedure PageControl_SetOnChanging(AObj: TPageControl; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnChanging}
  {$DEFINE EventMethodName := PageControlOnChanging}
  EventMethodCode
end;

//EVENT_TYPE:TContextPopupEvent
procedure PageControl_SetOnContextPopup(AObj: TPageControl; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnContextPopup}
  {$DEFINE EventMethodName := OnContextPopup}
  EventMethodCode
end;

//EVENT_TYPE:TDockDropEvent
procedure PageControl_SetOnDockDrop(AObj: TPageControl; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnDockDrop}
  {$DEFINE EventMethodName := OnDockDrop}
  EventMethodCode
end;

//EVENT_TYPE:TDragDropEvent
procedure PageControl_SetOnDragDrop(AObj: TPageControl; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnDragDrop}
  {$DEFINE EventMethodName := OnDragDrop}
  EventMethodCode
end;

//EVENT_TYPE:TDragOverEvent
procedure PageControl_SetOnDragOver(AObj: TPageControl; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnDragOver}
  {$DEFINE EventMethodName := OnDragOver}
  EventMethodCode
end;

//EVENT_TYPE:TEndDragEvent
procedure PageControl_SetOnEndDock(AObj: TPageControl; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnEndDock}
  {$DEFINE EventMethodName := OnEndDock}
  EventMethodCode
end;

//EVENT_TYPE:TEndDragEvent
procedure PageControl_SetOnEndDrag(AObj: TPageControl; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnEndDrag}
  {$DEFINE EventMethodName := OnEndDrag}
  EventMethodCode
end;

//EVENT_TYPE:TNotifyEvent
procedure PageControl_SetOnEnter(AObj: TPageControl; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnEnter}
  {$DEFINE EventMethodName := OnEnter}
  EventMethodCode
end;

//EVENT_TYPE:TNotifyEvent
procedure PageControl_SetOnExit(AObj: TPageControl; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnExit}
  {$DEFINE EventMethodName := OnExit}
  EventMethodCode
end;

//EVENT_TYPE:TGetSiteInfoEvent
procedure PageControl_SetOnGetSiteInfo(AObj: TPageControl; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnGetSiteInfo}
  {$DEFINE EventMethodName := OnGetSiteInfo}
  EventMethodCode
end;

//EVENT_TYPE:TMouseEvent
procedure PageControl_SetOnMouseDown(AObj: TPageControl; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnMouseDown}
  {$DEFINE EventMethodName := OnMouseDown}
  EventMethodCode
end;

//EVENT_TYPE:TNotifyEvent
procedure PageControl_SetOnMouseEnter(AObj: TPageControl; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnMouseEnter}
  {$DEFINE EventMethodName := OnMouseEnter}
  EventMethodCode
end;

//EVENT_TYPE:TNotifyEvent
procedure PageControl_SetOnMouseLeave(AObj: TPageControl; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnMouseLeave}
  {$DEFINE EventMethodName := OnMouseLeave}
  EventMethodCode
end;

//EVENT_TYPE:TMouseMoveEvent
procedure PageControl_SetOnMouseMove(AObj: TPageControl; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnMouseMove}
  {$DEFINE EventMethodName := OnMouseMove}
  EventMethodCode
end;

//EVENT_TYPE:TMouseEvent
procedure PageControl_SetOnMouseUp(AObj: TPageControl; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnMouseUp}
  {$DEFINE EventMethodName := OnMouseUp}
  EventMethodCode
end;

//EVENT_TYPE:TNotifyEvent
procedure PageControl_SetOnResize(AObj: TPageControl; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnResize}
  {$DEFINE EventMethodName := OnResize}
  EventMethodCode
end;

//EVENT_TYPE:TStartDockEvent
procedure PageControl_SetOnStartDock(AObj: TPageControl; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnStartDock}
  {$DEFINE EventMethodName := OnStartDock}
  EventMethodCode
end;

//EVENT_TYPE:TUnDockEvent
procedure PageControl_SetOnUnDock(AObj: TPageControl; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnUnDock}
  {$DEFINE EventMethodName := OnUnDock}
  EventMethodCode
end;

function PageControl_GetDockClientCount(AObj: TPageControl): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.DockClientCount;
  handleExceptionEnd
end;

function PageControl_GetMouseInClient(AObj: TPageControl): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.MouseInClient;
  handleExceptionEnd
end;

function PageControl_GetVisibleDockClientCount(AObj: TPageControl): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.VisibleDockClientCount;
  handleExceptionEnd
end;

function PageControl_GetBrush(AObj: TPageControl): TBrush; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Brush;
  handleExceptionEnd
end;

function PageControl_GetControlCount(AObj: TPageControl): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ControlCount;
  handleExceptionEnd
end;

function PageControl_GetHandle(AObj: TPageControl): HWND; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Handle;
  handleExceptionEnd
end;

function PageControl_GetParentWindow(AObj: TPageControl): HWND; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ParentWindow;
  handleExceptionEnd
end;

procedure PageControl_SetParentWindow(AObj: TPageControl; AValue: HWND); extdecl;
begin
  handleExceptionBegin
  AObj.ParentWindow := AValue;
  handleExceptionEnd
end;

function PageControl_GetShowing(AObj: TPageControl): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Showing;
  handleExceptionEnd
end;

function PageControl_GetUseDockManager(AObj: TPageControl): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.UseDockManager;
  handleExceptionEnd
end;

procedure PageControl_SetUseDockManager(AObj: TPageControl; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.UseDockManager := AValue;
  handleExceptionEnd
end;

function PageControl_GetAction(AObj: TPageControl): TBasicAction; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Action;
  handleExceptionEnd
end;

procedure PageControl_SetAction(AObj: TPageControl; AValue: TBasicAction); extdecl;
begin
  handleExceptionBegin
  AObj.Action := AValue;
  handleExceptionEnd
end;

procedure PageControl_GetBoundsRect(AObj: TPageControl; var Result: TRect); extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.BoundsRect;
  handleExceptionEnd
end;

procedure PageControl_SetBoundsRect(AObj: TPageControl; var AValue: TRect); extdecl;
begin
  handleExceptionBegin
  AObj.BoundsRect := AValue;
  handleExceptionEnd
end;

function PageControl_GetClientHeight(AObj: TPageControl): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ClientHeight;
  handleExceptionEnd
end;

procedure PageControl_SetClientHeight(AObj: TPageControl; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.ClientHeight := AValue;
  handleExceptionEnd
end;

procedure PageControl_GetClientOrigin(AObj: TPageControl; var Result: TPoint); extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ClientOrigin;
  handleExceptionEnd
end;

procedure PageControl_GetClientRect(AObj: TPageControl; var Result: TRect); extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ClientRect;
  handleExceptionEnd
end;

function PageControl_GetClientWidth(AObj: TPageControl): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ClientWidth;
  handleExceptionEnd
end;

procedure PageControl_SetClientWidth(AObj: TPageControl; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.ClientWidth := AValue;
  handleExceptionEnd
end;

function PageControl_GetControlState(AObj: TPageControl): TControlState; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ControlState;
  handleExceptionEnd
end;

procedure PageControl_SetControlState(AObj: TPageControl; AValue: TControlState); extdecl;
begin
  handleExceptionBegin
  AObj.ControlState := AValue;
  handleExceptionEnd
end;

function PageControl_GetControlStyle(AObj: TPageControl): TControlStyle; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ControlStyle;
  handleExceptionEnd
end;

procedure PageControl_SetControlStyle(AObj: TPageControl; AValue: TControlStyle); extdecl;
begin
  handleExceptionBegin
  AObj.ControlStyle := AValue;
  handleExceptionEnd
end;

function PageControl_GetFloating(AObj: TPageControl): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Floating;
  handleExceptionEnd
end;

function PageControl_GetParent(AObj: TPageControl): TWinControl; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Parent;
  handleExceptionEnd
end;

procedure PageControl_SetParent(AObj: TPageControl; AValue: TWinControl); extdecl;
begin
  handleExceptionBegin
  AObj.Parent := AValue;
  handleExceptionEnd
end;

function PageControl_GetLeft(AObj: TPageControl): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Left;
  handleExceptionEnd
end;

procedure PageControl_SetLeft(AObj: TPageControl; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Left := AValue;
  handleExceptionEnd
end;

function PageControl_GetTop(AObj: TPageControl): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Top;
  handleExceptionEnd
end;

procedure PageControl_SetTop(AObj: TPageControl; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Top := AValue;
  handleExceptionEnd
end;

function PageControl_GetWidth(AObj: TPageControl): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Width;
  handleExceptionEnd
end;

procedure PageControl_SetWidth(AObj: TPageControl; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Width := AValue;
  handleExceptionEnd
end;

function PageControl_GetHeight(AObj: TPageControl): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Height;
  handleExceptionEnd
end;

procedure PageControl_SetHeight(AObj: TPageControl; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Height := AValue;
  handleExceptionEnd
end;

function PageControl_GetCursor(AObj: TPageControl): TCursor; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Cursor;
  handleExceptionEnd
end;

procedure PageControl_SetCursor(AObj: TPageControl; AValue: TCursor); extdecl;
begin
  handleExceptionBegin
  AObj.Cursor := AValue;
  handleExceptionEnd
end;

function PageControl_GetHint(AObj: TPageControl): PChar; extdecl;
begin
  handleExceptionBegin
  Result :=  PChar(AObj.Hint);
  handleExceptionEnd
end;

procedure PageControl_SetHint(AObj: TPageControl; AValue: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.Hint := AValue;
  handleExceptionEnd
end;

function PageControl_GetComponentCount(AObj: TPageControl): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ComponentCount;
  handleExceptionEnd
end;

function PageControl_GetComponentIndex(AObj: TPageControl): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ComponentIndex;
  handleExceptionEnd
end;

procedure PageControl_SetComponentIndex(AObj: TPageControl; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.ComponentIndex := AValue;
  handleExceptionEnd
end;

function PageControl_GetOwner(AObj: TPageControl): TComponent; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Owner;
  handleExceptionEnd
end;

function PageControl_GetName(AObj: TPageControl): PChar; extdecl;
begin
  handleExceptionBegin
  Result :=  PChar(AObj.Name);
  handleExceptionEnd
end;

procedure PageControl_SetName(AObj: TPageControl; AValue: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.Name := AValue;
  handleExceptionEnd
end;

function PageControl_GetTag(AObj: TPageControl): NativeInt; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Tag;
  handleExceptionEnd
end;

procedure PageControl_SetTag(AObj: TPageControl; AValue: NativeInt); extdecl;
begin
  handleExceptionBegin
  AObj.Tag := AValue;
  handleExceptionEnd
end;

function PageControl_GetAnchorSideLeft(AObj: TPageControl): TAnchorSide; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.AnchorSideLeft;
  handleExceptionEnd
end;

procedure PageControl_SetAnchorSideLeft(AObj: TPageControl; AValue: TAnchorSide); extdecl;
begin
  handleExceptionBegin
  AObj.AnchorSideLeft := AValue;
  handleExceptionEnd
end;

function PageControl_GetAnchorSideTop(AObj: TPageControl): TAnchorSide; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.AnchorSideTop;
  handleExceptionEnd
end;

procedure PageControl_SetAnchorSideTop(AObj: TPageControl; AValue: TAnchorSide); extdecl;
begin
  handleExceptionBegin
  AObj.AnchorSideTop := AValue;
  handleExceptionEnd
end;

function PageControl_GetAnchorSideRight(AObj: TPageControl): TAnchorSide; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.AnchorSideRight;
  handleExceptionEnd
end;

procedure PageControl_SetAnchorSideRight(AObj: TPageControl; AValue: TAnchorSide); extdecl;
begin
  handleExceptionBegin
  AObj.AnchorSideRight := AValue;
  handleExceptionEnd
end;

function PageControl_GetAnchorSideBottom(AObj: TPageControl): TAnchorSide; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.AnchorSideBottom;
  handleExceptionEnd
end;

procedure PageControl_SetAnchorSideBottom(AObj: TPageControl; AValue: TAnchorSide); extdecl;
begin
  handleExceptionBegin
  AObj.AnchorSideBottom := AValue;
  handleExceptionEnd
end;

function PageControl_GetChildSizing(AObj: TPageControl): TControlChildSizing; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ChildSizing;
  handleExceptionEnd
end;

procedure PageControl_SetChildSizing(AObj: TPageControl; AValue: TControlChildSizing); extdecl;
begin
  handleExceptionBegin
  AObj.ChildSizing := AValue;
  handleExceptionEnd
end;

function PageControl_GetBorderSpacing(AObj: TPageControl): TControlBorderSpacing; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.BorderSpacing;
  handleExceptionEnd
end;

procedure PageControl_SetBorderSpacing(AObj: TPageControl; AValue: TControlBorderSpacing); extdecl;
begin
  handleExceptionBegin
  AObj.BorderSpacing := AValue;
  handleExceptionEnd
end;

function PageControl_GetPages(AObj: TPageControl; Index: Integer): TTabSheet; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Pages[Index];
  handleExceptionEnd
end;

function PageControl_GetDockClients(AObj: TPageControl; Index: Integer): TControl; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.DockClients[Index];
  handleExceptionEnd
end;

function PageControl_GetControls(AObj: TPageControl; Index: Integer): TControl; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Controls[Index];
  handleExceptionEnd
end;

function PageControl_GetComponents(AObj: TPageControl; AIndex: Integer): TComponent; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Components[AIndex];
  handleExceptionEnd
end;

function PageControl_GetAnchorSide(AObj: TPageControl; AKind: TAnchorKind): TAnchorSide; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.AnchorSide[AKind];
  handleExceptionEnd
end;

function PageControl_StaticClassType: TClass; extdecl;
begin
  Result := TPageControl;
end;

exports
  PageControl_Create,
  PageControl_Free,
  PageControl_SelectNextPage,
  PageControl_TabRect,
  PageControl_CanFocus,
  PageControl_ContainsControl,
  PageControl_ControlAtPos,
  PageControl_DisableAlign,
  PageControl_EnableAlign,
  PageControl_FindChildControl,
  PageControl_FlipChildren,
  PageControl_Focused,
  PageControl_HandleAllocated,
  PageControl_InsertControl,
  PageControl_Invalidate,
  PageControl_RemoveControl,
  PageControl_Realign,
  PageControl_Repaint,
  PageControl_ScaleBy,
  PageControl_ScrollBy,
  PageControl_SetBounds,
  PageControl_SetFocus,
  PageControl_Update,
  PageControl_BringToFront,
  PageControl_ClientToScreen,
  PageControl_ClientToParent,
  PageControl_Dragging,
  PageControl_HasParent,
  PageControl_Hide,
  PageControl_Perform,
  PageControl_Refresh,
  PageControl_ScreenToClient,
  PageControl_ParentToClient,
  PageControl_SendToBack,
  PageControl_Show,
  PageControl_GetTextBuf,
  PageControl_GetTextLen,
  PageControl_SetTextBuf,
  PageControl_FindComponent,
  PageControl_GetNamePath,
  PageControl_Assign,
  PageControl_ClassType,
  PageControl_ClassName,
  PageControl_InstanceSize,
  PageControl_InheritsFrom,
  PageControl_Equals,
  PageControl_GetHashCode,
  PageControl_ToString,
  PageControl_AnchorToNeighbour,
  PageControl_AnchorParallel,
  PageControl_AnchorHorizontalCenterTo,
  PageControl_AnchorVerticalCenterTo,
  PageControl_AnchorAsAlign,
  PageControl_AnchorClient,
  PageControl_GetOptions,
  PageControl_SetOptions,
  PageControl_GetActivePageIndex,
  PageControl_SetActivePageIndex,
  PageControl_GetPageCount,
  PageControl_GetAlign,
  PageControl_SetAlign,
  PageControl_GetAnchors,
  PageControl_SetAnchors,
  PageControl_GetBiDiMode,
  PageControl_SetBiDiMode,
  PageControl_GetConstraints,
  PageControl_SetConstraints,
  PageControl_GetDockSite,
  PageControl_SetDockSite,
  PageControl_GetDoubleBuffered,
  PageControl_SetDoubleBuffered,
  PageControl_GetDragCursor,
  PageControl_SetDragCursor,
  PageControl_GetDragKind,
  PageControl_SetDragKind,
  PageControl_GetDragMode,
  PageControl_SetDragMode,
  PageControl_GetEnabled,
  PageControl_SetEnabled,
  PageControl_GetFont,
  PageControl_SetFont,
  PageControl_GetImages,
  PageControl_SetImages,
  PageControl_GetMultiLine,
  PageControl_SetMultiLine,
  PageControl_GetParentDoubleBuffered,
  PageControl_SetParentDoubleBuffered,
  PageControl_GetParentFont,
  PageControl_SetParentFont,
  PageControl_GetParentShowHint,
  PageControl_SetParentShowHint,
  PageControl_GetPopupMenu,
  PageControl_SetPopupMenu,
  PageControl_GetShowHint,
  PageControl_SetShowHint,
  PageControl_GetTabHeight,
  PageControl_SetTabHeight,
  PageControl_GetTabIndex,
  PageControl_SetTabIndex,
  PageControl_GetTabOrder,
  PageControl_SetTabOrder,
  PageControl_GetTabPosition,
  PageControl_SetTabPosition,
  PageControl_GetTabStop,
  PageControl_SetTabStop,
  PageControl_GetTabWidth,
  PageControl_SetTabWidth,
  PageControl_GetVisible,
  PageControl_SetVisible,
  PageControl_SetOnChange,
  PageControl_SetOnChanging,
  PageControl_SetOnContextPopup,
  PageControl_SetOnDockDrop,
  PageControl_SetOnDragDrop,
  PageControl_SetOnDragOver,
  PageControl_SetOnEndDock,
  PageControl_SetOnEndDrag,
  PageControl_SetOnEnter,
  PageControl_SetOnExit,
  PageControl_SetOnGetSiteInfo,
  PageControl_SetOnMouseDown,
  PageControl_SetOnMouseEnter,
  PageControl_SetOnMouseLeave,
  PageControl_SetOnMouseMove,
  PageControl_SetOnMouseUp,
  PageControl_SetOnResize,
  PageControl_SetOnStartDock,
  PageControl_SetOnUnDock,
  PageControl_GetDockClientCount,
  PageControl_GetMouseInClient,
  PageControl_GetVisibleDockClientCount,
  PageControl_GetBrush,
  PageControl_GetControlCount,
  PageControl_GetHandle,
  PageControl_GetParentWindow,
  PageControl_SetParentWindow,
  PageControl_GetShowing,
  PageControl_GetUseDockManager,
  PageControl_SetUseDockManager,
  PageControl_GetAction,
  PageControl_SetAction,
  PageControl_GetBoundsRect,
  PageControl_SetBoundsRect,
  PageControl_GetClientHeight,
  PageControl_SetClientHeight,
  PageControl_GetClientOrigin,
  PageControl_GetClientRect,
  PageControl_GetClientWidth,
  PageControl_SetClientWidth,
  PageControl_GetControlState,
  PageControl_SetControlState,
  PageControl_GetControlStyle,
  PageControl_SetControlStyle,
  PageControl_GetFloating,
  PageControl_GetParent,
  PageControl_SetParent,
  PageControl_GetLeft,
  PageControl_SetLeft,
  PageControl_GetTop,
  PageControl_SetTop,
  PageControl_GetWidth,
  PageControl_SetWidth,
  PageControl_GetHeight,
  PageControl_SetHeight,
  PageControl_GetCursor,
  PageControl_SetCursor,
  PageControl_GetHint,
  PageControl_SetHint,
  PageControl_GetComponentCount,
  PageControl_GetComponentIndex,
  PageControl_SetComponentIndex,
  PageControl_GetOwner,
  PageControl_GetName,
  PageControl_SetName,
  PageControl_GetTag,
  PageControl_SetTag,
  PageControl_GetAnchorSideLeft,
  PageControl_SetAnchorSideLeft,
  PageControl_GetAnchorSideTop,
  PageControl_SetAnchorSideTop,
  PageControl_GetAnchorSideRight,
  PageControl_SetAnchorSideRight,
  PageControl_GetAnchorSideBottom,
  PageControl_SetAnchorSideBottom,
  PageControl_GetChildSizing,
  PageControl_SetChildSizing,
  PageControl_GetBorderSpacing,
  PageControl_SetBorderSpacing,
  PageControl_GetPages,
  PageControl_GetDockClients,
  PageControl_GetControls,
  PageControl_GetComponents,
  PageControl_GetAnchorSide,
  PageControl_StaticClassType;

