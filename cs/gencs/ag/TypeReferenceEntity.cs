using System.Runtime.InteropServices;
namespace gencs.ag;
public class TypeReferenceEntity : gencs.ag.Entity
{
    public TypeReferenceEntity(IntPtr ObjectHandle) : base(ObjectHandle)
    {
    }
    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    private delegate IntPtr AG_delegate_intercept_getParent0(IntPtr ObjectHandle);
    internal static IntPtr AG_intercept_getParent0(IntPtr ObjectHandle)
    {
        return gencs.ag.Entity.AG_getObjectHandle(((((GCHandle)ObjectHandle).Target) as TypeReferenceEntity).getParent());
    }
    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    private delegate IntPtr AG_delegate_intercept_resolve0(IntPtr ObjectHandle, IntPtr qualifiedName);
    internal static IntPtr AG_intercept_resolve0(IntPtr ObjectHandle, IntPtr qualifiedName)
    {
        return gencs.std.shared_ptrEntity.AG_getObjectHandle(((((GCHandle)ObjectHandle).Target) as TypeReferenceEntity).resolve(new gencs.std.basic_String_viewCharacter_char_traitsCharacter(qualifiedName)));
    }
    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    private delegate IntPtr AG_delegate_intercept_getName0(IntPtr ObjectHandle);
    internal static IntPtr AG_intercept_getName0(IntPtr ObjectHandle)
    {
        return gencs.std.basic_StringCharacter_char_traitsCharacter_allocatorCharacter.AG_getObjectHandle(((((GCHandle)ObjectHandle).Target) as TypeReferenceEntity).getName());
    }
    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    private delegate IntPtr AG_delegate_intercept_getHierarchy0(IntPtr ObjectHandle, IntPtr delimiter);
    internal static IntPtr AG_intercept_getHierarchy0(IntPtr ObjectHandle, IntPtr delimiter)
    {
        return gencs.std.basic_StringCharacter_char_traitsCharacter_allocatorCharacter.AG_getObjectHandle(((((GCHandle)ObjectHandle).Target) as TypeReferenceEntity).getHierarchy(new gencs.std.basic_StringCharacter_char_traitsCharacter_allocatorCharacter(delimiter)));
    }
    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    private delegate bool AG_delegate_intercept_hasName0(IntPtr ObjectHandle, IntPtr str);
    internal static bool AG_intercept_hasName0(IntPtr ObjectHandle, IntPtr str)
    {
        return ((((GCHandle)ObjectHandle).Target) as TypeReferenceEntity).hasName(new gencs.std.basic_String_viewCharacter_char_traitsCharacter(str));
    }
    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    private delegate void AG_delegate_intercept_onInitialize0(IntPtr ObjectHandle);
    internal static void AG_intercept_onInitialize0(IntPtr ObjectHandle)
    {
        ((((GCHandle)ObjectHandle).Target) as TypeReferenceEntity).onInitialize();
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern void ag_TypeReferenceEntity_AG_initializeInterceptionContext(IntPtr ObjectHandle, IntPtr AG_foreignObject, IntPtr AG_intercept_getParent0, IntPtr AG_intercept_resolve0, IntPtr AG_intercept_getName0, IntPtr AG_intercept_getHierarchy0, IntPtr AG_intercept_hasName0, IntPtr AG_intercept_onInitialize0);
    private void AG_initializeInterceptionContext()
    {
        ag_TypeReferenceEntity_AG_initializeInterceptionContext(mObjectHandle, (IntPtr)GCHandle.Alloc(this), Marshal.GetFunctionPointerForDelegate(new AG_delegate_intercept_getParent0(AG_intercept_getParent0)), Marshal.GetFunctionPointerForDelegate(new AG_delegate_intercept_resolve0(AG_intercept_resolve0)), Marshal.GetFunctionPointerForDelegate(new AG_delegate_intercept_getName0(AG_intercept_getName0)), Marshal.GetFunctionPointerForDelegate(new AG_delegate_intercept_getHierarchy0(AG_intercept_getHierarchy0)), Marshal.GetFunctionPointerForDelegate(new AG_delegate_intercept_hasName0(AG_intercept_hasName0)), Marshal.GetFunctionPointerForDelegate(new AG_delegate_intercept_onInitialize0(AG_intercept_onInitialize0)));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr ag_TypeReferenceEntity_TypeReferenceEntity0(IntPtr name, IntPtr type, bool reference);
    public TypeReferenceEntity(gencs.std.basic_String_viewCharacter_char_traitsCharacter name, gencs.std.shared_ptrTypeEntity type, bool reference) : this(ag_TypeReferenceEntity_TypeReferenceEntity0(gencs.std.basic_String_viewCharacter_char_traitsCharacter.AG_getObjectHandle(name), gencs.std.shared_ptrTypeEntity.AG_getObjectHandle(type), reference))
    {
        AG_initializeInterceptionContext();
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr ag_TypeReferenceEntity_TypeReferenceEntity1(IntPtr param1);
    public TypeReferenceEntity(gencs.ag.TypeReferenceEntity param1) : this(ag_TypeReferenceEntity_TypeReferenceEntity1(gencs.ag.TypeReferenceEntity.AG_getObjectHandle(param1)))
    {
        AG_initializeInterceptionContext();
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern bool ag_TypeReferenceEntity_isIdentical0(IntPtr ObjectHandle, IntPtr other);
    public bool isIdentical(gencs.ag.TypeReferenceEntity other)
    {
        return ag_TypeReferenceEntity_isIdentical0(mObjectHandle, gencs.ag.TypeReferenceEntity.AG_getObjectHandle(other));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern int ag_TypeReferenceEntity_getType0(IntPtr ObjectHandle);
    public new gencs.ag.TypeEntity.Type getType()
    {
        return (gencs.ag.TypeEntity.Type)ag_TypeReferenceEntity_getType0(mObjectHandle);
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr ag_TypeReferenceEntity_getReferred0(IntPtr ObjectHandle);
    public gencs.ag.TypeEntity getReferred()
    {
        return new gencs.ag.TypeEntity.ConcreteType(ag_TypeReferenceEntity_getReferred0(mObjectHandle));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr ag_TypeReferenceEntity_getReferredPtr0(IntPtr ObjectHandle);
    public gencs.std.shared_ptrTypeEntity getReferredPtr()
    {
        return new gencs.std.shared_ptrTypeEntity(ag_TypeReferenceEntity_getReferredPtr0(mObjectHandle));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern bool ag_TypeReferenceEntity_isClass0(IntPtr ObjectHandle);
    public bool isClass()
    {
        return ag_TypeReferenceEntity_isClass0(mObjectHandle);
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr ag_TypeReferenceEntity_getClassType0(IntPtr ObjectHandle);
    public gencs.ag.ClassEntity getClassType()
    {
        return new gencs.ag.ClassEntity(ag_TypeReferenceEntity_getClassType0(mObjectHandle));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern bool ag_TypeReferenceEntity_isEnum0(IntPtr ObjectHandle);
    public bool isEnum()
    {
        return ag_TypeReferenceEntity_isEnum0(mObjectHandle);
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr ag_TypeReferenceEntity_getEnumType0(IntPtr ObjectHandle);
    public gencs.ag.EnumEntity getEnumType()
    {
        return new gencs.ag.EnumEntity(ag_TypeReferenceEntity_getEnumType0(mObjectHandle));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern bool ag_TypeReferenceEntity_isAlias0(IntPtr ObjectHandle);
    public bool isAlias()
    {
        return ag_TypeReferenceEntity_isAlias0(mObjectHandle);
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr ag_TypeReferenceEntity_getAliasType0(IntPtr ObjectHandle);
    public gencs.ag.TypeAliasEntity getAliasType()
    {
        return new gencs.ag.TypeAliasEntity(ag_TypeReferenceEntity_getAliasType0(mObjectHandle));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern bool ag_TypeReferenceEntity_isPrimitive0(IntPtr ObjectHandle);
    public bool isPrimitive()
    {
        return ag_TypeReferenceEntity_isPrimitive0(mObjectHandle);
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr ag_TypeReferenceEntity_getPrimitiveType0(IntPtr ObjectHandle);
    public gencs.ag.PrimitiveEntity getPrimitiveType()
    {
        return new gencs.ag.PrimitiveEntity(ag_TypeReferenceEntity_getPrimitiveType0(mObjectHandle));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern bool ag_TypeReferenceEntity_isReference0(IntPtr ObjectHandle);
    public bool isReference()
    {
        return ag_TypeReferenceEntity_isReference0(mObjectHandle);
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr ag_TypeReferenceEntity_getAsPOD0(IntPtr ObjectHandle);
    public gencs.ag.TypeReferenceEntity getAsPOD()
    {
        return new gencs.ag.TypeReferenceEntity(ag_TypeReferenceEntity_getAsPOD0(mObjectHandle));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr ag_TypeReferenceEntity_getTypeString0(IntPtr ObjectHandle);
    public override string getTypeString()
    {
        return Marshal.PtrToStringAnsi(ag_TypeReferenceEntity_getTypeString0(mObjectHandle));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern void ag_TypeReferenceEntity_onGenerate0(IntPtr ObjectHandle, IntPtr generator);
    protected override void onGenerate(gencs.ag.BindingGenerator generator)
    {
        ag_TypeReferenceEntity_onGenerate0(mObjectHandle, gencs.ag.BindingGenerator.AG_getObjectHandle(generator));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern void ag_TypeReferenceEntity_onFirstUse0(IntPtr ObjectHandle);
    protected override void onFirstUse()
    {
        ag_TypeReferenceEntity_onFirstUse0(mObjectHandle);
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern void ag_TypeReferenceEntity_onList0(IntPtr ObjectHandle, IntPtr indent);
    protected override void onList(gencs.std.basic_String_viewCharacter_char_traitsCharacter indent)
    {
        ag_TypeReferenceEntity_onList0(mObjectHandle, gencs.std.basic_String_viewCharacter_char_traitsCharacter.AG_getObjectHandle(indent));
    }
    public class ConcreteType : gencs.ag.TypeReferenceEntity
    {
        public ConcreteType(IntPtr ObjectHandle) : base(ObjectHandle)
        {
        }
        [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
        private static extern IntPtr ag_TypeReferenceEntity_ConcreteType_getParent0(IntPtr ObjectHandle);
        public override gencs.ag.Entity getParent()
        {
            return new gencs.ag.Entity.ConcreteType(ag_TypeReferenceEntity_ConcreteType_getParent0(mObjectHandle));
        }
        [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
        private static extern IntPtr ag_TypeReferenceEntity_ConcreteType_resolve0(IntPtr ObjectHandle, IntPtr qualifiedName);
        public override gencs.std.shared_ptrEntity resolve(gencs.std.basic_String_viewCharacter_char_traitsCharacter qualifiedName)
        {
            return new gencs.std.shared_ptrEntity(ag_TypeReferenceEntity_ConcreteType_resolve0(mObjectHandle, gencs.std.basic_String_viewCharacter_char_traitsCharacter.AG_getObjectHandle(qualifiedName)));
        }
        [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
        private static extern IntPtr ag_TypeReferenceEntity_ConcreteType_getName0(IntPtr ObjectHandle);
        public override gencs.std.basic_StringCharacter_char_traitsCharacter_allocatorCharacter getName()
        {
            return new gencs.std.basic_StringCharacter_char_traitsCharacter_allocatorCharacter(ag_TypeReferenceEntity_ConcreteType_getName0(mObjectHandle));
        }
        [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
        private static extern IntPtr ag_TypeReferenceEntity_ConcreteType_getHierarchy0(IntPtr ObjectHandle, IntPtr delimiter);
        public override gencs.std.basic_StringCharacter_char_traitsCharacter_allocatorCharacter getHierarchy(gencs.std.basic_StringCharacter_char_traitsCharacter_allocatorCharacter delimiter)
        {
            return new gencs.std.basic_StringCharacter_char_traitsCharacter_allocatorCharacter(ag_TypeReferenceEntity_ConcreteType_getHierarchy0(mObjectHandle, gencs.std.basic_StringCharacter_char_traitsCharacter_allocatorCharacter.AG_getObjectHandle(delimiter)));
        }
        [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
        private static extern bool ag_TypeReferenceEntity_ConcreteType_hasName0(IntPtr ObjectHandle, IntPtr str);
        protected override bool hasName(gencs.std.basic_String_viewCharacter_char_traitsCharacter str)
        {
            return ag_TypeReferenceEntity_ConcreteType_hasName0(mObjectHandle, gencs.std.basic_String_viewCharacter_char_traitsCharacter.AG_getObjectHandle(str));
        }
        [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
        private static extern void ag_TypeReferenceEntity_ConcreteType_onInitialize0(IntPtr ObjectHandle);
        protected override void onInitialize()
        {
            ag_TypeReferenceEntity_ConcreteType_onInitialize0(mObjectHandle);
        }
    }
}
