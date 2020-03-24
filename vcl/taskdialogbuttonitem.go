
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

type TTaskDialogButtonItem struct {
    IObject
    instance uintptr
    // 特殊情况下使用，主要应对Go的GC问题，与VCL没有太多关系。
    ptr unsafe.Pointer
}

// CN: 创建一个新的对象。
// EN: Create a new object.
func NewTaskDialogButtonItem() *TTaskDialogButtonItem {
    t := new(TTaskDialogButtonItem)
    t.instance = TaskDialogButtonItem_Create()
    t.ptr = unsafe.Pointer(t.instance)
    return t
}

// CN: 动态转换一个已存在的对象实例。或者使用Obj.As().<目标对象>。
// EN: Dynamically convert an existing object instance. Or use Obj.As().<Target object>.
func AsTaskDialogButtonItem(obj interface{}) *TTaskDialogButtonItem {
    instance, ptr := getInstance(obj)
    if instance == 0 { return nil }
    return &TTaskDialogButtonItem{instance: instance, ptr: ptr}
}

// -------------------------- Deprecated begin --------------------------
// CN: 新建一个对象来自已经存在的对象实例指针。
// EN: Create a new object from an existing object instance pointer.
// Deprecated: use AsTaskDialogButtonItem.
func TaskDialogButtonItemFromInst(inst uintptr) *TTaskDialogButtonItem {
    return AsTaskDialogButtonItem(inst)
}

// CN: 新建一个对象来自已经存在的对象实例。
// EN: Create a new object from an existing object instance.
// Deprecated: use AsTaskDialogButtonItem.
func TaskDialogButtonItemFromObj(obj IObject) *TTaskDialogButtonItem {
    return AsTaskDialogButtonItem(obj)
}

// CN: 新建一个对象来自不安全的地址。注意：使用此函数可能造成一些不明情况，慎用。
// EN: Create a new object from an unsecure address. Note: Using this function may cause some unclear situations and be used with caution..
// Deprecated: use AsTaskDialogButtonItem.
func TaskDialogButtonItemFromUnsafePointer(ptr unsafe.Pointer) *TTaskDialogButtonItem {
    return AsTaskDialogButtonItem(ptr)
}

// -------------------------- Deprecated end --------------------------
// CN: 释放对象。
// EN: Free object.
func (t *TTaskDialogButtonItem) Free() {
    if t.instance != 0 {
        TaskDialogButtonItem_Free(t.instance)
        t.instance, t.ptr = 0, nullptr
    }
}

// CN: 返回对象实例指针。
// EN: Return object instance pointer.
func (t *TTaskDialogButtonItem) Instance() uintptr {
    return t.instance
}

// CN: 获取一个不安全的地址。
// EN: Get an unsafe address.
func (t *TTaskDialogButtonItem) UnsafeAddr() unsafe.Pointer {
    return t.ptr
}

// CN: 检测地址是否为空。
// EN: Check if the address is empty.
func (t *TTaskDialogButtonItem) IsValid() bool {
    return t.instance != 0
}

// CN: 检测当前对象是否继承自目标对象。
// EN: Checks whether the current object is inherited from the target object.
func (t *TTaskDialogButtonItem) Is() TIs {
    return TIs(t.instance)
}

// CN: 动态转换当前对象为目标对象。
// EN: Dynamically convert the current object to the target object.
//func (t *TTaskDialogButtonItem) As() TAs {
//    return TAs(t.instance)
//}

// CN: 获取类信息指针。
// EN: Get class information pointer.
func TTaskDialogButtonItemClass() TClass {
    return TaskDialogButtonItem_StaticClassType()
}

// CN: 获取类名路径。
// EN: Get the class name path.
func (t *TTaskDialogButtonItem) GetNamePath() string {
    return TaskDialogButtonItem_GetNamePath(t.instance)
}

// CN: 复制一个对象，如果对象实现了此方法的话。
// EN: Copy an object, if the object implements this method.
func (t *TTaskDialogButtonItem) Assign(Source IObject) {
    TaskDialogButtonItem_Assign(t.instance, CheckPtr(Source))
}

// CN: 获取类的类型信息。
// EN: Get class type information.
func (t *TTaskDialogButtonItem) ClassType() TClass {
    return TaskDialogButtonItem_ClassType(t.instance)
}

// CN: 获取当前对象类名称。
// EN: Get the current object class name.
func (t *TTaskDialogButtonItem) ClassName() string {
    return TaskDialogButtonItem_ClassName(t.instance)
}

// CN: 获取当前对象实例大小。
// EN: Get the current object instance size.
func (t *TTaskDialogButtonItem) InstanceSize() int32 {
    return TaskDialogButtonItem_InstanceSize(t.instance)
}

// CN: 判断当前类是否继承自指定类。
// EN: Determine whether the current class inherits from the specified class.
func (t *TTaskDialogButtonItem) InheritsFrom(AClass TClass) bool {
    return TaskDialogButtonItem_InheritsFrom(t.instance, AClass)
}

// CN: 与一个对象进行比较。
// EN: Compare with an object.
func (t *TTaskDialogButtonItem) Equals(Obj IObject) bool {
    return TaskDialogButtonItem_Equals(t.instance, CheckPtr(Obj))
}

// CN: 获取类的哈希值。
// EN: Get the hash value of the class.
func (t *TTaskDialogButtonItem) GetHashCode() int32 {
    return TaskDialogButtonItem_GetHashCode(t.instance)
}

// CN: 文本类信息。
// EN: Text information.
func (t *TTaskDialogButtonItem) ToString() string {
    return TaskDialogButtonItem_ToString(t.instance)
}

// CN: 获取模态对话框显示结果。
// EN: .
func (t *TTaskDialogButtonItem) ModalResult() TModalResult {
    return TaskDialogButtonItem_GetModalResult(t.instance)
}

// CN: 设置模态对话框显示结果。
// EN: .
func (t *TTaskDialogButtonItem) SetModalResult(value TModalResult) {
    TaskDialogButtonItem_SetModalResult(t.instance, value)
}

// CN: 获取控件标题。
// EN: Get the control title.
func (t *TTaskDialogButtonItem) Caption() string {
    return TaskDialogButtonItem_GetCaption(t.instance)
}

// CN: 设置控件标题。
// EN: Set the control title.
func (t *TTaskDialogButtonItem) SetCaption(value string) {
    TaskDialogButtonItem_SetCaption(t.instance, value)
}

func (t *TTaskDialogButtonItem) Default() bool {
    return TaskDialogButtonItem_GetDefault(t.instance)
}

func (t *TTaskDialogButtonItem) SetDefault(value bool) {
    TaskDialogButtonItem_SetDefault(t.instance, value)
}

func (t *TTaskDialogButtonItem) Collection() *TCollection {
    return AsCollection(TaskDialogButtonItem_GetCollection(t.instance))
}

func (t *TTaskDialogButtonItem) SetCollection(value *TCollection) {
    TaskDialogButtonItem_SetCollection(t.instance, CheckPtr(value))
}

func (t *TTaskDialogButtonItem) Index() int32 {
    return TaskDialogButtonItem_GetIndex(t.instance)
}

func (t *TTaskDialogButtonItem) SetIndex(value int32) {
    TaskDialogButtonItem_SetIndex(t.instance, value)
}

func (t *TTaskDialogButtonItem) DisplayName() string {
    return TaskDialogButtonItem_GetDisplayName(t.instance)
}

func (t *TTaskDialogButtonItem) SetDisplayName(value string) {
    TaskDialogButtonItem_SetDisplayName(t.instance, value)
}

