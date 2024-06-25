using System.Runtime.InteropServices;
namespace gencs.ag.clang;
public class FunctionContext : gencs.ag.clang.EntityContext
{
    public FunctionContext(IntPtr ObjectHandle) : base(ObjectHandle)
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr ag_clang_FunctionContext_FunctionContext0(IntPtr decl);
    public FunctionContext(gencs.clang.FunctionDecl decl) : this(ag_clang_FunctionContext_FunctionContext0(gencs.clang.FunctionDecl.AG_getObjectHandle(decl)))
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr ag_clang_FunctionContext_FunctionContext1(IntPtr param1);
    public FunctionContext(gencs.ag.clang.FunctionContext param1) : this(ag_clang_FunctionContext_FunctionContext1(gencs.ag.clang.FunctionContext.AG_getObjectHandle(param1)))
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr ag_clang_FunctionContext_getSelfType0(IntPtr ObjectHandle);
    public gencs.std.basic_String_viewCharacter_char_traitsCharacter getSelfType()
    {
        return new gencs.std.basic_String_viewCharacter_char_traitsCharacter(ag_clang_FunctionContext_getSelfType0(mObjectHandle));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr ag_clang_FunctionContext_getOriginalName0(IntPtr ObjectHandle);
    public gencs.std.basic_String_viewCharacter_char_traitsCharacter getOriginalName()
    {
        return new gencs.std.basic_String_viewCharacter_char_traitsCharacter(ag_clang_FunctionContext_getOriginalName0(mObjectHandle));
    }
}
