
//----------------------------------------
// The code is automatically generated by the GenlibLcl tool.
// Copyright © ying32. All Rights Reserved.
// 
// Licensed under Apache License 2.0
//
//----------------------------------------


package vcl


import (
	. "github.com/ying32/govcl/vcl/api"
    . "github.com/ying32/govcl/vcl/types"
    "unsafe"
)

type TControl struct {
    IControl
    instance uintptr
    // 特殊情况下使用，主要应对Go的GC问题，与VCL没有太多关系。
    ptr unsafe.Pointer
}

// CN: 创建一个新的对象。
// EN: Create a new object.
func NewControl(owner IComponent) *TControl {
    c := new(TControl)
    c.instance = Control_Create(CheckPtr(owner))
    c.ptr = unsafe.Pointer(c.instance)
    return c
}

// CN: 动态转换一个已存在的对象实例。或者使用Obj.As().<目标对象>。
// EN: Dynamically convert an existing object instance. Or use Obj.As().<Target object>.
func AsControl(obj interface{}) *TControl {
    instance, ptr := getInstance(obj)
    if instance == 0 { return nil }
    return &TControl{instance: instance, ptr: ptr}
}

// -------------------------- Deprecated begin --------------------------
// CN: 新建一个对象来自已经存在的对象实例指针。
// EN: Create a new object from an existing object instance pointer.
// Deprecated: use AsControl.
func ControlFromInst(inst uintptr) *TControl {
    return AsControl(inst)
}

// CN: 新建一个对象来自已经存在的对象实例。
// EN: Create a new object from an existing object instance.
// Deprecated: use AsControl.
func ControlFromObj(obj IObject) *TControl {
    return AsControl(obj)
}

// CN: 新建一个对象来自不安全的地址。注意：使用此函数可能造成一些不明情况，慎用。
// EN: Create a new object from an unsecure address. Note: Using this function may cause some unclear situations and be used with caution..
// Deprecated: use AsControl.
func ControlFromUnsafePointer(ptr unsafe.Pointer) *TControl {
    return AsControl(ptr)
}

// -------------------------- Deprecated end --------------------------
// CN: 释放对象。
// EN: Free object.
func (c *TControl) Free() {
    if c.instance != 0 {
        Control_Free(c.instance)
        c.instance, c.ptr = 0, nullptr
    }
}

// CN: 返回对象实例指针。
// EN: Return object instance pointer.
func (c *TControl) Instance() uintptr {
    return c.instance
}

// CN: 获取一个不安全的地址。
// EN: Get an unsafe address.
func (c *TControl) UnsafeAddr() unsafe.Pointer {
    return c.ptr
}

// CN: 检测地址是否为空。
// EN: Check if the address is empty.
func (c *TControl) IsValid() bool {
    return c.instance != 0
}

// CN: 检测当前对象是否继承自目标对象。
// EN: Checks whether the current object is inherited from the target object.
func (c *TControl) Is() TIs {
    return TIs(c.instance)
}

// CN: 动态转换当前对象为目标对象。
// EN: Dynamically convert the current object to the target object.
//func (c *TControl) As() TAs {
//    return TAs(c.instance)
//}

// CN: 获取类信息指针。
// EN: Get class information pointer.
func TControlClass() TClass {
    return Control_StaticClassType()
}

// CN: 将控件置于最前。
// EN: Bring the control to the front.
func (c *TControl) BringToFront() {
    Control_BringToFront(c.instance)
}

// CN: 将客户端坐标转为绝对的屏幕坐标。
// EN: Convert client coordinates to absolute screen coordinates.
func (c *TControl) ClientToScreen(Point TPoint) TPoint {
    return Control_ClientToScreen(c.instance, Point)
}

// CN: 将客户端坐标转为父容器坐标。
// EN: Convert client coordinates to parent container coordinates.
func (c *TControl) ClientToParent(Point TPoint, AParent IWinControl) TPoint {
    return Control_ClientToParent(c.instance, Point , CheckPtr(AParent))
}

// CN: 是否在拖拽中。
// EN: Is it in the middle of dragging.
func (c *TControl) Dragging() bool {
    return Control_Dragging(c.instance)
}

// CN: 是否有父容器。
// EN: Is there a parent container.
func (c *TControl) HasParent() bool {
    return Control_HasParent(c.instance)
}

// CN: 隐藏控件。
// EN: Hidden control.
func (c *TControl) Hide() {
    Control_Hide(c.instance)
}

// CN: 要求重绘。
// EN: Redraw.
func (c *TControl) Invalidate() {
    Control_Invalidate(c.instance)
}

// CN: 发送一个消息。
// EN: Send a message.
func (c *TControl) Perform(Msg uint32, WParam uintptr, LParam int) int {
    return Control_Perform(c.instance, Msg , WParam , LParam)
}

// CN: 刷新控件。
// EN: Refresh control.
func (c *TControl) Refresh() {
    Control_Refresh(c.instance)
}

// CN: 重绘。
// EN: Repaint.
func (c *TControl) Repaint() {
    Control_Repaint(c.instance)
}

// CN: 将屏幕坐标转为客户端坐标。
// EN: Convert screen coordinates to client coordinates.
func (c *TControl) ScreenToClient(Point TPoint) TPoint {
    return Control_ScreenToClient(c.instance, Point)
}

// CN: 将父容器坐标转为客户端坐标。
// EN: Convert parent container coordinates to client coordinates.
func (c *TControl) ParentToClient(Point TPoint, AParent IWinControl) TPoint {
    return Control_ParentToClient(c.instance, Point , CheckPtr(AParent))
}

// CN: 控件至于最后面。
// EN: The control is placed at the end.
func (c *TControl) SendToBack() {
    Control_SendToBack(c.instance)
}

// CN: 设置组件边界。
// EN: Set component boundaries.
func (c *TControl) SetBounds(ALeft int32, ATop int32, AWidth int32, AHeight int32) {
    Control_SetBounds(c.instance, ALeft , ATop , AWidth , AHeight)
}

// CN: 显示控件。
// EN: Show control.
func (c *TControl) Show() {
    Control_Show(c.instance)
}

// CN: 控件更新。
// EN: Update.
func (c *TControl) Update() {
    Control_Update(c.instance)
}

// CN: 获取控件的字符，如果有。
// EN: Get the characters of the control, if any.
func (c *TControl) GetTextBuf(Buffer *string, BufSize int32) int32 {
    return Control_GetTextBuf(c.instance, Buffer , BufSize)
}

// CN: 获取控件的字符长，如果有。
// EN: Get the character length of the control, if any.
func (c *TControl) GetTextLen() int32 {
    return Control_GetTextLen(c.instance)
}

// CN: 设置控件字符，如果有。
// EN: Set control characters, if any.
func (c *TControl) SetTextBuf(Buffer string) {
    Control_SetTextBuf(c.instance, Buffer)
}

// CN: 查找指定名称的组件。
// EN: Find the component with the specified name.
func (c *TControl) FindComponent(AName string) *TComponent {
    return AsComponent(Control_FindComponent(c.instance, AName))
}

// CN: 获取类名路径。
// EN: Get the class name path.
func (c *TControl) GetNamePath() string {
    return Control_GetNamePath(c.instance)
}

// CN: 复制一个对象，如果对象实现了此方法的话。
// EN: Copy an object, if the object implements this method.
func (c *TControl) Assign(Source IObject) {
    Control_Assign(c.instance, CheckPtr(Source))
}

// CN: 获取类的类型信息。
// EN: Get class type information.
func (c *TControl) ClassType() TClass {
    return Control_ClassType(c.instance)
}

// CN: 获取当前对象类名称。
// EN: Get the current object class name.
func (c *TControl) ClassName() string {
    return Control_ClassName(c.instance)
}

// CN: 获取当前对象实例大小。
// EN: Get the current object instance size.
func (c *TControl) InstanceSize() int32 {
    return Control_InstanceSize(c.instance)
}

// CN: 判断当前类是否继承自指定类。
// EN: Determine whether the current class inherits from the specified class.
func (c *TControl) InheritsFrom(AClass TClass) bool {
    return Control_InheritsFrom(c.instance, AClass)
}

// CN: 与一个对象进行比较。
// EN: Compare with an object.
func (c *TControl) Equals(Obj IObject) bool {
    return Control_Equals(c.instance, CheckPtr(Obj))
}

// CN: 获取类的哈希值。
// EN: Get the hash value of the class.
func (c *TControl) GetHashCode() int32 {
    return Control_GetHashCode(c.instance)
}

// CN: 文本类信息。
// EN: Text information.
func (c *TControl) ToString() string {
    return Control_ToString(c.instance)
}

// CN: 获取控件启用。
// EN: Get the control enabled.
func (c *TControl) Enabled() bool {
    return Control_GetEnabled(c.instance)
}

// CN: 设置控件启用。
// EN: Set the control enabled.
func (c *TControl) SetEnabled(value bool) {
    Control_SetEnabled(c.instance, value)
}

func (c *TControl) Action() *TAction {
    return AsAction(Control_GetAction(c.instance))
}

func (c *TControl) SetAction(value IComponent) {
    Control_SetAction(c.instance, CheckPtr(value))
}

// CN: 获取控件自动调整。
// EN: Get Control automatically adjusts.
func (c *TControl) Align() TAlign {
    return Control_GetAlign(c.instance)
}

// CN: 设置控件自动调整。
// EN: Set Control automatically adjusts.
func (c *TControl) SetAlign(value TAlign) {
    Control_SetAlign(c.instance, value)
}

// CN: 获取四个角位置的锚点。
// EN: .
func (c *TControl) Anchors() TAnchors {
    return Control_GetAnchors(c.instance)
}

// CN: 设置四个角位置的锚点。
// EN: .
func (c *TControl) SetAnchors(value TAnchors) {
    Control_SetAnchors(c.instance, value)
}

func (c *TControl) BiDiMode() TBiDiMode {
    return Control_GetBiDiMode(c.instance)
}

func (c *TControl) SetBiDiMode(value TBiDiMode) {
    Control_SetBiDiMode(c.instance, value)
}

func (c *TControl) BoundsRect() TRect {
    return Control_GetBoundsRect(c.instance)
}

func (c *TControl) SetBoundsRect(value TRect) {
    Control_SetBoundsRect(c.instance, value)
}

// CN: 获取客户区高度。
// EN: Get client height.
func (c *TControl) ClientHeight() int32 {
    return Control_GetClientHeight(c.instance)
}

// CN: 设置客户区高度。
// EN: Set client height.
func (c *TControl) SetClientHeight(value int32) {
    Control_SetClientHeight(c.instance, value)
}

func (c *TControl) ClientOrigin() TPoint {
    return Control_GetClientOrigin(c.instance)
}

// CN: 获取客户区矩形。
// EN: Get client rectangle.
func (c *TControl) ClientRect() TRect {
    return Control_GetClientRect(c.instance)
}

// CN: 获取客户区宽度。
// EN: Get client width.
func (c *TControl) ClientWidth() int32 {
    return Control_GetClientWidth(c.instance)
}

// CN: 设置客户区宽度。
// EN: Set client width.
func (c *TControl) SetClientWidth(value int32) {
    Control_SetClientWidth(c.instance, value)
}

func (c *TControl) Constraints() *TSizeConstraints {
    return AsSizeConstraints(Control_GetConstraints(c.instance))
}

func (c *TControl) SetConstraints(value *TSizeConstraints) {
    Control_SetConstraints(c.instance, CheckPtr(value))
}

// CN: 获取控件状态。
// EN: Get control state.
func (c *TControl) ControlState() TControlState {
    return Control_GetControlState(c.instance)
}

// CN: 设置控件状态。
// EN: Set control state.
func (c *TControl) SetControlState(value TControlState) {
    Control_SetControlState(c.instance, value)
}

// CN: 获取控件样式。
// EN: Get control style.
func (c *TControl) ControlStyle() TControlStyle {
    return Control_GetControlStyle(c.instance)
}

// CN: 设置控件样式。
// EN: Set control style.
func (c *TControl) SetControlStyle(value TControlStyle) {
    Control_SetControlStyle(c.instance, value)
}

func (c *TControl) Floating() bool {
    return Control_GetFloating(c.instance)
}

// CN: 获取显示鼠标悬停提示。
// EN: Get Show mouseover tips.
func (c *TControl) ShowHint() bool {
    return Control_GetShowHint(c.instance)
}

// CN: 设置显示鼠标悬停提示。
// EN: Set Show mouseover tips.
func (c *TControl) SetShowHint(value bool) {
    Control_SetShowHint(c.instance, value)
}

// CN: 获取控件可视。
// EN: Get the control visible.
func (c *TControl) Visible() bool {
    return Control_GetVisible(c.instance)
}

// CN: 设置控件可视。
// EN: Set the control visible.
func (c *TControl) SetVisible(value bool) {
    Control_SetVisible(c.instance, value)
}

// CN: 获取控件父容器。
// EN: Get control parent container.
func (c *TControl) Parent() *TWinControl {
    return AsWinControl(Control_GetParent(c.instance))
}

// CN: 设置控件父容器。
// EN: Set control parent container.
func (c *TControl) SetParent(value IWinControl) {
    Control_SetParent(c.instance, CheckPtr(value))
}

// CN: 获取左边位置。
// EN: Get Left position.
func (c *TControl) Left() int32 {
    return Control_GetLeft(c.instance)
}

// CN: 设置左边位置。
// EN: Set Left position.
func (c *TControl) SetLeft(value int32) {
    Control_SetLeft(c.instance, value)
}

// CN: 获取顶边位置。
// EN: Get Top position.
func (c *TControl) Top() int32 {
    return Control_GetTop(c.instance)
}

// CN: 设置顶边位置。
// EN: Set Top position.
func (c *TControl) SetTop(value int32) {
    Control_SetTop(c.instance, value)
}

// CN: 获取宽度。
// EN: Get width.
func (c *TControl) Width() int32 {
    return Control_GetWidth(c.instance)
}

// CN: 设置宽度。
// EN: Set width.
func (c *TControl) SetWidth(value int32) {
    Control_SetWidth(c.instance, value)
}

// CN: 获取高度。
// EN: Get height.
func (c *TControl) Height() int32 {
    return Control_GetHeight(c.instance)
}

// CN: 设置高度。
// EN: Set height.
func (c *TControl) SetHeight(value int32) {
    Control_SetHeight(c.instance, value)
}

// CN: 获取控件光标。
// EN: Get control cursor.
func (c *TControl) Cursor() TCursor {
    return Control_GetCursor(c.instance)
}

// CN: 设置控件光标。
// EN: Set control cursor.
func (c *TControl) SetCursor(value TCursor) {
    Control_SetCursor(c.instance, value)
}

// CN: 获取组件鼠标悬停提示。
// EN: Get component mouse hints.
func (c *TControl) Hint() string {
    return Control_GetHint(c.instance)
}

// CN: 设置组件鼠标悬停提示。
// EN: Set component mouse hints.
func (c *TControl) SetHint(value string) {
    Control_SetHint(c.instance, value)
}

// CN: 获取边矩，仅VCL有效。
// EN: Get Edge moment, only VCL is valid.
func (c *TControl) Margins() *TMargins {
    return AsMargins(Control_GetMargins(c.instance))
}

// CN: 设置边矩，仅VCL有效。
// EN: Set Edge moment, only VCL is valid.
func (c *TControl) SetMargins(value *TMargins) {
    Control_SetMargins(c.instance, CheckPtr(value))
}

// CN: 获取组件总数。
// EN: Get the total number of components.
func (c *TControl) ComponentCount() int32 {
    return Control_GetComponentCount(c.instance)
}

// CN: 获取组件索引。
// EN: Get component index.
func (c *TControl) ComponentIndex() int32 {
    return Control_GetComponentIndex(c.instance)
}

// CN: 设置组件索引。
// EN: Set component index.
func (c *TControl) SetComponentIndex(value int32) {
    Control_SetComponentIndex(c.instance, value)
}

// CN: 获取组件所有者。
// EN: Get component owner.
func (c *TControl) Owner() *TComponent {
    return AsComponent(Control_GetOwner(c.instance))
}

// CN: 获取组件名称。
// EN: Get the component name.
func (c *TControl) Name() string {
    return Control_GetName(c.instance)
}

// CN: 设置组件名称。
// EN: Set the component name.
func (c *TControl) SetName(value string) {
    Control_SetName(c.instance, value)
}

// CN: 获取对象标记。
// EN: Get the control tag.
func (c *TControl) Tag() int {
    return Control_GetTag(c.instance)
}

// CN: 设置对象标记。
// EN: Set the control tag.
func (c *TControl) SetTag(value int) {
    Control_SetTag(c.instance, value)
}

// CN: 获取指定索引组件。
// EN: Get the specified index component.
func (c *TControl) Components(AIndex int32) *TComponent {
    return AsComponent(Control_GetComponents(c.instance, AIndex))
}

