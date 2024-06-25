using System.Runtime.InteropServices;
namespace gencs.ag.clang;
public class OverloadContext : gencs.ag.clang.EntityContext
{
    public OverloadContext(IntPtr ObjectHandle) : base(ObjectHandle)
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr ag_clang_OverloadContext_OverloadContext0(IntPtr decl, IntPtr privateOverrides);
    public OverloadContext(gencs.clang.FunctionDecl decl, gencs.std.weak_ptrFunctionGroupEntity privateOverrides) : this(ag_clang_OverloadContext_OverloadContext0(gencs.clang.FunctionDecl.AG_getObjectHandle(decl), gencs.std.weak_ptrFunctionGroupEntity.AG_getObjectHandle(privateOverrides)))
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr ag_clang_OverloadContext_OverloadContext1(IntPtr param1);
    public OverloadContext(gencs.ag.clang.OverloadContext param1) : this(ag_clang_OverloadContext_OverloadContext1(gencs.ag.clang.OverloadContext.AG_getObjectHandle(param1)))
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr ag_clang_OverloadContext_getEastQualifiers0(IntPtr ObjectHandle);
    public gencs.std.basic_StringCharacter_char_traitsCharacter_allocatorCharacter getEastQualifiers()
    {
        return new gencs.std.basic_StringCharacter_char_traitsCharacter_allocatorCharacter(ag_clang_OverloadContext_getEastQualifiers0(mObjectHandle));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern bool ag_clang_OverloadContext_isPrivateOverride0(IntPtr ObjectHandle);
    public bool isPrivateOverride()
    {
        return ag_clang_OverloadContext_isPrivateOverride0(mObjectHandle);
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr ag_clang_OverloadContext_getOverriddenInterface0(IntPtr ObjectHandle);
    public gencs.std.shared_ptrFunctionGroupEntity getOverriddenInterface()
    {
        return new gencs.std.shared_ptrFunctionGroupEntity(ag_clang_OverloadContext_getOverriddenInterface0(mObjectHandle));
    }
}
