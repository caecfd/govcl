
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

type TPrintDialog struct {
    IComponent
    instance uintptr
    // 特殊情况下使用，主要应对Go的GC问题，与VCL没有太多关系。
    ptr unsafe.Pointer
}

// CN: 创建一个新的对象。
// EN: Create a new object.
func NewPrintDialog(owner IComponent) *TPrintDialog {
    p := new(TPrintDialog)
    p.instance = PrintDialog_Create(CheckPtr(owner))
    p.ptr = unsafe.Pointer(p.instance)
    return p
}

// CN: 动态转换一个已存在的对象实例。或者使用Obj.As().<目标对象>。
// EN: Dynamically convert an existing object instance. Or use Obj.As().<Target object>.
func AsPrintDialog(obj interface{}) *TPrintDialog {
    instance, ptr := getInstance(obj)
    if instance == 0 { return nil }
    return &TPrintDialog{instance: instance, ptr: ptr}
}

// -------------------------- Deprecated begin --------------------------
// CN: 新建一个对象来自已经存在的对象实例指针。
// EN: Create a new object from an existing object instance pointer.
// Deprecated: use AsPrintDialog.
func PrintDialogFromInst(inst uintptr) *TPrintDialog {
    return AsPrintDialog(inst)
}

// CN: 新建一个对象来自已经存在的对象实例。
// EN: Create a new object from an existing object instance.
// Deprecated: use AsPrintDialog.
func PrintDialogFromObj(obj IObject) *TPrintDialog {
    return AsPrintDialog(obj)
}

// CN: 新建一个对象来自不安全的地址。注意：使用此函数可能造成一些不明情况，慎用。
// EN: Create a new object from an unsecure address. Note: Using this function may cause some unclear situations and be used with caution..
// Deprecated: use AsPrintDialog.
func PrintDialogFromUnsafePointer(ptr unsafe.Pointer) *TPrintDialog {
    return AsPrintDialog(ptr)
}

// -------------------------- Deprecated end --------------------------
// CN: 释放对象。
// EN: Free object.
func (p *TPrintDialog) Free() {
    if p.instance != 0 {
        PrintDialog_Free(p.instance)
        p.instance, p.ptr = 0, nullptr
    }
}

// CN: 返回对象实例指针。
// EN: Return object instance pointer.
func (p *TPrintDialog) Instance() uintptr {
    return p.instance
}

// CN: 获取一个不安全的地址。
// EN: Get an unsafe address.
func (p *TPrintDialog) UnsafeAddr() unsafe.Pointer {
    return p.ptr
}

// CN: 检测地址是否为空。
// EN: Check if the address is empty.
func (p *TPrintDialog) IsValid() bool {
    return p.instance != 0
}

// CN: 检测当前对象是否继承自目标对象。
// EN: Checks whether the current object is inherited from the target object.
func (p *TPrintDialog) Is() TIs {
    return TIs(p.instance)
}

// CN: 动态转换当前对象为目标对象。
// EN: Dynamically convert the current object to the target object.
//func (p *TPrintDialog) As() TAs {
//    return TAs(p.instance)
//}

// CN: 获取类信息指针。
// EN: Get class information pointer.
func TPrintDialogClass() TClass {
    return PrintDialog_StaticClassType()
}

// CN: 执行。
// EN: .
func (p *TPrintDialog) Execute() bool {
    return PrintDialog_Execute(p.instance)
}

// CN: 查找指定名称的组件。
// EN: Find the component with the specified name.
func (p *TPrintDialog) FindComponent(AName string) *TComponent {
    return AsComponent(PrintDialog_FindComponent(p.instance, AName))
}

// CN: 获取类名路径。
// EN: Get the class name path.
func (p *TPrintDialog) GetNamePath() string {
    return PrintDialog_GetNamePath(p.instance)
}

// CN: 是否有父容器。
// EN: Is there a parent container.
func (p *TPrintDialog) HasParent() bool {
    return PrintDialog_HasParent(p.instance)
}

// CN: 复制一个对象，如果对象实现了此方法的话。
// EN: Copy an object, if the object implements this method.
func (p *TPrintDialog) Assign(Source IObject) {
    PrintDialog_Assign(p.instance, CheckPtr(Source))
}

// CN: 获取类的类型信息。
// EN: Get class type information.
func (p *TPrintDialog) ClassType() TClass {
    return PrintDialog_ClassType(p.instance)
}

// CN: 获取当前对象类名称。
// EN: Get the current object class name.
func (p *TPrintDialog) ClassName() string {
    return PrintDialog_ClassName(p.instance)
}

// CN: 获取当前对象实例大小。
// EN: Get the current object instance size.
func (p *TPrintDialog) InstanceSize() int32 {
    return PrintDialog_InstanceSize(p.instance)
}

// CN: 判断当前类是否继承自指定类。
// EN: Determine whether the current class inherits from the specified class.
func (p *TPrintDialog) InheritsFrom(AClass TClass) bool {
    return PrintDialog_InheritsFrom(p.instance, AClass)
}

// CN: 与一个对象进行比较。
// EN: Compare with an object.
func (p *TPrintDialog) Equals(Obj IObject) bool {
    return PrintDialog_Equals(p.instance, CheckPtr(Obj))
}

// CN: 获取类的哈希值。
// EN: Get the hash value of the class.
func (p *TPrintDialog) GetHashCode() int32 {
    return PrintDialog_GetHashCode(p.instance)
}

// CN: 文本类信息。
// EN: Text information.
func (p *TPrintDialog) ToString() string {
    return PrintDialog_ToString(p.instance)
}

func (p *TPrintDialog) Collate() bool {
    return PrintDialog_GetCollate(p.instance)
}

func (p *TPrintDialog) SetCollate(value bool) {
    PrintDialog_SetCollate(p.instance, value)
}

func (p *TPrintDialog) Copies() int32 {
    return PrintDialog_GetCopies(p.instance)
}

func (p *TPrintDialog) SetCopies(value int32) {
    PrintDialog_SetCopies(p.instance, value)
}

func (p *TPrintDialog) FromPage() int32 {
    return PrintDialog_GetFromPage(p.instance)
}

func (p *TPrintDialog) SetFromPage(value int32) {
    PrintDialog_SetFromPage(p.instance, value)
}

func (p *TPrintDialog) MinPage() int32 {
    return PrintDialog_GetMinPage(p.instance)
}

func (p *TPrintDialog) SetMinPage(value int32) {
    PrintDialog_SetMinPage(p.instance, value)
}

func (p *TPrintDialog) MaxPage() int32 {
    return PrintDialog_GetMaxPage(p.instance)
}

func (p *TPrintDialog) SetMaxPage(value int32) {
    PrintDialog_SetMaxPage(p.instance, value)
}

func (p *TPrintDialog) Options() TPrintDialogOptions {
    return PrintDialog_GetOptions(p.instance)
}

func (p *TPrintDialog) SetOptions(value TPrintDialogOptions) {
    PrintDialog_SetOptions(p.instance, value)
}

func (p *TPrintDialog) PrintToFile() bool {
    return PrintDialog_GetPrintToFile(p.instance)
}

func (p *TPrintDialog) SetPrintToFile(value bool) {
    PrintDialog_SetPrintToFile(p.instance, value)
}

func (p *TPrintDialog) PrintRange() TPrintRange {
    return PrintDialog_GetPrintRange(p.instance)
}

func (p *TPrintDialog) SetPrintRange(value TPrintRange) {
    PrintDialog_SetPrintRange(p.instance, value)
}

func (p *TPrintDialog) ToPage() int32 {
    return PrintDialog_GetToPage(p.instance)
}

func (p *TPrintDialog) SetToPage(value int32) {
    PrintDialog_SetToPage(p.instance, value)
}

// CN: 获取控件句柄。
// EN: Get Control handle.
func (p *TPrintDialog) Handle() HWND {
    return PrintDialog_GetHandle(p.instance)
}

func (p *TPrintDialog) SetOnClose(fn TNotifyEvent) {
    PrintDialog_SetOnClose(p.instance, fn)
}

// CN: 设置显示事件。
// EN: .
func (p *TPrintDialog) SetOnShow(fn TNotifyEvent) {
    PrintDialog_SetOnShow(p.instance, fn)
}

// CN: 获取组件总数。
// EN: Get the total number of components.
func (p *TPrintDialog) ComponentCount() int32 {
    return PrintDialog_GetComponentCount(p.instance)
}

// CN: 获取组件索引。
// EN: Get component index.
func (p *TPrintDialog) ComponentIndex() int32 {
    return PrintDialog_GetComponentIndex(p.instance)
}

// CN: 设置组件索引。
// EN: Set component index.
func (p *TPrintDialog) SetComponentIndex(value int32) {
    PrintDialog_SetComponentIndex(p.instance, value)
}

// CN: 获取组件所有者。
// EN: Get component owner.
func (p *TPrintDialog) Owner() *TComponent {
    return AsComponent(PrintDialog_GetOwner(p.instance))
}

// CN: 获取组件名称。
// EN: Get the component name.
func (p *TPrintDialog) Name() string {
    return PrintDialog_GetName(p.instance)
}

// CN: 设置组件名称。
// EN: Set the component name.
func (p *TPrintDialog) SetName(value string) {
    PrintDialog_SetName(p.instance, value)
}

// CN: 获取对象标记。
// EN: Get the control tag.
func (p *TPrintDialog) Tag() int {
    return PrintDialog_GetTag(p.instance)
}

// CN: 设置对象标记。
// EN: Set the control tag.
func (p *TPrintDialog) SetTag(value int) {
    PrintDialog_SetTag(p.instance, value)
}

// CN: 获取指定索引组件。
// EN: Get the specified index component.
func (p *TPrintDialog) Components(AIndex int32) *TComponent {
    return AsComponent(PrintDialog_GetComponents(p.instance, AIndex))
}

