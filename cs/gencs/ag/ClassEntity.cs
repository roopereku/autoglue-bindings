using System.Runtime.InteropServices;
namespace gencs.ag;
public class ClassEntity : gencs.ag.TypeEntity
{
    public ClassEntity(IntPtr ObjectHandle) : base(ObjectHandle)
    {
        baseenable_shared_from_thisClassEntity = createBase_enable_shared_from_thisClassEntity();
    }
    public readonly gencs.std.enable_shared_from_thisClassEntity baseenable_shared_from_thisClassEntity;
    protected virtual gencs.std.enable_shared_from_thisClassEntity createBase_enable_shared_from_thisClassEntity()
    {
        return new gencs.std.enable_shared_from_thisClassEntity(mObjectHandle);
    }
    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    private delegate IntPtr AG_delegate_intercept_getParent0(IntPtr ObjectHandle);
    internal static IntPtr AG_intercept_getParent0(IntPtr ObjectHandle)
    {
        return gencs.ag.Entity.AG_getObjectHandle(((((GCHandle)ObjectHandle).Target) as ClassEntity).getParent());
    }
    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    private delegate IntPtr AG_delegate_intercept_resolve0(IntPtr ObjectHandle, IntPtr qualifiedName);
    internal static IntPtr AG_intercept_resolve0(IntPtr ObjectHandle, IntPtr qualifiedName)
    {
        return gencs.std.shared_ptrEntity.AG_getObjectHandle(((((GCHandle)ObjectHandle).Target) as ClassEntity).resolve(new gencs.std.basic_String_viewCharacter_char_traitsCharacter(qualifiedName)));
    }
    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    private delegate IntPtr AG_delegate_intercept_getName0(IntPtr ObjectHandle);
    internal static IntPtr AG_intercept_getName0(IntPtr ObjectHandle)
    {
        return gencs.std.basic_StringCharacter_char_traitsCharacter_allocatorCharacter.AG_getObjectHandle(((((GCHandle)ObjectHandle).Target) as ClassEntity).getName());
    }
    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    private delegate IntPtr AG_delegate_intercept_getHierarchy0(IntPtr ObjectHandle, IntPtr delimiter);
    internal static IntPtr AG_intercept_getHierarchy0(IntPtr ObjectHandle, IntPtr delimiter)
    {
        return gencs.std.basic_StringCharacter_char_traitsCharacter_allocatorCharacter.AG_getObjectHandle(((((GCHandle)ObjectHandle).Target) as ClassEntity).getHierarchy(new gencs.std.basic_StringCharacter_char_traitsCharacter_allocatorCharacter(delimiter)));
    }
    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    private delegate void AG_delegate_intercept_onList0(IntPtr ObjectHandle, IntPtr indent);
    internal static void AG_intercept_onList0(IntPtr ObjectHandle, IntPtr indent)
    {
        ((((GCHandle)ObjectHandle).Target) as ClassEntity).onList(new gencs.std.basic_String_viewCharacter_char_traitsCharacter(indent));
    }
    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    private delegate bool AG_delegate_intercept_hasName0(IntPtr ObjectHandle, IntPtr str);
    internal static bool AG_intercept_hasName0(IntPtr ObjectHandle, IntPtr str)
    {
        return ((((GCHandle)ObjectHandle).Target) as ClassEntity).hasName(new gencs.std.basic_String_viewCharacter_char_traitsCharacter(str));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern void ag_ClassEntity_AG_initializeInterceptionContext(IntPtr ObjectHandle, IntPtr AG_foreignObject, IntPtr AG_intercept_getParent0, IntPtr AG_intercept_resolve0, IntPtr AG_intercept_getName0, IntPtr AG_intercept_getHierarchy0, IntPtr AG_intercept_onList0, IntPtr AG_intercept_hasName0);
    private void AG_initializeInterceptionContext()
    {
        ag_ClassEntity_AG_initializeInterceptionContext(mObjectHandle, (IntPtr)GCHandle.Alloc(this), Marshal.GetFunctionPointerForDelegate(new AG_delegate_intercept_getParent0(AG_intercept_getParent0)), Marshal.GetFunctionPointerForDelegate(new AG_delegate_intercept_resolve0(AG_intercept_resolve0)), Marshal.GetFunctionPointerForDelegate(new AG_delegate_intercept_getName0(AG_intercept_getName0)), Marshal.GetFunctionPointerForDelegate(new AG_delegate_intercept_getHierarchy0(AG_intercept_getHierarchy0)), Marshal.GetFunctionPointerForDelegate(new AG_delegate_intercept_onList0(AG_intercept_onList0)), Marshal.GetFunctionPointerForDelegate(new AG_delegate_intercept_hasName0(AG_intercept_hasName0)));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr ag_ClassEntity_ClassEntity0(IntPtr name);
    public ClassEntity(gencs.std.basic_String_viewCharacter_char_traitsCharacter name) : this(ag_ClassEntity_ClassEntity0(gencs.std.basic_String_viewCharacter_char_traitsCharacter.AG_getObjectHandle(name)))
    {
        AG_initializeInterceptionContext();
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr ag_ClassEntity_ClassEntity1(IntPtr param1);
    public ClassEntity(gencs.ag.ClassEntity param1) : this(ag_ClassEntity_ClassEntity1(gencs.ag.ClassEntity.AG_getObjectHandle(param1)))
    {
        AG_initializeInterceptionContext();
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern void ag_ClassEntity_addNested0(IntPtr ObjectHandle, IntPtr nested);
    public void addNested(gencs.std.shared_ptrEntity nested)
    {
        ag_ClassEntity_addNested0(mObjectHandle, gencs.std.shared_ptrEntity.AG_getObjectHandle(nested));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern void ag_ClassEntity_addBaseType0(IntPtr ObjectHandle, IntPtr Base);
    public void addBaseType(gencs.std.shared_ptrTypeEntity Base)
    {
        ag_ClassEntity_addBaseType0(mObjectHandle, gencs.std.shared_ptrTypeEntity.AG_getObjectHandle(Base));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern void ag_ClassEntity_generateBaseTypes0(IntPtr ObjectHandle, IntPtr generator);
    public void generateBaseTypes(gencs.ag.BindingGenerator generator)
    {
        ag_ClassEntity_generateBaseTypes0(mObjectHandle, gencs.ag.BindingGenerator.AG_getObjectHandle(generator));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern bool ag_ClassEntity_hasBaseTypes0(IntPtr ObjectHandle);
    public bool hasBaseTypes()
    {
        return ag_ClassEntity_hasBaseTypes0(mObjectHandle);
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern int ag_ClassEntity_getBaseTypeCount0(IntPtr ObjectHandle);
    public int getBaseTypeCount()
    {
        return ag_ClassEntity_getBaseTypeCount0(mObjectHandle);
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr ag_ClassEntity_getBaseType0(IntPtr ObjectHandle, int index);
    public gencs.ag.TypeEntity getBaseType(int index)
    {
        return new gencs.ag.TypeEntity.ConcreteType(ag_ClassEntity_getBaseType0(mObjectHandle, index));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern int ag_ClassEntity_getDerivedCount0(IntPtr ObjectHandle);
    public int getDerivedCount()
    {
        return ag_ClassEntity_getDerivedCount0(mObjectHandle);
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr ag_ClassEntity_getDerived0(IntPtr ObjectHandle, int index);
    public gencs.ag.ClassEntity getDerived(int index)
    {
        return new gencs.ag.ClassEntity(ag_ClassEntity_getDerived0(mObjectHandle, index));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern void ag_ClassEntity_generateNested0(IntPtr ObjectHandle, IntPtr generator);
    public void generateNested(gencs.ag.BindingGenerator generator)
    {
        ag_ClassEntity_generateNested0(mObjectHandle, gencs.ag.BindingGenerator.AG_getObjectHandle(generator));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern bool ag_ClassEntity_isAbstract0(IntPtr ObjectHandle);
    public bool isAbstract()
    {
        return ag_ClassEntity_isAbstract0(mObjectHandle);
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern void ag_ClassEntity_generateConcreteType0(IntPtr ObjectHandle, IntPtr generator);
    public void generateConcreteType(gencs.ag.BindingGenerator generator)
    {
        ag_ClassEntity_generateConcreteType0(mObjectHandle, gencs.ag.BindingGenerator.AG_getObjectHandle(generator));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr ag_ClassEntity_getConcreteType0(IntPtr ObjectHandle);
    public gencs.std.shared_ptrClassEntity getConcreteType()
    {
        return new gencs.std.shared_ptrClassEntity(ag_ClassEntity_getConcreteType0(mObjectHandle));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern bool ag_ClassEntity_isConcreteType0(IntPtr ObjectHandle);
    public bool isConcreteType()
    {
        return ag_ClassEntity_isConcreteType0(mObjectHandle);
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern void ag_ClassEntity_generateInterceptionFunctions0(IntPtr ObjectHandle, IntPtr generator);
    public void generateInterceptionFunctions(gencs.ag.BindingGenerator generator)
    {
        ag_ClassEntity_generateInterceptionFunctions0(mObjectHandle, gencs.ag.BindingGenerator.AG_getObjectHandle(generator));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern void ag_ClassEntity_generateInterceptionContext0(IntPtr ObjectHandle, IntPtr generator);
    public void generateInterceptionContext(gencs.ag.BindingGenerator generator)
    {
        ag_ClassEntity_generateInterceptionContext0(mObjectHandle, gencs.ag.BindingGenerator.AG_getObjectHandle(generator));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern bool ag_ClassEntity_matchType0(IntPtr entity);
    public static bool matchType(gencs.ag.Entity entity)
    {
        return ag_ClassEntity_matchType0(gencs.ag.Entity.AG_getObjectHandle(entity));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr ag_ClassEntity_findOverridableFromBase0(IntPtr ObjectHandle, IntPtr entity);
    public gencs.std.shared_ptrFunctionEntity findOverridableFromBase(gencs.ag.FunctionEntity entity)
    {
        return new gencs.std.shared_ptrFunctionEntity(ag_ClassEntity_findOverridableFromBase0(mObjectHandle, gencs.ag.FunctionEntity.AG_getObjectHandle(entity)));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr ag_ClassEntity_getTypeString0(IntPtr ObjectHandle);
    public override string getTypeString()
    {
        return Marshal.PtrToStringAnsi(ag_ClassEntity_getTypeString0(mObjectHandle));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern void ag_ClassEntity_onGenerate0(IntPtr ObjectHandle, IntPtr generator);
    protected override void onGenerate(gencs.ag.BindingGenerator generator)
    {
        ag_ClassEntity_onGenerate0(mObjectHandle, gencs.ag.BindingGenerator.AG_getObjectHandle(generator));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern void ag_ClassEntity_onFirstUse0(IntPtr ObjectHandle);
    protected override void onFirstUse()
    {
        ag_ClassEntity_onFirstUse0(mObjectHandle);
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern void ag_ClassEntity_onInitialize0(IntPtr ObjectHandle);
    protected override void onInitialize()
    {
        ag_ClassEntity_onInitialize0(mObjectHandle);
    }
    public class ConcreteType : gencs.ag.ClassEntity
    {
        public ConcreteType(IntPtr ObjectHandle) : base(ObjectHandle)
        {
        }
        [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
        private static extern IntPtr ag_ClassEntity_ConcreteType_getParent0(IntPtr ObjectHandle);
        public override gencs.ag.Entity getParent()
        {
            return new gencs.ag.Entity.ConcreteType(ag_ClassEntity_ConcreteType_getParent0(mObjectHandle));
        }
        [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
        private static extern IntPtr ag_ClassEntity_ConcreteType_resolve0(IntPtr ObjectHandle, IntPtr qualifiedName);
        public override gencs.std.shared_ptrEntity resolve(gencs.std.basic_String_viewCharacter_char_traitsCharacter qualifiedName)
        {
            return new gencs.std.shared_ptrEntity(ag_ClassEntity_ConcreteType_resolve0(mObjectHandle, gencs.std.basic_String_viewCharacter_char_traitsCharacter.AG_getObjectHandle(qualifiedName)));
        }
        [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
        private static extern IntPtr ag_ClassEntity_ConcreteType_getName0(IntPtr ObjectHandle);
        public override gencs.std.basic_StringCharacter_char_traitsCharacter_allocatorCharacter getName()
        {
            return new gencs.std.basic_StringCharacter_char_traitsCharacter_allocatorCharacter(ag_ClassEntity_ConcreteType_getName0(mObjectHandle));
        }
        [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
        private static extern IntPtr ag_ClassEntity_ConcreteType_getHierarchy0(IntPtr ObjectHandle, IntPtr delimiter);
        public override gencs.std.basic_StringCharacter_char_traitsCharacter_allocatorCharacter getHierarchy(gencs.std.basic_StringCharacter_char_traitsCharacter_allocatorCharacter delimiter)
        {
            return new gencs.std.basic_StringCharacter_char_traitsCharacter_allocatorCharacter(ag_ClassEntity_ConcreteType_getHierarchy0(mObjectHandle, gencs.std.basic_StringCharacter_char_traitsCharacter_allocatorCharacter.AG_getObjectHandle(delimiter)));
        }
        [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
        private static extern void ag_ClassEntity_ConcreteType_onList0(IntPtr ObjectHandle, IntPtr indent);
        protected override void onList(gencs.std.basic_String_viewCharacter_char_traitsCharacter indent)
        {
            ag_ClassEntity_ConcreteType_onList0(mObjectHandle, gencs.std.basic_String_viewCharacter_char_traitsCharacter.AG_getObjectHandle(indent));
        }
        [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
        private static extern bool ag_ClassEntity_ConcreteType_hasName0(IntPtr ObjectHandle, IntPtr str);
        protected override bool hasName(gencs.std.basic_String_viewCharacter_char_traitsCharacter str)
        {
            return ag_ClassEntity_ConcreteType_hasName0(mObjectHandle, gencs.std.basic_String_viewCharacter_char_traitsCharacter.AG_getObjectHandle(str));
        }
    }
}
