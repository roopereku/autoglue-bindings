using System.Runtime.InteropServices;
namespace gencs.ag;
public class EnumEntryEntity : gencs.ag.Entity
{
    public EnumEntryEntity(IntPtr ObjectHandle) : base(ObjectHandle)
    {
    }
    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    private delegate IntPtr AG_delegate_intercept_getParent0(IntPtr ObjectHandle);
    internal static IntPtr AG_intercept_getParent0(IntPtr ObjectHandle)
    {
        return gencs.ag.Entity.AG_getObjectHandle(((((GCHandle)ObjectHandle).Target) as EnumEntryEntity).getParent());
    }
    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    private delegate IntPtr AG_delegate_intercept_resolve0(IntPtr ObjectHandle, IntPtr qualifiedName);
    internal static IntPtr AG_intercept_resolve0(IntPtr ObjectHandle, IntPtr qualifiedName)
    {
        return gencs.std.shared_ptrEntity.AG_getObjectHandle(((((GCHandle)ObjectHandle).Target) as EnumEntryEntity).resolve(new gencs.std.basic_String_viewCharacter_char_traitsCharacter(qualifiedName)));
    }
    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    private delegate IntPtr AG_delegate_intercept_getName0(IntPtr ObjectHandle);
    internal static IntPtr AG_intercept_getName0(IntPtr ObjectHandle)
    {
        return gencs.std.basic_StringCharacter_char_traitsCharacter_allocatorCharacter.AG_getObjectHandle(((((GCHandle)ObjectHandle).Target) as EnumEntryEntity).getName());
    }
    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    private delegate IntPtr AG_delegate_intercept_getHierarchy0(IntPtr ObjectHandle, IntPtr delimiter);
    internal static IntPtr AG_intercept_getHierarchy0(IntPtr ObjectHandle, IntPtr delimiter)
    {
        return gencs.std.basic_StringCharacter_char_traitsCharacter_allocatorCharacter.AG_getObjectHandle(((((GCHandle)ObjectHandle).Target) as EnumEntryEntity).getHierarchy(new gencs.std.basic_StringCharacter_char_traitsCharacter_allocatorCharacter(delimiter)));
    }
    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    private delegate void AG_delegate_intercept_onList0(IntPtr ObjectHandle, IntPtr indent);
    internal static void AG_intercept_onList0(IntPtr ObjectHandle, IntPtr indent)
    {
        ((((GCHandle)ObjectHandle).Target) as EnumEntryEntity).onList(new gencs.std.basic_String_viewCharacter_char_traitsCharacter(indent));
    }
    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    private delegate bool AG_delegate_intercept_hasName0(IntPtr ObjectHandle, IntPtr str);
    internal static bool AG_intercept_hasName0(IntPtr ObjectHandle, IntPtr str)
    {
        return ((((GCHandle)ObjectHandle).Target) as EnumEntryEntity).hasName(new gencs.std.basic_String_viewCharacter_char_traitsCharacter(str));
    }
    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    private delegate void AG_delegate_intercept_onInitialize0(IntPtr ObjectHandle);
    internal static void AG_intercept_onInitialize0(IntPtr ObjectHandle)
    {
        ((((GCHandle)ObjectHandle).Target) as EnumEntryEntity).onInitialize();
    }
    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    private delegate void AG_delegate_intercept_onFirstUse0(IntPtr ObjectHandle);
    internal static void AG_intercept_onFirstUse0(IntPtr ObjectHandle)
    {
        ((((GCHandle)ObjectHandle).Target) as EnumEntryEntity).onFirstUse();
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern void ag_EnumEntryEntity_AG_initializeInterceptionContext(IntPtr ObjectHandle, IntPtr AG_foreignObject, IntPtr AG_intercept_getParent0, IntPtr AG_intercept_resolve0, IntPtr AG_intercept_getName0, IntPtr AG_intercept_getHierarchy0, IntPtr AG_intercept_onList0, IntPtr AG_intercept_hasName0, IntPtr AG_intercept_onInitialize0, IntPtr AG_intercept_onFirstUse0);
    private void AG_initializeInterceptionContext()
    {
        ag_EnumEntryEntity_AG_initializeInterceptionContext(mObjectHandle, (IntPtr)GCHandle.Alloc(this), Marshal.GetFunctionPointerForDelegate(new AG_delegate_intercept_getParent0(AG_intercept_getParent0)), Marshal.GetFunctionPointerForDelegate(new AG_delegate_intercept_resolve0(AG_intercept_resolve0)), Marshal.GetFunctionPointerForDelegate(new AG_delegate_intercept_getName0(AG_intercept_getName0)), Marshal.GetFunctionPointerForDelegate(new AG_delegate_intercept_getHierarchy0(AG_intercept_getHierarchy0)), Marshal.GetFunctionPointerForDelegate(new AG_delegate_intercept_onList0(AG_intercept_onList0)), Marshal.GetFunctionPointerForDelegate(new AG_delegate_intercept_hasName0(AG_intercept_hasName0)), Marshal.GetFunctionPointerForDelegate(new AG_delegate_intercept_onInitialize0(AG_intercept_onInitialize0)), Marshal.GetFunctionPointerForDelegate(new AG_delegate_intercept_onFirstUse0(AG_intercept_onFirstUse0)));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr ag_EnumEntryEntity_EnumEntryEntity0(IntPtr name, IntPtr value);
    public EnumEntryEntity(gencs.std.basic_String_viewCharacter_char_traitsCharacter name, gencs.std.basic_StringCharacter_char_traitsCharacter_allocatorCharacter value) : this(ag_EnumEntryEntity_EnumEntryEntity0(gencs.std.basic_String_viewCharacter_char_traitsCharacter.AG_getObjectHandle(name), gencs.std.basic_StringCharacter_char_traitsCharacter_allocatorCharacter.AG_getObjectHandle(value)))
    {
        AG_initializeInterceptionContext();
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr ag_EnumEntryEntity_EnumEntryEntity1(IntPtr param1);
    public EnumEntryEntity(gencs.ag.EnumEntryEntity param1) : this(ag_EnumEntryEntity_EnumEntryEntity1(gencs.ag.EnumEntryEntity.AG_getObjectHandle(param1)))
    {
        AG_initializeInterceptionContext();
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr ag_EnumEntryEntity_getValue0(IntPtr ObjectHandle);
    public gencs.std.basic_String_viewCharacter_char_traitsCharacter getValue()
    {
        return new gencs.std.basic_String_viewCharacter_char_traitsCharacter(ag_EnumEntryEntity_getValue0(mObjectHandle));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern bool ag_EnumEntryEntity_isLast0(IntPtr ObjectHandle);
    public bool isLast()
    {
        return ag_EnumEntryEntity_isLast0(mObjectHandle);
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr ag_EnumEntryEntity_getTypeString0(IntPtr ObjectHandle);
    public override string getTypeString()
    {
        return Marshal.PtrToStringAnsi(ag_EnumEntryEntity_getTypeString0(mObjectHandle));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern void ag_EnumEntryEntity_onGenerate0(IntPtr ObjectHandle, IntPtr generator);
    protected override void onGenerate(gencs.ag.BindingGenerator generator)
    {
        ag_EnumEntryEntity_onGenerate0(mObjectHandle, gencs.ag.BindingGenerator.AG_getObjectHandle(generator));
    }
    public class ConcreteType : gencs.ag.EnumEntryEntity
    {
        public ConcreteType(IntPtr ObjectHandle) : base(ObjectHandle)
        {
        }
        [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
        private static extern IntPtr ag_EnumEntryEntity_ConcreteType_getParent0(IntPtr ObjectHandle);
        public override gencs.ag.Entity getParent()
        {
            return new gencs.ag.Entity.ConcreteType(ag_EnumEntryEntity_ConcreteType_getParent0(mObjectHandle));
        }
        [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
        private static extern IntPtr ag_EnumEntryEntity_ConcreteType_resolve0(IntPtr ObjectHandle, IntPtr qualifiedName);
        public override gencs.std.shared_ptrEntity resolve(gencs.std.basic_String_viewCharacter_char_traitsCharacter qualifiedName)
        {
            return new gencs.std.shared_ptrEntity(ag_EnumEntryEntity_ConcreteType_resolve0(mObjectHandle, gencs.std.basic_String_viewCharacter_char_traitsCharacter.AG_getObjectHandle(qualifiedName)));
        }
        [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
        private static extern IntPtr ag_EnumEntryEntity_ConcreteType_getName0(IntPtr ObjectHandle);
        public override gencs.std.basic_StringCharacter_char_traitsCharacter_allocatorCharacter getName()
        {
            return new gencs.std.basic_StringCharacter_char_traitsCharacter_allocatorCharacter(ag_EnumEntryEntity_ConcreteType_getName0(mObjectHandle));
        }
        [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
        private static extern IntPtr ag_EnumEntryEntity_ConcreteType_getHierarchy0(IntPtr ObjectHandle, IntPtr delimiter);
        public override gencs.std.basic_StringCharacter_char_traitsCharacter_allocatorCharacter getHierarchy(gencs.std.basic_StringCharacter_char_traitsCharacter_allocatorCharacter delimiter)
        {
            return new gencs.std.basic_StringCharacter_char_traitsCharacter_allocatorCharacter(ag_EnumEntryEntity_ConcreteType_getHierarchy0(mObjectHandle, gencs.std.basic_StringCharacter_char_traitsCharacter_allocatorCharacter.AG_getObjectHandle(delimiter)));
        }
        [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
        private static extern void ag_EnumEntryEntity_ConcreteType_onList0(IntPtr ObjectHandle, IntPtr indent);
        protected override void onList(gencs.std.basic_String_viewCharacter_char_traitsCharacter indent)
        {
            ag_EnumEntryEntity_ConcreteType_onList0(mObjectHandle, gencs.std.basic_String_viewCharacter_char_traitsCharacter.AG_getObjectHandle(indent));
        }
        [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
        private static extern bool ag_EnumEntryEntity_ConcreteType_hasName0(IntPtr ObjectHandle, IntPtr str);
        protected override bool hasName(gencs.std.basic_String_viewCharacter_char_traitsCharacter str)
        {
            return ag_EnumEntryEntity_ConcreteType_hasName0(mObjectHandle, gencs.std.basic_String_viewCharacter_char_traitsCharacter.AG_getObjectHandle(str));
        }
        [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
        private static extern void ag_EnumEntryEntity_ConcreteType_onInitialize0(IntPtr ObjectHandle);
        protected override void onInitialize()
        {
            ag_EnumEntryEntity_ConcreteType_onInitialize0(mObjectHandle);
        }
        [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
        private static extern void ag_EnumEntryEntity_ConcreteType_onFirstUse0(IntPtr ObjectHandle);
        protected override void onFirstUse()
        {
            ag_EnumEntryEntity_ConcreteType_onFirstUse0(mObjectHandle);
        }
    }
}
