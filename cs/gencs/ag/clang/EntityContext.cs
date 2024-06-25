using System.Runtime.InteropServices;
namespace gencs.ag.clang;
public class EntityContext : gencs.ag.EntityContext
{
    public EntityContext(IntPtr ObjectHandle) : base(ObjectHandle)
    {
        baseenable_shared_from_thisEntityContext = createBase_enable_shared_from_thisEntityContext();
    }
    public readonly gencs.std.enable_shared_from_thisEntityContext baseenable_shared_from_thisEntityContext;
    protected virtual gencs.std.enable_shared_from_thisEntityContext createBase_enable_shared_from_thisEntityContext()
    {
        return new gencs.std.enable_shared_from_thisEntityContext(mObjectHandle);
    }
    public enum Type : int
    {
        Typeref = 0,
        Type = 1,
        Function = 2,
        Overload = 3
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr ag_clang_EntityContext_EntityContext0(int type);
    public EntityContext(gencs.ag.clang.EntityContext.Type type) : this(ag_clang_EntityContext_EntityContext0((int)type))
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr ag_clang_EntityContext_EntityContext1(IntPtr param1);
    public EntityContext(gencs.ag.clang.EntityContext param1) : this(ag_clang_EntityContext_EntityContext1(gencs.ag.clang.EntityContext.AG_getObjectHandle(param1)))
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr ag_clang_EntityContext_getTypeContext0(IntPtr ObjectHandle);
    public gencs.std.shared_ptrTypeContext getTypeContext()
    {
        return new gencs.std.shared_ptrTypeContext(ag_clang_EntityContext_getTypeContext0(mObjectHandle));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr ag_clang_EntityContext_getTyperefContext0(IntPtr ObjectHandle);
    public gencs.std.shared_ptrTyperefContext getTyperefContext()
    {
        return new gencs.std.shared_ptrTyperefContext(ag_clang_EntityContext_getTyperefContext0(mObjectHandle));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr ag_clang_EntityContext_getFunctionContext0(IntPtr ObjectHandle);
    public gencs.std.shared_ptrFunctionContext getFunctionContext()
    {
        return new gencs.std.shared_ptrFunctionContext(ag_clang_EntityContext_getFunctionContext0(mObjectHandle));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr ag_clang_EntityContext_getOverloadContext0(IntPtr ObjectHandle);
    public gencs.std.shared_ptrOverloadContext getOverloadContext()
    {
        return new gencs.std.shared_ptrOverloadContext(ag_clang_EntityContext_getOverloadContext0(mObjectHandle));
    }
}
