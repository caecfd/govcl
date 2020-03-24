
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

type TListColumn struct {
    IObject
    instance uintptr
    // 特殊情况下使用，主要应对Go的GC问题，与VCL没有太多关系。
    ptr unsafe.Pointer
}

// CN: 创建一个新的对象。
// EN: Create a new object.
func NewListColumn() *TListColumn {
    l := new(TListColumn)
    l.instance = ListColumn_Create()
    l.ptr = unsafe.Pointer(l.instance)
    return l
}

// CN: 动态转换一个已存在的对象实例。或者使用Obj.As().<目标对象>。
// EN: Dynamically convert an existing object instance. Or use Obj.As().<Target object>.
func AsListColumn(obj interface{}) *TListColumn {
    instance, ptr := getInstance(obj)
    if instance == 0 { return nil }
    return &TListColumn{instance: instance, ptr: ptr}
}

// -------------------------- Deprecated begin --------------------------
// CN: 新建一个对象来自已经存在的对象实例指针。
// EN: Create a new object from an existing object instance pointer.
// Deprecated: use AsListColumn.
func ListColumnFromInst(inst uintptr) *TListColumn {
    return AsListColumn(inst)
}

// CN: 新建一个对象来自已经存在的对象实例。
// EN: Create a new object from an existing object instance.
// Deprecated: use AsListColumn.
func ListColumnFromObj(obj IObject) *TListColumn {
    return AsListColumn(obj)
}

// CN: 新建一个对象来自不安全的地址。注意：使用此函数可能造成一些不明情况，慎用。
// EN: Create a new object from an unsecure address. Note: Using this function may cause some unclear situations and be used with caution..
// Deprecated: use AsListColumn.
func ListColumnFromUnsafePointer(ptr unsafe.Pointer) *TListColumn {
    return AsListColumn(ptr)
}

// -------------------------- Deprecated end --------------------------
// CN: 释放对象。
// EN: Free object.
func (l *TListColumn) Free() {
    if l.instance != 0 {
        ListColumn_Free(l.instance)
        l.instance, l.ptr = 0, nullptr
    }
}

// CN: 返回对象实例指针。
// EN: Return object instance pointer.
func (l *TListColumn) Instance() uintptr {
    return l.instance
}

// CN: 获取一个不安全的地址。
// EN: Get an unsafe address.
func (l *TListColumn) UnsafeAddr() unsafe.Pointer {
    return l.ptr
}

// CN: 检测地址是否为空。
// EN: Check if the address is empty.
func (l *TListColumn) IsValid() bool {
    return l.instance != 0
}

// CN: 检测当前对象是否继承自目标对象。
// EN: Checks whether the current object is inherited from the target object.
func (l *TListColumn) Is() TIs {
    return TIs(l.instance)
}

// CN: 动态转换当前对象为目标对象。
// EN: Dynamically convert the current object to the target object.
//func (l *TListColumn) As() TAs {
//    return TAs(l.instance)
//}

// CN: 获取类信息指针。
// EN: Get class information pointer.
func TListColumnClass() TClass {
    return ListColumn_StaticClassType()
}

// CN: 复制一个对象，如果对象实现了此方法的话。
// EN: Copy an object, if the object implements this method.
func (l *TListColumn) Assign(Source IObject) {
    ListColumn_Assign(l.instance, CheckPtr(Source))
}

// CN: 获取类名路径。
// EN: Get the class name path.
func (l *TListColumn) GetNamePath() string {
    return ListColumn_GetNamePath(l.instance)
}

// CN: 获取类的类型信息。
// EN: Get class type information.
func (l *TListColumn) ClassType() TClass {
    return ListColumn_ClassType(l.instance)
}

// CN: 获取当前对象类名称。
// EN: Get the current object class name.
func (l *TListColumn) ClassName() string {
    return ListColumn_ClassName(l.instance)
}

// CN: 获取当前对象实例大小。
// EN: Get the current object instance size.
func (l *TListColumn) InstanceSize() int32 {
    return ListColumn_InstanceSize(l.instance)
}

// CN: 判断当前类是否继承自指定类。
// EN: Determine whether the current class inherits from the specified class.
func (l *TListColumn) InheritsFrom(AClass TClass) bool {
    return ListColumn_InheritsFrom(l.instance, AClass)
}

// CN: 与一个对象进行比较。
// EN: Compare with an object.
func (l *TListColumn) Equals(Obj IObject) bool {
    return ListColumn_Equals(l.instance, CheckPtr(Obj))
}

// CN: 获取类的哈希值。
// EN: Get the hash value of the class.
func (l *TListColumn) GetHashCode() int32 {
    return ListColumn_GetHashCode(l.instance)
}

// CN: 文本类信息。
// EN: Text information.
func (l *TListColumn) ToString() string {
    return ListColumn_ToString(l.instance)
}

// CN: 获取文字对齐。
// EN: Get Text alignment.
func (l *TListColumn) Alignment() TAlignment {
    return ListColumn_GetAlignment(l.instance)
}

// CN: 设置文字对齐。
// EN: Set Text alignment.
func (l *TListColumn) SetAlignment(value TAlignment) {
    ListColumn_SetAlignment(l.instance, value)
}

// CN: 获取自动调整大小。
// EN: .
func (l *TListColumn) AutoSize() bool {
    return ListColumn_GetAutoSize(l.instance)
}

// CN: 设置自动调整大小。
// EN: .
func (l *TListColumn) SetAutoSize(value bool) {
    ListColumn_SetAutoSize(l.instance, value)
}

// CN: 获取控件标题。
// EN: Get the control title.
func (l *TListColumn) Caption() string {
    return ListColumn_GetCaption(l.instance)
}

// CN: 设置控件标题。
// EN: Set the control title.
func (l *TListColumn) SetCaption(value string) {
    ListColumn_SetCaption(l.instance, value)
}

// CN: 获取图像在images中的索引。
// EN: .
func (l *TListColumn) ImageIndex() int32 {
    return ListColumn_GetImageIndex(l.instance)
}

// CN: 设置图像在images中的索引。
// EN: .
func (l *TListColumn) SetImageIndex(value int32) {
    ListColumn_SetImageIndex(l.instance, value)
}

func (l *TListColumn) MaxWidth() int32 {
    return ListColumn_GetMaxWidth(l.instance)
}

func (l *TListColumn) SetMaxWidth(value int32) {
    ListColumn_SetMaxWidth(l.instance, value)
}

func (l *TListColumn) MinWidth() int32 {
    return ListColumn_GetMinWidth(l.instance)
}

func (l *TListColumn) SetMinWidth(value int32) {
    ListColumn_SetMinWidth(l.instance, value)
}

// CN: 获取对象标记。
// EN: Get the control tag.
func (l *TListColumn) Tag() int32 {
    return ListColumn_GetTag(l.instance)
}

// CN: 设置对象标记。
// EN: Set the control tag.
func (l *TListColumn) SetTag(value int32) {
    ListColumn_SetTag(l.instance, value)
}

// CN: 获取宽度。
// EN: Get width.
func (l *TListColumn) Width() int32 {
    return ListColumn_GetWidth(l.instance)
}

// CN: 设置宽度。
// EN: Set width.
func (l *TListColumn) SetWidth(value int32) {
    ListColumn_SetWidth(l.instance, value)
}

func (l *TListColumn) Collection() *TCollection {
    return AsCollection(ListColumn_GetCollection(l.instance))
}

func (l *TListColumn) SetCollection(value *TCollection) {
    ListColumn_SetCollection(l.instance, CheckPtr(value))
}

func (l *TListColumn) Index() int32 {
    return ListColumn_GetIndex(l.instance)
}

func (l *TListColumn) SetIndex(value int32) {
    ListColumn_SetIndex(l.instance, value)
}

func (l *TListColumn) DisplayName() string {
    return ListColumn_GetDisplayName(l.instance)
}

func (l *TListColumn) SetDisplayName(value string) {
    ListColumn_SetDisplayName(l.instance, value)
}

