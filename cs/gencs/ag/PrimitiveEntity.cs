using System.Runtime.InteropServices;
namespace gencs.ag;
public class PrimitiveEntity : gencs.ag.TypeEntity
{
    public PrimitiveEntity(IntPtr ObjectHandle) : base(ObjectHandle)
    {
    }
    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    private delegate IntPtr AG_delegate_intercept_getParent0(IntPtr ObjectHandle);
    internal static IntPtr AG_intercept_getParent0(IntPtr ObjectHandle)
    {
        return gencs.ag.Entity.AG_getObjectHandle(((((GCHandle)ObjectHandle).Target) as PrimitiveEntity).getParent());
    }
    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    private delegate IntPtr AG_delegate_intercept_resolve0(IntPtr ObjectHandle, IntPtr qualifiedName);
    internal static IntPtr AG_intercept_resolve0(IntPtr ObjectHandle, IntPtr qualifiedName)
    {
        return gencs.std.shared_ptrEntity.AG_getObjectHandle(((((GCHandle)ObjectHandle).Target) as PrimitiveEntity).resolve(new gencs.std.basic_String_viewCharacter_char_traitsCharacter(qualifiedName)));
    }
    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    private delegate IntPtr AG_delegate_intercept_getName0(IntPtr ObjectHandle);
    internal static IntPtr AG_intercept_getName0(IntPtr ObjectHandle)
    {
        return gencs.std.basic_StringCharacter_char_traitsCharacter_allocatorCharacter.AG_getObjectHandle(((((GCHandle)ObjectHandle).Target) as PrimitiveEntity).getName());
    }
    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    private delegate IntPtr AG_delegate_intercept_getHierarchy0(IntPtr ObjectHandle, IntPtr delimiter);
    internal static IntPtr AG_intercept_getHierarchy0(IntPtr ObjectHandle, IntPtr delimiter)
    {
        return gencs.std.basic_StringCharacter_char_traitsCharacter_allocatorCharacter.AG_getObjectHandle(((((GCHandle)ObjectHandle).Target) as PrimitiveEntity).getHierarchy(new gencs.std.basic_StringCharacter_char_traitsCharacter_allocatorCharacter(delimiter)));
    }
    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    private delegate void AG_delegate_intercept_onList0(IntPtr ObjectHandle, IntPtr indent);
    internal static void AG_intercept_onList0(IntPtr ObjectHandle, IntPtr indent)
    {
        ((((GCHandle)ObjectHandle).Target) as PrimitiveEntity).onList(new gencs.std.basic_String_viewCharacter_char_traitsCharacter(indent));
    }
    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    private delegate bool AG_delegate_intercept_hasName0(IntPtr ObjectHandle, IntPtr str);
    internal static bool AG_intercept_hasName0(IntPtr ObjectHandle, IntPtr str)
    {
        return ((((GCHandle)ObjectHandle).Target) as PrimitiveEntity).hasName(new gencs.std.basic_String_viewCharacter_char_traitsCharacter(str));
    }
    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    private delegate void AG_delegate_intercept_onInitialize0(IntPtr ObjectHandle);
    internal static void AG_intercept_onInitialize0(IntPtr ObjectHandle)
    {
        ((((GCHandle)ObjectHandle).Target) as PrimitiveEntity).onInitialize();
    }
    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    private delegate void AG_delegate_intercept_onFirstUse0(IntPtr ObjectHandle);
    internal static void AG_intercept_onFirstUse0(IntPtr ObjectHandle)
    {
        ((((GCHandle)ObjectHandle).Target) as PrimitiveEntity).onFirstUse();
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern void ag_PrimitiveEntity_AG_initializeInterceptionContext(IntPtr ObjectHandle, IntPtr AG_foreignObject, IntPtr AG_intercept_getParent0, IntPtr AG_intercept_resolve0, IntPtr AG_intercept_getName0, IntPtr AG_intercept_getHierarchy0, IntPtr AG_intercept_onList0, IntPtr AG_intercept_hasName0, IntPtr AG_intercept_onInitialize0, IntPtr AG_intercept_onFirstUse0);
    private void AG_initializeInterceptionContext()
    {
        ag_PrimitiveEntity_AG_initializeInterceptionContext(mObjectHandle, (IntPtr)GCHandle.Alloc(this), Marshal.GetFunctionPointerForDelegate(new AG_delegate_intercept_getParent0(AG_intercept_getParent0)), Marshal.GetFunctionPointerForDelegate(new AG_delegate_intercept_resolve0(AG_intercept_resolve0)), Marshal.GetFunctionPointerForDelegate(new AG_delegate_intercept_getName0(AG_intercept_getName0)), Marshal.GetFunctionPointerForDelegate(new AG_delegate_intercept_getHierarchy0(AG_intercept_getHierarchy0)), Marshal.GetFunctionPointerForDelegate(new AG_delegate_intercept_onList0(AG_intercept_onList0)), Marshal.GetFunctionPointerForDelegate(new AG_delegate_intercept_hasName0(AG_intercept_hasName0)), Marshal.GetFunctionPointerForDelegate(new AG_delegate_intercept_onInitialize0(AG_intercept_onInitialize0)), Marshal.GetFunctionPointerForDelegate(new AG_delegate_intercept_onFirstUse0(AG_intercept_onFirstUse0)));
    }
    public new enum Type : int
    {
        ObjectHandle = 0,
        Integer = 1,
        Float = 2,
        Double = 3,
        Boolean = 4,
        Character = 5,
        String = 6,
        Void = 7
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr ag_PrimitiveEntity_getObjectHandle0();
    public static gencs.std.shared_ptrPrimitiveEntity getObjectHandle()
    {
        return new gencs.std.shared_ptrPrimitiveEntity(ag_PrimitiveEntity_getObjectHandle0());
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr ag_PrimitiveEntity_getInteger0();
    public static gencs.std.shared_ptrPrimitiveEntity getInteger()
    {
        return new gencs.std.shared_ptrPrimitiveEntity(ag_PrimitiveEntity_getInteger0());
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr ag_PrimitiveEntity_getFloat0();
    public static gencs.std.shared_ptrPrimitiveEntity getFloat()
    {
        return new gencs.std.shared_ptrPrimitiveEntity(ag_PrimitiveEntity_getFloat0());
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr ag_PrimitiveEntity_getDouble0();
    public static gencs.std.shared_ptrPrimitiveEntity getDouble()
    {
        return new gencs.std.shared_ptrPrimitiveEntity(ag_PrimitiveEntity_getDouble0());
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr ag_PrimitiveEntity_getBoolean0();
    public static gencs.std.shared_ptrPrimitiveEntity getBoolean()
    {
        return new gencs.std.shared_ptrPrimitiveEntity(ag_PrimitiveEntity_getBoolean0());
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr ag_PrimitiveEntity_getCharacter0();
    public static gencs.std.shared_ptrPrimitiveEntity getCharacter()
    {
        return new gencs.std.shared_ptrPrimitiveEntity(ag_PrimitiveEntity_getCharacter0());
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr ag_PrimitiveEntity_getString0();
    public static gencs.std.shared_ptrPrimitiveEntity getString()
    {
        return new gencs.std.shared_ptrPrimitiveEntity(ag_PrimitiveEntity_getString0());
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr ag_PrimitiveEntity_getVoid0();
    public static gencs.std.shared_ptrPrimitiveEntity getVoid()
    {
        return new gencs.std.shared_ptrPrimitiveEntity(ag_PrimitiveEntity_getVoid0());
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern int ag_PrimitiveEntity_getType0(IntPtr ObjectHandle);
    public new gencs.ag.PrimitiveEntity.Type getType()
    {
        return (gencs.ag.PrimitiveEntity.Type)ag_PrimitiveEntity_getType0(mObjectHandle);
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr ag_PrimitiveEntity_getTypeString0(IntPtr ObjectHandle);
    public override string getTypeString()
    {
        return Marshal.PtrToStringAnsi(ag_PrimitiveEntity_getTypeString0(mObjectHandle));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern void ag_PrimitiveEntity_onGenerate0(IntPtr ObjectHandle, IntPtr generator);
    protected override void onGenerate(gencs.ag.BindingGenerator generator)
    {
        ag_PrimitiveEntity_onGenerate0(mObjectHandle, gencs.ag.BindingGenerator.AG_getObjectHandle(generator));
    }
    public class ConcreteType : gencs.ag.PrimitiveEntity
    {
        public ConcreteType(IntPtr ObjectHandle) : base(ObjectHandle)
        {
        }
        [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
        private static extern IntPtr ag_PrimitiveEntity_ConcreteType_getParent0(IntPtr ObjectHandle);
        public override gencs.ag.Entity getParent()
        {
            return new gencs.ag.Entity.ConcreteType(ag_PrimitiveEntity_ConcreteType_getParent0(mObjectHandle));
        }
        [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
        private static extern IntPtr ag_PrimitiveEntity_ConcreteType_resolve0(IntPtr ObjectHandle, IntPtr qualifiedName);
        public override gencs.std.shared_ptrEntity resolve(gencs.std.basic_String_viewCharacter_char_traitsCharacter qualifiedName)
        {
            return new gencs.std.shared_ptrEntity(ag_PrimitiveEntity_ConcreteType_resolve0(mObjectHandle, gencs.std.basic_String_viewCharacter_char_traitsCharacter.AG_getObjectHandle(qualifiedName)));
        }
        [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
        private static extern IntPtr ag_PrimitiveEntity_ConcreteType_getName0(IntPtr ObjectHandle);
        public override gencs.std.basic_StringCharacter_char_traitsCharacter_allocatorCharacter getName()
        {
            return new gencs.std.basic_StringCharacter_char_traitsCharacter_allocatorCharacter(ag_PrimitiveEntity_ConcreteType_getName0(mObjectHandle));
        }
        [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
        private static extern IntPtr ag_PrimitiveEntity_ConcreteType_getHierarchy0(IntPtr ObjectHandle, IntPtr delimiter);
        public override gencs.std.basic_StringCharacter_char_traitsCharacter_allocatorCharacter getHierarchy(gencs.std.basic_StringCharacter_char_traitsCharacter_allocatorCharacter delimiter)
        {
            return new gencs.std.basic_StringCharacter_char_traitsCharacter_allocatorCharacter(ag_PrimitiveEntity_ConcreteType_getHierarchy0(mObjectHandle, gencs.std.basic_StringCharacter_char_traitsCharacter_allocatorCharacter.AG_getObjectHandle(delimiter)));
        }
        [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
        private static extern void ag_PrimitiveEntity_ConcreteType_onList0(IntPtr ObjectHandle, IntPtr indent);
        protected override void onList(gencs.std.basic_String_viewCharacter_char_traitsCharacter indent)
        {
            ag_PrimitiveEntity_ConcreteType_onList0(mObjectHandle, gencs.std.basic_String_viewCharacter_char_traitsCharacter.AG_getObjectHandle(indent));
        }
        [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
        private static extern bool ag_PrimitiveEntity_ConcreteType_hasName0(IntPtr ObjectHandle, IntPtr str);
        protected override bool hasName(gencs.std.basic_String_viewCharacter_char_traitsCharacter str)
        {
            return ag_PrimitiveEntity_ConcreteType_hasName0(mObjectHandle, gencs.std.basic_String_viewCharacter_char_traitsCharacter.AG_getObjectHandle(str));
        }
        [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
        private static extern void ag_PrimitiveEntity_ConcreteType_onInitialize0(IntPtr ObjectHandle);
        protected override void onInitialize()
        {
            ag_PrimitiveEntity_ConcreteType_onInitialize0(mObjectHandle);
        }
        [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
        private static extern void ag_PrimitiveEntity_ConcreteType_onFirstUse0(IntPtr ObjectHandle);
        protected override void onFirstUse()
        {
            ag_PrimitiveEntity_ConcreteType_onFirstUse0(mObjectHandle);
        }
    }
}
