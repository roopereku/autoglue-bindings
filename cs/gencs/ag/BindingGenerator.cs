using System.Runtime.InteropServices;
namespace gencs.ag;
public class BindingGenerator
{
    protected IntPtr mObjectHandle;
    public static IntPtr AG_getObjectHandle(gencs.ag.BindingGenerator obj)
    {
        return obj.mObjectHandle;
    }
    public BindingGenerator(IntPtr ObjectHandle)
    {
        mObjectHandle = ObjectHandle;
    }
    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    private delegate void AG_delegate_intercept_generateClass0(IntPtr ObjectHandle, IntPtr entity);
    internal static void AG_intercept_generateClass0(IntPtr ObjectHandle, IntPtr entity)
    {
        ((((GCHandle)ObjectHandle).Target) as BindingGenerator).generateClass(new gencs.ag.ClassEntity(entity));
    }
    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    private delegate void AG_delegate_intercept_generateEnum0(IntPtr ObjectHandle, IntPtr entity);
    internal static void AG_intercept_generateEnum0(IntPtr ObjectHandle, IntPtr entity)
    {
        ((((GCHandle)ObjectHandle).Target) as BindingGenerator).generateEnum(new gencs.ag.EnumEntity(entity));
    }
    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    private delegate void AG_delegate_intercept_generateEnumEntry0(IntPtr ObjectHandle, IntPtr entity);
    internal static void AG_intercept_generateEnumEntry0(IntPtr ObjectHandle, IntPtr entity)
    {
        ((((GCHandle)ObjectHandle).Target) as BindingGenerator).generateEnumEntry(new gencs.ag.EnumEntryEntity(entity));
    }
    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    private delegate void AG_delegate_intercept_generateFunction0(IntPtr ObjectHandle, IntPtr entity);
    internal static void AG_intercept_generateFunction0(IntPtr ObjectHandle, IntPtr entity)
    {
        ((((GCHandle)ObjectHandle).Target) as BindingGenerator).generateFunction(new gencs.ag.FunctionEntity(entity));
    }
    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    private delegate void AG_delegate_intercept_generateTypeReference0(IntPtr ObjectHandle, IntPtr entity);
    internal static void AG_intercept_generateTypeReference0(IntPtr ObjectHandle, IntPtr entity)
    {
        ((((GCHandle)ObjectHandle).Target) as BindingGenerator).generateTypeReference(new gencs.ag.TypeReferenceEntity(entity));
    }
    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    private delegate void AG_delegate_intercept_generateTypeAlias0(IntPtr ObjectHandle, IntPtr entity);
    internal static void AG_intercept_generateTypeAlias0(IntPtr ObjectHandle, IntPtr entity)
    {
        ((((GCHandle)ObjectHandle).Target) as BindingGenerator).generateTypeAlias(new gencs.ag.TypeAliasEntity(entity));
    }
    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    private delegate bool AG_delegate_intercept_generateBaseType0(IntPtr ObjectHandle, IntPtr entity, int index);
    internal static bool AG_intercept_generateBaseType0(IntPtr ObjectHandle, IntPtr entity, int index)
    {
        return ((((GCHandle)ObjectHandle).Target) as BindingGenerator).generateBaseType(new gencs.ag.TypeEntity.ConcreteType(entity), index);
    }
    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    private delegate void AG_delegate_intercept_generateNamedScope0(IntPtr ObjectHandle, IntPtr entity);
    internal static void AG_intercept_generateNamedScope0(IntPtr ObjectHandle, IntPtr entity)
    {
        ((((GCHandle)ObjectHandle).Target) as BindingGenerator).generateNamedScope(new gencs.ag.ScopeEntity(entity));
    }
    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    private delegate void AG_delegate_intercept_generateArgumentSeparator0(IntPtr ObjectHandle);
    internal static void AG_intercept_generateArgumentSeparator0(IntPtr ObjectHandle)
    {
        ((((GCHandle)ObjectHandle).Target) as BindingGenerator).generateArgumentSeparator();
    }
    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    private delegate bool AG_delegate_intercept_generateReturnStatement0(IntPtr ObjectHandle, IntPtr entity, IntPtr target);
    internal static bool AG_intercept_generateReturnStatement0(IntPtr ObjectHandle, IntPtr entity, IntPtr target)
    {
        return ((((GCHandle)ObjectHandle).Target) as BindingGenerator).generateReturnStatement(new gencs.ag.TypeReferenceEntity(entity), new gencs.ag.FunctionEntity(target));
    }
    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    private delegate void AG_delegate_intercept_generateBridgeCall0(IntPtr ObjectHandle, IntPtr entity);
    internal static void AG_intercept_generateBridgeCall0(IntPtr ObjectHandle, IntPtr entity)
    {
        ((((GCHandle)ObjectHandle).Target) as BindingGenerator).generateBridgeCall(new gencs.ag.FunctionEntity(entity));
    }
    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    private delegate void AG_delegate_intercept_generateInterceptionFunction0(IntPtr ObjectHandle, IntPtr entity, IntPtr parentClass);
    internal static void AG_intercept_generateInterceptionFunction0(IntPtr ObjectHandle, IntPtr entity, IntPtr parentClass)
    {
        ((((GCHandle)ObjectHandle).Target) as BindingGenerator).generateInterceptionFunction(new gencs.ag.FunctionEntity(entity), new gencs.ag.ClassEntity(parentClass));
    }
    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    private delegate void AG_delegate_intercept_generateInterceptionContext0(IntPtr ObjectHandle, IntPtr entity);
    internal static void AG_intercept_generateInterceptionContext0(IntPtr ObjectHandle, IntPtr entity)
    {
        ((((GCHandle)ObjectHandle).Target) as BindingGenerator).generateInterceptionContext(new gencs.ag.ClassEntity(entity));
    }
    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    private delegate IntPtr AG_delegate_intercept_getObjectHandleName0(IntPtr ObjectHandle);
    internal static IntPtr AG_intercept_getObjectHandleName0(IntPtr ObjectHandle)
    {
        return gencs.std.basic_String_viewCharacter_char_traitsCharacter.AG_getObjectHandle(((((GCHandle)ObjectHandle).Target) as BindingGenerator).getObjectHandleName());
    }
    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    private delegate void AG_delegate_intercept_initializeGenerationContext0(IntPtr ObjectHandle, IntPtr entity);
    internal static void AG_intercept_initializeGenerationContext0(IntPtr ObjectHandle, IntPtr entity)
    {
        ((((GCHandle)ObjectHandle).Target) as BindingGenerator).initializeGenerationContext(new gencs.ag.Entity.ConcreteType(entity));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern void ag_BindingGenerator_AG_initializeInterceptionContext(IntPtr ObjectHandle, IntPtr AG_foreignObject, IntPtr AG_intercept_generateClass0, IntPtr AG_intercept_generateEnum0, IntPtr AG_intercept_generateEnumEntry0, IntPtr AG_intercept_generateFunction0, IntPtr AG_intercept_generateTypeReference0, IntPtr AG_intercept_generateTypeAlias0, IntPtr AG_intercept_generateBaseType0, IntPtr AG_intercept_generateNamedScope0, IntPtr AG_intercept_generateArgumentSeparator0, IntPtr AG_intercept_generateReturnStatement0, IntPtr AG_intercept_generateBridgeCall0, IntPtr AG_intercept_generateInterceptionFunction0, IntPtr AG_intercept_generateInterceptionContext0, IntPtr AG_intercept_getObjectHandleName0, IntPtr AG_intercept_initializeGenerationContext0);
    private void AG_initializeInterceptionContext()
    {
        ag_BindingGenerator_AG_initializeInterceptionContext(mObjectHandle, (IntPtr)GCHandle.Alloc(this), Marshal.GetFunctionPointerForDelegate(new AG_delegate_intercept_generateClass0(AG_intercept_generateClass0)), Marshal.GetFunctionPointerForDelegate(new AG_delegate_intercept_generateEnum0(AG_intercept_generateEnum0)), Marshal.GetFunctionPointerForDelegate(new AG_delegate_intercept_generateEnumEntry0(AG_intercept_generateEnumEntry0)), Marshal.GetFunctionPointerForDelegate(new AG_delegate_intercept_generateFunction0(AG_intercept_generateFunction0)), Marshal.GetFunctionPointerForDelegate(new AG_delegate_intercept_generateTypeReference0(AG_intercept_generateTypeReference0)), Marshal.GetFunctionPointerForDelegate(new AG_delegate_intercept_generateTypeAlias0(AG_intercept_generateTypeAlias0)), Marshal.GetFunctionPointerForDelegate(new AG_delegate_intercept_generateBaseType0(AG_intercept_generateBaseType0)), Marshal.GetFunctionPointerForDelegate(new AG_delegate_intercept_generateNamedScope0(AG_intercept_generateNamedScope0)), Marshal.GetFunctionPointerForDelegate(new AG_delegate_intercept_generateArgumentSeparator0(AG_intercept_generateArgumentSeparator0)), Marshal.GetFunctionPointerForDelegate(new AG_delegate_intercept_generateReturnStatement0(AG_intercept_generateReturnStatement0)), Marshal.GetFunctionPointerForDelegate(new AG_delegate_intercept_generateBridgeCall0(AG_intercept_generateBridgeCall0)), Marshal.GetFunctionPointerForDelegate(new AG_delegate_intercept_generateInterceptionFunction0(AG_intercept_generateInterceptionFunction0)), Marshal.GetFunctionPointerForDelegate(new AG_delegate_intercept_generateInterceptionContext0(AG_intercept_generateInterceptionContext0)), Marshal.GetFunctionPointerForDelegate(new AG_delegate_intercept_getObjectHandleName0(AG_intercept_getObjectHandleName0)), Marshal.GetFunctionPointerForDelegate(new AG_delegate_intercept_initializeGenerationContext0(AG_intercept_initializeGenerationContext0)));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr ag_BindingGenerator_BindingGenerator0(IntPtr backend);
    public BindingGenerator(gencs.ag.Backend backend) : this(ag_BindingGenerator_BindingGenerator0(gencs.ag.Backend.AG_getObjectHandle(backend)))
    {
        AG_initializeInterceptionContext();
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern void ag_BindingGenerator_generateBindings0(IntPtr ObjectHandle, bool resetEntityContext);
    public void generateBindings(bool resetEntityContext)
    {
        ag_BindingGenerator_generateBindings0(mObjectHandle, resetEntityContext);
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern void ag_BindingGenerator_generateClass0(IntPtr ObjectHandle, IntPtr entity);
    public virtual void generateClass(gencs.ag.ClassEntity entity)
    {
        ag_BindingGenerator_generateClass0(mObjectHandle, gencs.ag.ClassEntity.AG_getObjectHandle(entity));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern void ag_BindingGenerator_generateEnum0(IntPtr ObjectHandle, IntPtr entity);
    public virtual void generateEnum(gencs.ag.EnumEntity entity)
    {
        ag_BindingGenerator_generateEnum0(mObjectHandle, gencs.ag.EnumEntity.AG_getObjectHandle(entity));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern void ag_BindingGenerator_generateEnumEntry0(IntPtr ObjectHandle, IntPtr entity);
    public virtual void generateEnumEntry(gencs.ag.EnumEntryEntity entity)
    {
        ag_BindingGenerator_generateEnumEntry0(mObjectHandle, gencs.ag.EnumEntryEntity.AG_getObjectHandle(entity));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern void ag_BindingGenerator_generateFunction0(IntPtr ObjectHandle, IntPtr entity);
    public virtual void generateFunction(gencs.ag.FunctionEntity entity)
    {
        ag_BindingGenerator_generateFunction0(mObjectHandle, gencs.ag.FunctionEntity.AG_getObjectHandle(entity));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern void ag_BindingGenerator_generateTypeReference0(IntPtr ObjectHandle, IntPtr entity);
    public virtual void generateTypeReference(gencs.ag.TypeReferenceEntity entity)
    {
        ag_BindingGenerator_generateTypeReference0(mObjectHandle, gencs.ag.TypeReferenceEntity.AG_getObjectHandle(entity));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern void ag_BindingGenerator_generateTypeAlias0(IntPtr ObjectHandle, IntPtr entity);
    public virtual void generateTypeAlias(gencs.ag.TypeAliasEntity entity)
    {
        ag_BindingGenerator_generateTypeAlias0(mObjectHandle, gencs.ag.TypeAliasEntity.AG_getObjectHandle(entity));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern bool ag_BindingGenerator_generateBaseType0(IntPtr ObjectHandle, IntPtr entity, int index);
    public virtual bool generateBaseType(gencs.ag.TypeEntity entity, int index)
    {
        return ag_BindingGenerator_generateBaseType0(mObjectHandle, gencs.ag.TypeEntity.AG_getObjectHandle(entity), index);
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern void ag_BindingGenerator_generateNamedScope0(IntPtr ObjectHandle, IntPtr entity);
    public virtual void generateNamedScope(gencs.ag.ScopeEntity entity)
    {
        ag_BindingGenerator_generateNamedScope0(mObjectHandle, gencs.ag.ScopeEntity.AG_getObjectHandle(entity));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern void ag_BindingGenerator_generateArgumentSeparator0(IntPtr ObjectHandle);
    public virtual void generateArgumentSeparator()
    {
        ag_BindingGenerator_generateArgumentSeparator0(mObjectHandle);
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern bool ag_BindingGenerator_generateReturnStatement0(IntPtr ObjectHandle, IntPtr entity, IntPtr target);
    public virtual bool generateReturnStatement(gencs.ag.TypeReferenceEntity entity, gencs.ag.FunctionEntity target)
    {
        return ag_BindingGenerator_generateReturnStatement0(mObjectHandle, gencs.ag.TypeReferenceEntity.AG_getObjectHandle(entity), gencs.ag.FunctionEntity.AG_getObjectHandle(target));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern void ag_BindingGenerator_generateBridgeCall0(IntPtr ObjectHandle, IntPtr entity);
    public virtual void generateBridgeCall(gencs.ag.FunctionEntity entity)
    {
        ag_BindingGenerator_generateBridgeCall0(mObjectHandle, gencs.ag.FunctionEntity.AG_getObjectHandle(entity));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern void ag_BindingGenerator_generateInterceptionFunction0(IntPtr ObjectHandle, IntPtr entity, IntPtr parentClass);
    public virtual void generateInterceptionFunction(gencs.ag.FunctionEntity entity, gencs.ag.ClassEntity parentClass)
    {
        ag_BindingGenerator_generateInterceptionFunction0(mObjectHandle, gencs.ag.FunctionEntity.AG_getObjectHandle(entity), gencs.ag.ClassEntity.AG_getObjectHandle(parentClass));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern void ag_BindingGenerator_generateInterceptionContext0(IntPtr ObjectHandle, IntPtr entity);
    public virtual void generateInterceptionContext(gencs.ag.ClassEntity entity)
    {
        ag_BindingGenerator_generateInterceptionContext0(mObjectHandle, gencs.ag.ClassEntity.AG_getObjectHandle(entity));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern void ag_BindingGenerator_changeClassDepth0(IntPtr ObjectHandle, int amount);
    public void changeClassDepth(int amount)
    {
        ag_BindingGenerator_changeClassDepth0(mObjectHandle, amount);
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr ag_BindingGenerator_getObjectHandleName0(IntPtr ObjectHandle);
    public virtual gencs.std.basic_String_viewCharacter_char_traitsCharacter getObjectHandleName()
    {
        return new gencs.std.basic_String_viewCharacter_char_traitsCharacter(ag_BindingGenerator_getObjectHandleName0(mObjectHandle));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern void ag_BindingGenerator_initializeGenerationContext0(IntPtr ObjectHandle, IntPtr entity);
    public virtual void initializeGenerationContext(gencs.ag.Entity entity)
    {
        ag_BindingGenerator_initializeGenerationContext0(mObjectHandle, gencs.ag.Entity.AG_getObjectHandle(entity));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern int ag_BindingGenerator_getClassDepth0(IntPtr ObjectHandle);
    protected int getClassDepth()
    {
        return ag_BindingGenerator_getClassDepth0(mObjectHandle);
    }
    public class ConcreteType : gencs.ag.BindingGenerator
    {
        public ConcreteType(IntPtr ObjectHandle) : base(ObjectHandle)
        {
        }
        [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
        private static extern void ag_BindingGenerator_ConcreteType_generateClass0(IntPtr ObjectHandle, IntPtr entity);
        public override void generateClass(gencs.ag.ClassEntity entity)
        {
            ag_BindingGenerator_ConcreteType_generateClass0(mObjectHandle, gencs.ag.ClassEntity.AG_getObjectHandle(entity));
        }
        [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
        private static extern void ag_BindingGenerator_ConcreteType_generateEnum0(IntPtr ObjectHandle, IntPtr entity);
        public override void generateEnum(gencs.ag.EnumEntity entity)
        {
            ag_BindingGenerator_ConcreteType_generateEnum0(mObjectHandle, gencs.ag.EnumEntity.AG_getObjectHandle(entity));
        }
        [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
        private static extern void ag_BindingGenerator_ConcreteType_generateEnumEntry0(IntPtr ObjectHandle, IntPtr entity);
        public override void generateEnumEntry(gencs.ag.EnumEntryEntity entity)
        {
            ag_BindingGenerator_ConcreteType_generateEnumEntry0(mObjectHandle, gencs.ag.EnumEntryEntity.AG_getObjectHandle(entity));
        }
        [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
        private static extern void ag_BindingGenerator_ConcreteType_generateFunction0(IntPtr ObjectHandle, IntPtr entity);
        public override void generateFunction(gencs.ag.FunctionEntity entity)
        {
            ag_BindingGenerator_ConcreteType_generateFunction0(mObjectHandle, gencs.ag.FunctionEntity.AG_getObjectHandle(entity));
        }
        [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
        private static extern void ag_BindingGenerator_ConcreteType_generateTypeReference0(IntPtr ObjectHandle, IntPtr entity);
        public override void generateTypeReference(gencs.ag.TypeReferenceEntity entity)
        {
            ag_BindingGenerator_ConcreteType_generateTypeReference0(mObjectHandle, gencs.ag.TypeReferenceEntity.AG_getObjectHandle(entity));
        }
        [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
        private static extern void ag_BindingGenerator_ConcreteType_generateTypeAlias0(IntPtr ObjectHandle, IntPtr entity);
        public override void generateTypeAlias(gencs.ag.TypeAliasEntity entity)
        {
            ag_BindingGenerator_ConcreteType_generateTypeAlias0(mObjectHandle, gencs.ag.TypeAliasEntity.AG_getObjectHandle(entity));
        }
        [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
        private static extern bool ag_BindingGenerator_ConcreteType_generateBaseType0(IntPtr ObjectHandle, IntPtr entity, int index);
        public override bool generateBaseType(gencs.ag.TypeEntity entity, int index)
        {
            return ag_BindingGenerator_ConcreteType_generateBaseType0(mObjectHandle, gencs.ag.TypeEntity.AG_getObjectHandle(entity), index);
        }
        [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
        private static extern void ag_BindingGenerator_ConcreteType_generateNamedScope0(IntPtr ObjectHandle, IntPtr entity);
        public override void generateNamedScope(gencs.ag.ScopeEntity entity)
        {
            ag_BindingGenerator_ConcreteType_generateNamedScope0(mObjectHandle, gencs.ag.ScopeEntity.AG_getObjectHandle(entity));
        }
        [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
        private static extern void ag_BindingGenerator_ConcreteType_generateArgumentSeparator0(IntPtr ObjectHandle);
        public override void generateArgumentSeparator()
        {
            ag_BindingGenerator_ConcreteType_generateArgumentSeparator0(mObjectHandle);
        }
        [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
        private static extern bool ag_BindingGenerator_ConcreteType_generateReturnStatement0(IntPtr ObjectHandle, IntPtr entity, IntPtr target);
        public override bool generateReturnStatement(gencs.ag.TypeReferenceEntity entity, gencs.ag.FunctionEntity target)
        {
            return ag_BindingGenerator_ConcreteType_generateReturnStatement0(mObjectHandle, gencs.ag.TypeReferenceEntity.AG_getObjectHandle(entity), gencs.ag.FunctionEntity.AG_getObjectHandle(target));
        }
        [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
        private static extern void ag_BindingGenerator_ConcreteType_generateBridgeCall0(IntPtr ObjectHandle, IntPtr entity);
        public override void generateBridgeCall(gencs.ag.FunctionEntity entity)
        {
            ag_BindingGenerator_ConcreteType_generateBridgeCall0(mObjectHandle, gencs.ag.FunctionEntity.AG_getObjectHandle(entity));
        }
        [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
        private static extern void ag_BindingGenerator_ConcreteType_generateInterceptionFunction0(IntPtr ObjectHandle, IntPtr entity, IntPtr parentClass);
        public override void generateInterceptionFunction(gencs.ag.FunctionEntity entity, gencs.ag.ClassEntity parentClass)
        {
            ag_BindingGenerator_ConcreteType_generateInterceptionFunction0(mObjectHandle, gencs.ag.FunctionEntity.AG_getObjectHandle(entity), gencs.ag.ClassEntity.AG_getObjectHandle(parentClass));
        }
        [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
        private static extern void ag_BindingGenerator_ConcreteType_generateInterceptionContext0(IntPtr ObjectHandle, IntPtr entity);
        public override void generateInterceptionContext(gencs.ag.ClassEntity entity)
        {
            ag_BindingGenerator_ConcreteType_generateInterceptionContext0(mObjectHandle, gencs.ag.ClassEntity.AG_getObjectHandle(entity));
        }
        [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
        private static extern IntPtr ag_BindingGenerator_ConcreteType_getObjectHandleName0(IntPtr ObjectHandle);
        public override gencs.std.basic_String_viewCharacter_char_traitsCharacter getObjectHandleName()
        {
            return new gencs.std.basic_String_viewCharacter_char_traitsCharacter(ag_BindingGenerator_ConcreteType_getObjectHandleName0(mObjectHandle));
        }
        [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
        private static extern void ag_BindingGenerator_ConcreteType_initializeGenerationContext0(IntPtr ObjectHandle, IntPtr entity);
        public override void initializeGenerationContext(gencs.ag.Entity entity)
        {
            ag_BindingGenerator_ConcreteType_initializeGenerationContext0(mObjectHandle, gencs.ag.Entity.AG_getObjectHandle(entity));
        }
    }
}
