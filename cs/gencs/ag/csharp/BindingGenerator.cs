using System.Runtime.InteropServices;
namespace gencs.ag.csharp;
public class BindingGenerator : gencs.ag.BindingGenerator
{
    public BindingGenerator(IntPtr ObjectHandle) : base(ObjectHandle)
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern void ag_csharp_BindingGenerator_AG_initializeInterceptionContext(IntPtr ObjectHandle, IntPtr AG_foreignObject);
    private void AG_initializeInterceptionContext()
    {
        ag_csharp_BindingGenerator_AG_initializeInterceptionContext(mObjectHandle, (IntPtr)GCHandle.Alloc(this));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr ag_csharp_BindingGenerator_BindingGenerator0(IntPtr backend, IntPtr libName);
    public BindingGenerator(gencs.ag.Backend backend, gencs.std.basic_String_viewCharacter_char_traitsCharacter libName) : this(ag_csharp_BindingGenerator_BindingGenerator0(gencs.ag.Backend.AG_getObjectHandle(backend), gencs.std.basic_String_viewCharacter_char_traitsCharacter.AG_getObjectHandle(libName)))
    {
        AG_initializeInterceptionContext();
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr ag_csharp_BindingGenerator_BindingGenerator1(IntPtr param1);
    public BindingGenerator(gencs.ag.csharp.BindingGenerator param1) : this(ag_csharp_BindingGenerator_BindingGenerator1(gencs.ag.csharp.BindingGenerator.AG_getObjectHandle(param1)))
    {
        AG_initializeInterceptionContext();
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern void ag_csharp_BindingGenerator_generateClass0(IntPtr ObjectHandle, IntPtr entity);
    public override void generateClass(gencs.ag.ClassEntity entity)
    {
        ag_csharp_BindingGenerator_generateClass0(mObjectHandle, gencs.ag.ClassEntity.AG_getObjectHandle(entity));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern void ag_csharp_BindingGenerator_generateEnum0(IntPtr ObjectHandle, IntPtr entity);
    public override void generateEnum(gencs.ag.EnumEntity entity)
    {
        ag_csharp_BindingGenerator_generateEnum0(mObjectHandle, gencs.ag.EnumEntity.AG_getObjectHandle(entity));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern void ag_csharp_BindingGenerator_generateEnumEntry0(IntPtr ObjectHandle, IntPtr entity);
    public override void generateEnumEntry(gencs.ag.EnumEntryEntity entity)
    {
        ag_csharp_BindingGenerator_generateEnumEntry0(mObjectHandle, gencs.ag.EnumEntryEntity.AG_getObjectHandle(entity));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern void ag_csharp_BindingGenerator_generateFunction0(IntPtr ObjectHandle, IntPtr entity);
    public override void generateFunction(gencs.ag.FunctionEntity entity)
    {
        ag_csharp_BindingGenerator_generateFunction0(mObjectHandle, gencs.ag.FunctionEntity.AG_getObjectHandle(entity));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern void ag_csharp_BindingGenerator_generateTypeReference0(IntPtr ObjectHandle, IntPtr entity);
    public override void generateTypeReference(gencs.ag.TypeReferenceEntity entity)
    {
        ag_csharp_BindingGenerator_generateTypeReference0(mObjectHandle, gencs.ag.TypeReferenceEntity.AG_getObjectHandle(entity));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern void ag_csharp_BindingGenerator_generateTypeAlias0(IntPtr ObjectHandle, IntPtr entity);
    public override void generateTypeAlias(gencs.ag.TypeAliasEntity entity)
    {
        ag_csharp_BindingGenerator_generateTypeAlias0(mObjectHandle, gencs.ag.TypeAliasEntity.AG_getObjectHandle(entity));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern bool ag_csharp_BindingGenerator_generateBaseType0(IntPtr ObjectHandle, IntPtr entity, int index);
    public override bool generateBaseType(gencs.ag.TypeEntity entity, int index)
    {
        return ag_csharp_BindingGenerator_generateBaseType0(mObjectHandle, gencs.ag.TypeEntity.AG_getObjectHandle(entity), index);
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern void ag_csharp_BindingGenerator_generateNamedScope0(IntPtr ObjectHandle, IntPtr entity);
    public override void generateNamedScope(gencs.ag.ScopeEntity entity)
    {
        ag_csharp_BindingGenerator_generateNamedScope0(mObjectHandle, gencs.ag.ScopeEntity.AG_getObjectHandle(entity));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern void ag_csharp_BindingGenerator_generateArgumentSeparator0(IntPtr ObjectHandle);
    public override void generateArgumentSeparator()
    {
        ag_csharp_BindingGenerator_generateArgumentSeparator0(mObjectHandle);
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern bool ag_csharp_BindingGenerator_generateReturnStatement0(IntPtr ObjectHandle, IntPtr entity, IntPtr target);
    public override bool generateReturnStatement(gencs.ag.TypeReferenceEntity entity, gencs.ag.FunctionEntity target)
    {
        return ag_csharp_BindingGenerator_generateReturnStatement0(mObjectHandle, gencs.ag.TypeReferenceEntity.AG_getObjectHandle(entity), gencs.ag.FunctionEntity.AG_getObjectHandle(target));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern void ag_csharp_BindingGenerator_generateBridgeCall0(IntPtr ObjectHandle, IntPtr entity);
    public override void generateBridgeCall(gencs.ag.FunctionEntity entity)
    {
        ag_csharp_BindingGenerator_generateBridgeCall0(mObjectHandle, gencs.ag.FunctionEntity.AG_getObjectHandle(entity));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern void ag_csharp_BindingGenerator_generateInterceptionFunction0(IntPtr ObjectHandle, IntPtr entity, IntPtr parentClass);
    public override void generateInterceptionFunction(gencs.ag.FunctionEntity entity, gencs.ag.ClassEntity parentClass)
    {
        ag_csharp_BindingGenerator_generateInterceptionFunction0(mObjectHandle, gencs.ag.FunctionEntity.AG_getObjectHandle(entity), gencs.ag.ClassEntity.AG_getObjectHandle(parentClass));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern void ag_csharp_BindingGenerator_generateInterceptionContext0(IntPtr ObjectHandle, IntPtr entity);
    public override void generateInterceptionContext(gencs.ag.ClassEntity entity)
    {
        ag_csharp_BindingGenerator_generateInterceptionContext0(mObjectHandle, gencs.ag.ClassEntity.AG_getObjectHandle(entity));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr ag_csharp_BindingGenerator_getObjectHandleName0(IntPtr ObjectHandle);
    public override gencs.std.basic_String_viewCharacter_char_traitsCharacter getObjectHandleName()
    {
        return new gencs.std.basic_String_viewCharacter_char_traitsCharacter(ag_csharp_BindingGenerator_getObjectHandleName0(mObjectHandle));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern void ag_csharp_BindingGenerator_initializeGenerationContext0(IntPtr ObjectHandle, IntPtr entity);
    public override void initializeGenerationContext(gencs.ag.Entity entity)
    {
        ag_csharp_BindingGenerator_initializeGenerationContext0(mObjectHandle, gencs.ag.Entity.AG_getObjectHandle(entity));
    }
}
