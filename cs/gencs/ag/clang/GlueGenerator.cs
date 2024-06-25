using System.Runtime.InteropServices;
namespace gencs.ag.clang;
public class GlueGenerator : gencs.ag.BindingGenerator
{
    public GlueGenerator(IntPtr ObjectHandle) : base(ObjectHandle)
    {
    }
    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    private delegate void AG_delegate_intercept_generateEnum0(IntPtr ObjectHandle, IntPtr entity);
    internal static void AG_intercept_generateEnum0(IntPtr ObjectHandle, IntPtr entity)
    {
        ((((GCHandle)ObjectHandle).Target) as GlueGenerator).generateEnum(new gencs.ag.EnumEntity(entity));
    }
    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    private delegate void AG_delegate_intercept_generateEnumEntry0(IntPtr ObjectHandle, IntPtr entity);
    internal static void AG_intercept_generateEnumEntry0(IntPtr ObjectHandle, IntPtr entity)
    {
        ((((GCHandle)ObjectHandle).Target) as GlueGenerator).generateEnumEntry(new gencs.ag.EnumEntryEntity(entity));
    }
    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    private delegate void AG_delegate_intercept_generateTypeAlias0(IntPtr ObjectHandle, IntPtr entity);
    internal static void AG_intercept_generateTypeAlias0(IntPtr ObjectHandle, IntPtr entity)
    {
        ((((GCHandle)ObjectHandle).Target) as GlueGenerator).generateTypeAlias(new gencs.ag.TypeAliasEntity(entity));
    }
    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    private delegate bool AG_delegate_intercept_generateBaseType0(IntPtr ObjectHandle, IntPtr entity, int index);
    internal static bool AG_intercept_generateBaseType0(IntPtr ObjectHandle, IntPtr entity, int index)
    {
        return ((((GCHandle)ObjectHandle).Target) as GlueGenerator).generateBaseType(new gencs.ag.TypeEntity.ConcreteType(entity), index);
    }
    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    private delegate void AG_delegate_intercept_initializeGenerationContext0(IntPtr ObjectHandle, IntPtr entity);
    internal static void AG_intercept_initializeGenerationContext0(IntPtr ObjectHandle, IntPtr entity)
    {
        ((((GCHandle)ObjectHandle).Target) as GlueGenerator).initializeGenerationContext(new gencs.ag.Entity.ConcreteType(entity));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern void ag_clang_GlueGenerator_AG_initializeInterceptionContext(IntPtr ObjectHandle, IntPtr AG_foreignObject, IntPtr AG_intercept_generateEnum0, IntPtr AG_intercept_generateEnumEntry0, IntPtr AG_intercept_generateTypeAlias0, IntPtr AG_intercept_generateBaseType0, IntPtr AG_intercept_initializeGenerationContext0);
    private void AG_initializeInterceptionContext()
    {
        ag_clang_GlueGenerator_AG_initializeInterceptionContext(mObjectHandle, (IntPtr)GCHandle.Alloc(this), Marshal.GetFunctionPointerForDelegate(new AG_delegate_intercept_generateEnum0(AG_intercept_generateEnum0)), Marshal.GetFunctionPointerForDelegate(new AG_delegate_intercept_generateEnumEntry0(AG_intercept_generateEnumEntry0)), Marshal.GetFunctionPointerForDelegate(new AG_delegate_intercept_generateTypeAlias0(AG_intercept_generateTypeAlias0)), Marshal.GetFunctionPointerForDelegate(new AG_delegate_intercept_generateBaseType0(AG_intercept_generateBaseType0)), Marshal.GetFunctionPointerForDelegate(new AG_delegate_intercept_initializeGenerationContext0(AG_intercept_initializeGenerationContext0)));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr ag_clang_GlueGenerator_GlueGenerator0(IntPtr backend);
    public GlueGenerator(gencs.ag.clang.Backend backend) : this(ag_clang_GlueGenerator_GlueGenerator0(gencs.ag.clang.Backend.AG_getObjectHandle(backend)))
    {
        AG_initializeInterceptionContext();
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr ag_clang_GlueGenerator_GlueGenerator1(IntPtr param1);
    public GlueGenerator(gencs.ag.clang.GlueGenerator param1) : this(ag_clang_GlueGenerator_GlueGenerator1(gencs.ag.clang.GlueGenerator.AG_getObjectHandle(param1)))
    {
        AG_initializeInterceptionContext();
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern void ag_clang_GlueGenerator_generateTypeReference0(IntPtr ObjectHandle, IntPtr entity);
    public override void generateTypeReference(gencs.ag.TypeReferenceEntity entity)
    {
        ag_clang_GlueGenerator_generateTypeReference0(mObjectHandle, gencs.ag.TypeReferenceEntity.AG_getObjectHandle(entity));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern void ag_clang_GlueGenerator_generateFunction0(IntPtr ObjectHandle, IntPtr entity);
    public override void generateFunction(gencs.ag.FunctionEntity entity)
    {
        ag_clang_GlueGenerator_generateFunction0(mObjectHandle, gencs.ag.FunctionEntity.AG_getObjectHandle(entity));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern void ag_clang_GlueGenerator_generateNamedScope0(IntPtr ObjectHandle, IntPtr entity);
    public override void generateNamedScope(gencs.ag.ScopeEntity entity)
    {
        ag_clang_GlueGenerator_generateNamedScope0(mObjectHandle, gencs.ag.ScopeEntity.AG_getObjectHandle(entity));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern void ag_clang_GlueGenerator_generateClass0(IntPtr ObjectHandle, IntPtr entity);
    public override void generateClass(gencs.ag.ClassEntity entity)
    {
        ag_clang_GlueGenerator_generateClass0(mObjectHandle, gencs.ag.ClassEntity.AG_getObjectHandle(entity));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern void ag_clang_GlueGenerator_generateArgumentSeparator0(IntPtr ObjectHandle);
    public override void generateArgumentSeparator()
    {
        ag_clang_GlueGenerator_generateArgumentSeparator0(mObjectHandle);
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr ag_clang_GlueGenerator_getObjectHandleName0(IntPtr ObjectHandle);
    public override gencs.std.basic_String_viewCharacter_char_traitsCharacter getObjectHandleName()
    {
        return new gencs.std.basic_String_viewCharacter_char_traitsCharacter(ag_clang_GlueGenerator_getObjectHandleName0(mObjectHandle));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern bool ag_clang_GlueGenerator_generateReturnStatement0(IntPtr ObjectHandle, IntPtr entity, IntPtr target);
    public override bool generateReturnStatement(gencs.ag.TypeReferenceEntity entity, gencs.ag.FunctionEntity target)
    {
        return ag_clang_GlueGenerator_generateReturnStatement0(mObjectHandle, gencs.ag.TypeReferenceEntity.AG_getObjectHandle(entity), gencs.ag.FunctionEntity.AG_getObjectHandle(target));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern void ag_clang_GlueGenerator_generateBridgeCall0(IntPtr ObjectHandle, IntPtr target);
    public override void generateBridgeCall(gencs.ag.FunctionEntity target)
    {
        ag_clang_GlueGenerator_generateBridgeCall0(mObjectHandle, gencs.ag.FunctionEntity.AG_getObjectHandle(target));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern void ag_clang_GlueGenerator_generateInterceptionFunction0(IntPtr ObjectHandle, IntPtr target, IntPtr parentClass);
    public override void generateInterceptionFunction(gencs.ag.FunctionEntity target, gencs.ag.ClassEntity parentClass)
    {
        ag_clang_GlueGenerator_generateInterceptionFunction0(mObjectHandle, gencs.ag.FunctionEntity.AG_getObjectHandle(target), gencs.ag.ClassEntity.AG_getObjectHandle(parentClass));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern void ag_clang_GlueGenerator_generateInterceptionContext0(IntPtr ObjectHandle, IntPtr entity);
    public override void generateInterceptionContext(gencs.ag.ClassEntity entity)
    {
        ag_clang_GlueGenerator_generateInterceptionContext0(mObjectHandle, gencs.ag.ClassEntity.AG_getObjectHandle(entity));
    }
    public class ConcreteType : gencs.ag.clang.GlueGenerator
    {
        public ConcreteType(IntPtr ObjectHandle) : base(ObjectHandle)
        {
        }
        [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
        private static extern void ag_clang_GlueGenerator_ConcreteType_generateEnum0(IntPtr ObjectHandle, IntPtr entity);
        public override void generateEnum(gencs.ag.EnumEntity entity)
        {
            ag_clang_GlueGenerator_ConcreteType_generateEnum0(mObjectHandle, gencs.ag.EnumEntity.AG_getObjectHandle(entity));
        }
        [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
        private static extern void ag_clang_GlueGenerator_ConcreteType_generateEnumEntry0(IntPtr ObjectHandle, IntPtr entity);
        public override void generateEnumEntry(gencs.ag.EnumEntryEntity entity)
        {
            ag_clang_GlueGenerator_ConcreteType_generateEnumEntry0(mObjectHandle, gencs.ag.EnumEntryEntity.AG_getObjectHandle(entity));
        }
        [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
        private static extern void ag_clang_GlueGenerator_ConcreteType_generateTypeAlias0(IntPtr ObjectHandle, IntPtr entity);
        public override void generateTypeAlias(gencs.ag.TypeAliasEntity entity)
        {
            ag_clang_GlueGenerator_ConcreteType_generateTypeAlias0(mObjectHandle, gencs.ag.TypeAliasEntity.AG_getObjectHandle(entity));
        }
        [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
        private static extern bool ag_clang_GlueGenerator_ConcreteType_generateBaseType0(IntPtr ObjectHandle, IntPtr entity, int index);
        public override bool generateBaseType(gencs.ag.TypeEntity entity, int index)
        {
            return ag_clang_GlueGenerator_ConcreteType_generateBaseType0(mObjectHandle, gencs.ag.TypeEntity.AG_getObjectHandle(entity), index);
        }
        [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
        private static extern void ag_clang_GlueGenerator_ConcreteType_initializeGenerationContext0(IntPtr ObjectHandle, IntPtr entity);
        public override void initializeGenerationContext(gencs.ag.Entity entity)
        {
            ag_clang_GlueGenerator_ConcreteType_initializeGenerationContext0(mObjectHandle, gencs.ag.Entity.AG_getObjectHandle(entity));
        }
    }
}
